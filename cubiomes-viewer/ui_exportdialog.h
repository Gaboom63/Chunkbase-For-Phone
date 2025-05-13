/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "src/conditiondialog.h"
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QGridLayout *gridLayout_3;
    QLineEdit *linePattern;
    QPushButton *buttonFromVisible;
    QLabel *label_9;
    QLabel *labelDir;
    QGroupBox *groupSummary;
    QGridLayout *gridLayout_4;
    QLabel *labelNumImg;
    QLabel *labelWorldGen;
    QLabel *label_8;
    QLabel *labelImgSize;
    QLabel *labelY;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_1;
    QLabel *labelNumSeeds;
    QLabel *label_10;
    StyledComboBox *comboSeed;
    QLineEdit *lineDir;
    QPushButton *buttonDirSelect;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *layoutArea_2;
    QLabel *labelX1;
    CoordEdit *lineEditX1;
    QLabel *labelZ1;
    CoordEdit *lineEditZ1;
    QLabel *label_14;
    QLabel *labelX2;
    CoordEdit *lineEditX2;
    QLabel *labelZ2;
    CoordEdit *lineEditZ2;
    StyledComboBox *comboScale;
    QLabel *label_7;
    QLabel *label_4;
    QGroupBox *groupTiled;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_5;
    StyledComboBox *comboBackground;
    StyledComboBox *comboTileSize;
    QLabel *label_3;
    QLabel *label_13;
    StyledComboBox *comboHeightVis;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QString::fromUtf8("ExportDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExportDialog->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ExportDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        linePattern = new QLineEdit(ExportDialog);
        linePattern->setObjectName(QString::fromUtf8("linePattern"));

        gridLayout_3->addWidget(linePattern, 4, 2, 1, 4);

        buttonFromVisible = new QPushButton(ExportDialog);
        buttonFromVisible->setObjectName(QString::fromUtf8("buttonFromVisible"));

        gridLayout_3->addWidget(buttonFromVisible, 7, 4, 1, 2);

        label_9 = new QLabel(ExportDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 5, 1, 1, 5);

        labelDir = new QLabel(ExportDialog);
        labelDir->setObjectName(QString::fromUtf8("labelDir"));

        gridLayout_3->addWidget(labelDir, 3, 1, 1, 1);

        groupSummary = new QGroupBox(ExportDialog);
        groupSummary->setObjectName(QString::fromUtf8("groupSummary"));
        gridLayout_4 = new QGridLayout(groupSummary);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelNumImg = new QLabel(groupSummary);
        labelNumImg->setObjectName(QString::fromUtf8("labelNumImg"));

        gridLayout_4->addWidget(labelNumImg, 1, 3, 1, 1);

        labelWorldGen = new QLabel(groupSummary);
        labelWorldGen->setObjectName(QString::fromUtf8("labelWorldGen"));

        gridLayout_4->addWidget(labelWorldGen, 0, 1, 1, 3);

        label_8 = new QLabel(groupSummary);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 2, 1, 1);

        labelImgSize = new QLabel(groupSummary);
        labelImgSize->setObjectName(QString::fromUtf8("labelImgSize"));

        gridLayout_4->addWidget(labelImgSize, 2, 3, 1, 1);

        labelY = new QLabel(groupSummary);
        labelY->setObjectName(QString::fromUtf8("labelY"));

        gridLayout_4->addWidget(labelY, 1, 1, 1, 1);

        label_11 = new QLabel(groupSummary);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 2, 2, 1, 1);

        label_12 = new QLabel(groupSummary);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        label_1 = new QLabel(groupSummary);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout_4->addWidget(label_1, 2, 0, 1, 1);

        labelNumSeeds = new QLabel(groupSummary);
        labelNumSeeds->setObjectName(QString::fromUtf8("labelNumSeeds"));

        gridLayout_4->addWidget(labelNumSeeds, 2, 1, 1, 1);

        label_10 = new QLabel(groupSummary);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupSummary, 9, 1, 1, 5);

        comboSeed = new StyledComboBox(ExportDialog);
        comboSeed->addItem(QString());
        comboSeed->addItem(QString());
        comboSeed->setObjectName(QString::fromUtf8("comboSeed"));

        gridLayout_3->addWidget(comboSeed, 0, 2, 1, 4);

        lineDir = new QLineEdit(ExportDialog);
        lineDir->setObjectName(QString::fromUtf8("lineDir"));

        gridLayout_3->addWidget(lineDir, 3, 2, 1, 3);

        buttonDirSelect = new QPushButton(ExportDialog);
        buttonDirSelect->setObjectName(QString::fromUtf8("buttonDirSelect"));
        buttonDirSelect->setMaximumSize(QSize(26, 16777215));

        gridLayout_3->addWidget(buttonDirSelect, 3, 5, 1, 1);

        label_2 = new QLabel(ExportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 10, 3, 1, 3);

        layoutArea_2 = new QHBoxLayout();
        layoutArea_2->setObjectName(QString::fromUtf8("layoutArea_2"));
        labelX1 = new QLabel(ExportDialog);
        labelX1->setObjectName(QString::fromUtf8("labelX1"));

        layoutArea_2->addWidget(labelX1);

        lineEditX1 = new CoordEdit(ExportDialog);
        lineEditX1->setObjectName(QString::fromUtf8("lineEditX1"));

        layoutArea_2->addWidget(lineEditX1);

        labelZ1 = new QLabel(ExportDialog);
        labelZ1->setObjectName(QString::fromUtf8("labelZ1"));

        layoutArea_2->addWidget(labelZ1);

        lineEditZ1 = new CoordEdit(ExportDialog);
        lineEditZ1->setObjectName(QString::fromUtf8("lineEditZ1"));

        layoutArea_2->addWidget(lineEditZ1);

        label_14 = new QLabel(ExportDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        layoutArea_2->addWidget(label_14);

        labelX2 = new QLabel(ExportDialog);
        labelX2->setObjectName(QString::fromUtf8("labelX2"));

        layoutArea_2->addWidget(labelX2);

        lineEditX2 = new CoordEdit(ExportDialog);
        lineEditX2->setObjectName(QString::fromUtf8("lineEditX2"));

        layoutArea_2->addWidget(lineEditX2);

        labelZ2 = new QLabel(ExportDialog);
        labelZ2->setObjectName(QString::fromUtf8("labelZ2"));

        layoutArea_2->addWidget(labelZ2);

        lineEditZ2 = new CoordEdit(ExportDialog);
        lineEditZ2->setObjectName(QString::fromUtf8("lineEditZ2"));

        layoutArea_2->addWidget(lineEditZ2);


        gridLayout_3->addLayout(layoutArea_2, 7, 1, 1, 3);

        comboScale = new StyledComboBox(ExportDialog);
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->setObjectName(QString::fromUtf8("comboScale"));

        gridLayout_3->addWidget(comboScale, 1, 2, 1, 4);

        label_7 = new QLabel(ExportDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 4, 1, 1, 1);

        label_4 = new QLabel(ExportDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 6, 1, 1, 2);

        groupTiled = new QGroupBox(ExportDialog);
        groupTiled->setObjectName(QString::fromUtf8("groupTiled"));
        groupTiled->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupTiled->setCheckable(true);
        groupTiled->setChecked(false);
        gridLayout_2 = new QGridLayout(groupTiled);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupTiled);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(groupTiled);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        comboBackground = new StyledComboBox(groupTiled);
        comboBackground->addItem(QString());
        comboBackground->addItem(QString());
        comboBackground->addItem(QString());
        comboBackground->setObjectName(QString::fromUtf8("comboBackground"));

        gridLayout_2->addWidget(comboBackground, 1, 1, 1, 3);

        comboTileSize = new StyledComboBox(groupTiled);
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->addItem(QString());
        comboTileSize->setObjectName(QString::fromUtf8("comboTileSize"));

        gridLayout_2->addWidget(comboTileSize, 0, 1, 1, 3);


        gridLayout_3->addWidget(groupTiled, 8, 1, 1, 5);

        label_3 = new QLabel(ExportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 1, 1, 1);

        label_13 = new QLabel(ExportDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 1, 1, 1);

        comboHeightVis = new StyledComboBox(ExportDialog);
        comboHeightVis->addItem(QString());
        comboHeightVis->addItem(QString());
        comboHeightVis->addItem(QString());
        comboHeightVis->addItem(QString());
        comboHeightVis->addItem(QString());
        comboHeightVis->setObjectName(QString::fromUtf8("comboHeightVis"));

        gridLayout_3->addWidget(comboHeightVis, 2, 2, 1, 4);


        retranslateUi(ExportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportDialog, SLOT(reject()));

        comboTileSize->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QCoreApplication::translate("ExportDialog", "Biome Image Export", nullptr));
        linePattern->setText(QCoreApplication::translate("ExportDialog", "%S_%x_%z.png", nullptr));
        buttonFromVisible->setText(QCoreApplication::translate("ExportDialog", "From visible", nullptr));
        label_9->setText(QCoreApplication::translate("ExportDialog", "%S - seed; %x, %z - tile coordinates", nullptr));
        labelDir->setText(QCoreApplication::translate("ExportDialog", "Export directory:", nullptr));
        groupSummary->setTitle(QCoreApplication::translate("ExportDialog", "Overview", nullptr));
        labelNumImg->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
        labelWorldGen->setText(QCoreApplication::translate("ExportDialog", "1.x Overworld", nullptr));
        label_8->setText(QCoreApplication::translate("ExportDialog", "Number of images:", nullptr));
        labelImgSize->setText(QCoreApplication::translate("ExportDialog", "0x0", nullptr));
        labelY->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
        label_11->setText(QCoreApplication::translate("ExportDialog", "Size of each image:", nullptr));
        label_12->setText(QCoreApplication::translate("ExportDialog", "World generator:", nullptr));
        label_1->setText(QCoreApplication::translate("ExportDialog", "Number of seeds:", nullptr));
        labelNumSeeds->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
        label_10->setText(QCoreApplication::translate("ExportDialog", "Height (Y):", nullptr));
        comboSeed->setItemText(0, QCoreApplication::translate("ExportDialog", "Current seed", nullptr));
        comboSeed->setItemText(1, QCoreApplication::translate("ExportDialog", "From matching seeds list", nullptr));

        buttonDirSelect->setText(QCoreApplication::translate("ExportDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("ExportDialog", "Seed(s):", nullptr));
#if QT_CONFIG(tooltip)
        labelX1->setToolTip(QCoreApplication::translate("ExportDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX1->setText(QCoreApplication::translate("ExportDialog", "X<sub>1</sub>=", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX1->setToolTip(QCoreApplication::translate("ExportDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX1->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ1->setToolTip(QCoreApplication::translate("ExportDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ1->setText(QCoreApplication::translate("ExportDialog", "Z<sub>1</sub>=", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ1->setToolTip(QCoreApplication::translate("ExportDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ1->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
        label_14->setText(QString());
#if QT_CONFIG(tooltip)
        labelX2->setToolTip(QCoreApplication::translate("ExportDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX2->setText(QCoreApplication::translate("ExportDialog", "X<sub>2</sub>=", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX2->setToolTip(QCoreApplication::translate("ExportDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX2->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ2->setToolTip(QCoreApplication::translate("ExportDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ2->setText(QCoreApplication::translate("ExportDialog", "Z<sub>2</sub>=", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ2->setToolTip(QCoreApplication::translate("ExportDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ2->setText(QCoreApplication::translate("ExportDialog", "0", nullptr));
        comboScale->setItemText(0, QCoreApplication::translate("ExportDialog", "1:1", nullptr));
        comboScale->setItemText(1, QCoreApplication::translate("ExportDialog", "1:4", nullptr));
        comboScale->setItemText(2, QCoreApplication::translate("ExportDialog", "1:16", nullptr));
        comboScale->setItemText(3, QCoreApplication::translate("ExportDialog", "1:64", nullptr));
        comboScale->setItemText(4, QCoreApplication::translate("ExportDialog", "1:256", nullptr));

        label_7->setText(QCoreApplication::translate("ExportDialog", "File pattern:", nullptr));
        label_4->setText(QCoreApplication::translate("ExportDialog", "Area in blocks (bounds are included):", nullptr));
        groupTiled->setTitle(QCoreApplication::translate("ExportDialog", "Split image into tiles", nullptr));
        label_6->setText(QCoreApplication::translate("ExportDialog", "Size of image tiles:", nullptr));
        label_5->setText(QCoreApplication::translate("ExportDialog", "Background color:", nullptr));
        comboBackground->setItemText(0, QCoreApplication::translate("ExportDialog", "Fill background by expanding area", nullptr));
        comboBackground->setItemText(1, QCoreApplication::translate("ExportDialog", "Transparent", nullptr));
        comboBackground->setItemText(2, QCoreApplication::translate("ExportDialog", "Black", nullptr));

        comboTileSize->setItemText(0, QCoreApplication::translate("ExportDialog", "16x16", nullptr));
        comboTileSize->setItemText(1, QCoreApplication::translate("ExportDialog", "32x32", nullptr));
        comboTileSize->setItemText(2, QCoreApplication::translate("ExportDialog", "64x64", nullptr));
        comboTileSize->setItemText(3, QCoreApplication::translate("ExportDialog", "128x128", nullptr));
        comboTileSize->setItemText(4, QCoreApplication::translate("ExportDialog", "256x256", nullptr));
        comboTileSize->setItemText(5, QCoreApplication::translate("ExportDialog", "512x512", nullptr));
        comboTileSize->setItemText(6, QCoreApplication::translate("ExportDialog", "1024x1024", nullptr));
        comboTileSize->setItemText(7, QCoreApplication::translate("ExportDialog", "2048x2048", nullptr));
        comboTileSize->setItemText(8, QCoreApplication::translate("ExportDialog", "4096x4096", nullptr));

        label_3->setText(QCoreApplication::translate("ExportDialog", "Scale (pixel:blocks):", nullptr));
        label_13->setText(QCoreApplication::translate("ExportDialog", "Heightmap:", nullptr));
        comboHeightVis->setItemText(0, QCoreApplication::translate("ExportDialog", "None", nullptr));
        comboHeightVis->setItemText(1, QCoreApplication::translate("ExportDialog", "Grayscale", nullptr));
        comboHeightVis->setItemText(2, QCoreApplication::translate("ExportDialog", "Shading", nullptr));
        comboHeightVis->setItemText(3, QCoreApplication::translate("ExportDialog", "Contours", nullptr));
        comboHeightVis->setItemText(4, QCoreApplication::translate("ExportDialog", "Shading with contours", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
