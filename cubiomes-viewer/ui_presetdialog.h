/********************************************************************************
** Form generated from reading UI file 'presetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESETDIALOG_H
#define UI_PRESETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "src/formconditions.h"

QT_BEGIN_NAMESPACE

class Ui_PresetDialog
{
public:
    QGridLayout *gridLayout_5;
    QSplitter *splitterH;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tabFilters;
    QGridLayout *gridLayout;
    QPushButton *buttonDelete;
    QPushButton *buttonSave;
    QListWidget *listFilters;
    QWidget *tabExamples;
    QGridLayout *gridLayout_2;
    QListWidget *listExamples;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitterV;
    FormConditions *formCond;
    QTextEdit *textDesc;
    QLabel *labelMC;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PresetDialog)
    {
        if (PresetDialog->objectName().isEmpty())
            PresetDialog->setObjectName(QString::fromUtf8("PresetDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        PresetDialog->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(PresetDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        splitterH = new QSplitter(PresetDialog);
        splitterH->setObjectName(QString::fromUtf8("splitterH"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitterH->sizePolicy().hasHeightForWidth());
        splitterH->setSizePolicy(sizePolicy);
        splitterH->setOrientation(Qt::Horizontal);
        gridLayoutWidget = new QWidget(splitterH);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout_4 = new QGridLayout(gridLayoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabFilters = new QWidget();
        tabFilters->setObjectName(QString::fromUtf8("tabFilters"));
        gridLayout = new QGridLayout(tabFilters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonDelete = new QPushButton(tabFilters);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));

        gridLayout->addWidget(buttonDelete, 1, 0, 1, 1);

        buttonSave = new QPushButton(tabFilters);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        gridLayout->addWidget(buttonSave, 1, 1, 1, 1);

        listFilters = new QListWidget(tabFilters);
        listFilters->setObjectName(QString::fromUtf8("listFilters"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listFilters->setFont(font);
        listFilters->setAlternatingRowColors(true);
        listFilters->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout->addWidget(listFilters, 0, 0, 1, 2);

        tabWidget->addTab(tabFilters, QString());
        tabExamples = new QWidget();
        tabExamples->setObjectName(QString::fromUtf8("tabExamples"));
        gridLayout_2 = new QGridLayout(tabExamples);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listExamples = new QListWidget(tabExamples);
        listExamples->setObjectName(QString::fromUtf8("listExamples"));
        listExamples->setFont(font);
        listExamples->setAlternatingRowColors(true);
        listExamples->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout_2->addWidget(listExamples, 0, 0, 1, 1);

        tabWidget->addTab(tabExamples, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        splitterH->addWidget(gridLayoutWidget);
        layoutWidget = new QWidget(splitterH);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitterV = new QSplitter(layoutWidget);
        splitterV->setObjectName(QString::fromUtf8("splitterV"));
        splitterV->setOrientation(Qt::Vertical);
        formCond = new FormConditions(splitterV);
        formCond->setObjectName(QString::fromUtf8("formCond"));
        splitterV->addWidget(formCond);
        textDesc = new QTextEdit(splitterV);
        textDesc->setObjectName(QString::fromUtf8("textDesc"));
        splitterV->addWidget(textDesc);

        gridLayout_3->addWidget(splitterV, 1, 0, 1, 1);

        labelMC = new QLabel(layoutWidget);
        labelMC->setObjectName(QString::fromUtf8("labelMC"));
        labelMC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(labelMC, 0, 0, 1, 1);

        splitterH->addWidget(layoutWidget);

        gridLayout_5->addWidget(splitterH, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PresetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_5->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(PresetDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PresetDialog);
    } // setupUi

    void retranslateUi(QDialog *PresetDialog)
    {
        PresetDialog->setWindowTitle(QCoreApplication::translate("PresetDialog", "Filter Presets", nullptr));
        buttonDelete->setText(QCoreApplication::translate("PresetDialog", "Delete", nullptr));
        buttonSave->setText(QCoreApplication::translate("PresetDialog", "Save Current Filter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFilters), QCoreApplication::translate("PresetDialog", "Saved Filters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabExamples), QCoreApplication::translate("PresetDialog", "Examples Filters", nullptr));
        labelMC->setText(QCoreApplication::translate("PresetDialog", "MC 1.X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresetDialog: public Ui_PresetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESETDIALOG_H
