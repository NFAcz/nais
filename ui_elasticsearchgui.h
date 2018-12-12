/********************************************************************************
** Form generated from reading UI file 'elasticsearchgui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELASTICSEARCHGUI_H
#define UI_ELASTICSEARCHGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElasticSearchGUI
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *categorySel;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ElasticSearchGUI)
    {
        if (ElasticSearchGUI->objectName().isEmpty())
            ElasticSearchGUI->setObjectName(QStringLiteral("ElasticSearchGUI"));
        ElasticSearchGUI->resize(419, 547);
        centralWidget = new QWidget(ElasticSearchGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 401, 431));
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox->setFlat(true);
        categorySel = new QComboBox(groupBox);
        categorySel->setObjectName(QStringLiteral("categorySel"));
        categorySel->setGeometry(QRect(110, 60, 151, 22));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(9, 30, 381, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 60, 70, 20));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(9, 90, 381, 320));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 60, 80, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 130, 60));
        QFont font;
        font.setFamily(QStringLiteral("Executive"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        ElasticSearchGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ElasticSearchGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 17));
        ElasticSearchGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ElasticSearchGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ElasticSearchGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ElasticSearchGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ElasticSearchGUI->setStatusBar(statusBar);

        retranslateUi(ElasticSearchGUI);

        QMetaObject::connectSlotsByName(ElasticSearchGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ElasticSearchGUI)
    {
        ElasticSearchGUI->setWindowTitle(QApplication::translate("ElasticSearchGUI", "ElasticSearchGUI", Q_NULLPTR));
        groupBox->setTitle(QString());
        categorySel->clear();
        categorySel->insertItems(0, QStringList()
         << QApplication::translate("ElasticSearchGUI", "N\303\241zev filmu", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "AIS \304\215\303\255slo", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Rok", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Re\305\276ie", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "V\305\241echny kategorie", Q_NULLPTR)
        );
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("ElasticSearchGUI", "Hledej", Q_NULLPTR));
        label->setText(QApplication::translate("ElasticSearchGUI", "NFA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ElasticSearchGUI: public Ui_ElasticSearchGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELASTICSEARCHGUI_H
