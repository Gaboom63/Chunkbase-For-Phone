/********************************************************************************
** Form generated from reading UI file 'biomecolordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIOMECOLORDIALOG_H
#define UI_BIOMECOLORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_BiomeColorDialog
{
public:
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonExport;
    QPushButton *buttonSaveAs;
    QPushButton *buttonRemove;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    StyledComboBox *comboColormaps;

    void setupUi(QDialog *BiomeColorDialog)
    {
        if (BiomeColorDialog->objectName().isEmpty())
            BiomeColorDialog->setObjectName(QString::fromUtf8("BiomeColorDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        BiomeColorDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(BiomeColorDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(BiomeColorDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("text-align: left; padding: 2px;"));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 2, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonExport = new QPushButton(BiomeColorDialog);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));

        horizontalLayout->addWidget(buttonExport);

        buttonSaveAs = new QPushButton(BiomeColorDialog);
        buttonSaveAs->setObjectName(QString::fromUtf8("buttonSaveAs"));

        horizontalLayout->addWidget(buttonSaveAs);

        buttonRemove = new QPushButton(BiomeColorDialog);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        horizontalLayout->addWidget(buttonRemove);

        buttonBox = new QDialogButtonBox(BiomeColorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 3);

        label = new QLabel(BiomeColorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        comboColormaps = new StyledComboBox(BiomeColorDialog);
        comboColormaps->setObjectName(QString::fromUtf8("comboColormaps"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboColormaps->sizePolicy().hasHeightForWidth());
        comboColormaps->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboColormaps, 0, 1, 1, 2);


        retranslateUi(BiomeColorDialog);

        QMetaObject::connectSlotsByName(BiomeColorDialog);
    } // setupUi

    void retranslateUi(QDialog *BiomeColorDialog)
    {
        BiomeColorDialog->setWindowTitle(QCoreApplication::translate("BiomeColorDialog", "Biome Color Editor", nullptr));
        buttonExport->setText(QCoreApplication::translate("BiomeColorDialog", "Export...", nullptr));
        buttonSaveAs->setText(QCoreApplication::translate("BiomeColorDialog", "Save as...", nullptr));
        buttonRemove->setText(QCoreApplication::translate("BiomeColorDialog", "Remove", nullptr));
        label->setText(QCoreApplication::translate("BiomeColorDialog", "Biome color map:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BiomeColorDialog: public Ui_BiomeColorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOMECOLORDIALOG_H
