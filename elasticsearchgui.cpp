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

  QFile f("nais.config");
  if (!f.open(QFile::ReadOnly | QFile::Text)){
    qDebug() << "error config file can't be loaded";
  }
  QTextStream in(&f);
  TOKEN = in.readAll().split('\n')[0];
  qDebug() << "token loaded ";
  HOST = in.readAll().split('\n')[1];
  qDebug() << "host loaded ";
  INDEX = in.readAll().split('\n')[2];
  qDebug() << "index loaded ";



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
  ui->lineEdit->setText("");
}



void ElasticSearchGUI::on_categorySel_currentIndexChanged(int index)
{
  qDebug() << index;
  SEL = index;

}



void ElasticSearchGUI::ask(QString &input){

  QNetworkRequest request;
  QString filename = "https://"+TOKEN+"@"+HOST+"/"+INDEX+"/_search?size=1000&q="+CATEGORY[SEL]+":"+input;

  if(SEL==4){
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

    foreach (const QJsonValue & value, hits) {
      QJsonObject obj = value.toObject();
      QJsonObject source = obj["_source"].toObject();
      qDebug() << source.value("NAZEV-KATALOG").toString();
      answer << source.value("NAZEV-KATALOG").toString() + ", " + source.value("FILMID").toString() + ", " + source.value("ROK-VYROBY").toString();
    }

    QString str = answer.join("\n");

    ui->textEdit->setText(str);



  }
  else // something went wrong
  {
    qDebug() << "Json File Failed to Load : " << filename;
    qDebug() << "Error : " << reply->errorString();
  }
  reply->deleteLater();


}
