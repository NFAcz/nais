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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElasticSearchGUI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *categorySel;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ElasticSearchGUI)
    {
        if (ElasticSearchGUI->objectName().isEmpty())
            ElasticSearchGUI->setObjectName(QStringLiteral("ElasticSearchGUI"));
        ElasticSearchGUI->resize(482, 586);
        centralWidget = new QWidget(ElasticSearchGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Executive"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(true);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(9);
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Droid Sans Mono"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        categorySel = new QComboBox(groupBox);
        categorySel->setObjectName(QStringLiteral("categorySel"));
        QFont font3;
        font3.setFamily(QStringLiteral("Droid Sans Mono"));
        font3.setPointSize(9);
        categorySel->setFont(font3);

        verticalLayout->addWidget(categorySel);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font3);

        verticalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        treeWidget = new QTreeWidget(groupBox);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setFont(font3);

        verticalLayout->addWidget(treeWidget);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        ElasticSearchGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ElasticSearchGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 482, 17));
        ElasticSearchGUI->setMenuBar(menuBar);
        statusBar = new QStatusBar(ElasticSearchGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ElasticSearchGUI->setStatusBar(statusBar);

        retranslateUi(ElasticSearchGUI);

        QMetaObject::connectSlotsByName(ElasticSearchGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ElasticSearchGUI)
    {
        ElasticSearchGUI->setWindowTitle(QApplication::translate("ElasticSearchGUI", "nAIS", Q_NULLPTR));
        label->setText(QApplication::translate("ElasticSearchGUI", "AIS NOT DEAD", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_2->setText(QString());
        categorySel->clear();
        categorySel->insertItems(0, QStringList()
         << QApplication::translate("ElasticSearchGUI", "V\305\241echny kategorie", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "N\303\241zev filmu", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "AIS \304\215\303\255slo", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Rok", Q_NULLPTR)
         << QApplication::translate("ElasticSearchGUI", "Re\305\276ie", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("ElasticSearchGUI", "Hledej", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ElasticSearchGUI", "Minut\303\241\305\276", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("ElasticSearchGUI", "Re\305\276ie", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("ElasticSearchGUI", "Rok", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("ElasticSearchGUI", "AIS \304\215\303\255slo", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("ElasticSearchGUI", "N\303\241zev", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ElasticSearchGUI: public Ui_ElasticSearchGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELASTICSEARCHGUI_H
