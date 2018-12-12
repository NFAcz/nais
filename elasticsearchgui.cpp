#include "elasticsearchgui.h"
#include "ui_elasticsearchgui.h"

#include <QDebug>
#include <QtNetwork>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrlQuery>
#include <QNetworkReply>
#include <QUrl>
#include <QTableView>
#include <QStandardItemModel>

QString version = "0.1";
QStringList CATEGORY;
int SEL = 0;
QString TOKEN = "putYourCredentialsInfile_nais.config";
QString HOST = "putYoutHostInFile_nais.config";
QString INDEX = "putYoutIndexInFile_nais.config";

ElasticSearchGUI::ElasticSearchGUI(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::ElasticSearchGUI)
{
  qDebug() << "starting setup";

  CATEGORY << "FULLTEXT" << "NAZEV-KATALOG" << "FILMID" << "ROK-VYROBY" << "REZIE";

  QFile f("nais.config");
  if (!f.open(QFile::ReadOnly | QFile::Text)){
    qDebug() << "error config file can't be loaded";
  }
  QTextStream in(&f);
  HOST = in.readLine();
  TOKEN = in.readLine();
  INDEX = in.readLine();


  ui->setupUi(this);
}

ElasticSearchGUI::~ElasticSearchGUI()
{
  delete ui;
}

/*
   void ElasticSearchGUI::on_pushButton_clicked()
   {

   }
   */

void ElasticSearchGUI::on_pushButton_released()
{
  QString text = ui->lineEdit->text();
  qDebug() << "query is:" << text;

  ask(text);
//  ui->lineEdit->setText("");
}


void ElasticSearchGUI::on_lineEdit_returnPressed()
{
    QString text = ui->lineEdit->text();
    qDebug() << "query is:" << text;

    ask(text);
//    ui->lineEdit->setText("");
}


void ElasticSearchGUI::on_categorySel_currentIndexChanged(int index)
{
  qDebug() << index;
  SEL = index;

}



void ElasticSearchGUI::ask(QString &input){

  QNetworkRequest request;
  QString filename = "https://"+TOKEN+"@"+HOST+"/"+INDEX+"/_search?size=1000&q="+CATEGORY[SEL]+":"+input;

  if(SEL==0){
    filename = "https://"+TOKEN+"@"+HOST+"/_all/_search?size=1000&q="+input;
  }

  request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
  request.setSslConfiguration(QSslConfiguration::defaultConfiguration());
  request.setUrl(QUrl(filename));

  QJsonObject json;
  QNetworkAccessManager nam;
  QNetworkReply *reply = nam.post(request, QJsonDocument(json).toJson());

  while(!reply->isFinished())
  {
    qApp->processEvents();
  }

  if (reply->error() == QNetworkReply::NoError)
  {
    QByteArray response_data = reply->readAll();
    QJsonDocument document = QJsonDocument::fromJson(response_data);
    QJsonObject object = document.object();
    qDebug() << "Json File Loaded : " << filename;

    QJsonObject hitsTmp = object["hits"].toObject();
    QString count = QVariant(hitsTmp.value("total").toInt()).toString();
    qDebug() << "count: " << count;

    if(count=="0"){
      ui->label_2->setText(QString("hits: 0"));
    }else{
      ui->label_2->setText("hits: " + count);
    }


    QJsonArray hits = hitsTmp["hits"].toArray();
    QStringList answer;


    QTreeWidget * tree = ui->treeWidget;
    tree->clear();

    foreach (const QJsonValue & value, hits) {
      QJsonObject obj = value.toObject();
      QJsonObject source = obj["_source"].toObject();

      QTreeWidgetItem * topLevel = new QTreeWidgetItem();
      topLevel->setText(0, source.value("NAZEV-KATALOG").toString());
      topLevel->setText(1, source.value("FILMID").toString());
      topLevel->setText(2, source.value("ROK-VYROBY").toString());
      topLevel->setText(3, source.value("REZIE").toString());

//      topLevel->setText(4, source.value("MATERIAL").toObject().value("DILY-KOMBIN-MATERIALU").toObject().value("DELKA-CELEM").toString());

      /*
      for(int i = 0 ; i < source.size(); i++){
          QTreeWidgetItem * item = new QTreeWidgetItem();
             item->setText(0,source.keys()[i] + ": " + source.value(source.keys()[i]).toString());
             topLevel->addChild(item);

      }
      */

      QJsonObject::iterator i;
          for (i = source.begin(); i != source.end(); ++i) {
              if (i.value().isNull()){
                  QTreeWidgetItem * item = new QTreeWidgetItem();
                  QString tmp = i.key();
                  item->setText(0,tmp);
                  topLevel->addChild(item);
              }else if (i.value().isObject()) {
                  QJsonObject innerObject = i.value().toObject();
                  QTreeWidgetItem * item = new QTreeWidgetItem();
                  QJsonObject::iterator j;
                  QString tmp = "";
                      for (j = innerObject.begin(); j != innerObject.end(); ++j) {
                          if (j.value().isObject()) {
                              tmp+=j.key()+"\n";
                          }
                  }
                  item->setText(0,tmp);
                  topLevel->addChild(item);
              }else{
                  QTreeWidgetItem * item = new QTreeWidgetItem();
                  QString tmp = i.key()+ ": "+ i.value().toString();
                  item->setText(0,tmp);
                  topLevel->addChild(item);
                  }
          }
      tree->addTopLevelItem(topLevel);
    }
  }
  else // something went wrong
  {
    qDebug() << "Json File Failed to Load : " << filename;
    qDebug() << "Error : " << reply->errorString();
  }
  reply->deleteLater();


}

