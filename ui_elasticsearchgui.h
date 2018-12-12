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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QComboBox *categorySel;
    QLabel *label_2;
    QTextEdit *outputBox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ElasticSearchGUI)
    {
        if (ElasticSearchGUI->objectName().isEmpty())
            ElasticSearchGUI->setObjectName(QStringLiteral("ElasticSearchGUI"));
        ElasticSearchGUI->resize(997, 591);
        centralWidget = new QWidget(ElasticSearchGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 401, 451));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        categorySel = new QComboBox(groupBox);
        categorySel->setObjectName(QStringLiteral("categorySel"));

        gridLayout->addWidget(categorySel, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        outputBox = new QTextEdit(groupBox);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        outputBox->setAutoFillBackground(true);

        gridLayout->addWidget(outputBox, 2, 0, 1, 3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 381, 60));
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
        menuBar->setGeometry(QRect(0, 0, 997, 17));
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
        ElasticSearchGUI->setWindowTitle(QApplication::translate("ElasticSearchGUI", "nAIS", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("ElasticSearchGUI", "Hledej", Q_NULLPTR));
        categorySel->clear();
        categorySel->insertItems(0, QStringList()
         << QApplication::translate("ElasticSearchGUI", "V\305\241echny kategorie", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "N\303\241zev filmu", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "AIS \304\215\303\255slo", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Rok", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Re\305\276ie", Q_NULLPTR)
        );
        label_2->setText(QString());
        label->setText(QApplication::translate("ElasticSearchGUI", "AIS NOT DEAD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ElasticSearchGUI: public Ui_ElasticSearchGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELASTICSEARCHGUI_H
