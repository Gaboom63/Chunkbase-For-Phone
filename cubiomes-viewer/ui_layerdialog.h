/********************************************************************************
** Form generated from reading UI file 'layerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERDIALOG_H
#define UI_LAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QRadioButton>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_LayerDialog
{
public:
    QGridLayout *gridLayout_2;
    StyledComboBox *comboBiomes;
    StyledComboBox *comboNoiseW;
    QRadioButton *radioNoiseD;
    QRadioButton *radioNoiseW;
    QRadioButton *radioBiomes;
    StyledComboBox *comboNoiseT;
    QDialogButtonBox *buttonBox;
    QRadioButton *radioNoiseT;
    QRadioButton *radioOcean;
    StyledComboBox *comboHeight;
    QRadioButton *radioHeight;
    StyledComboBox *comboNoiseH;
    QRadioButton *radioNoOcean;
    QRadioButton *radioNoiseC;
    QRadioButton *radioStruct;
    QRadioButton *radioNoiseE;
    QRadioButton *radioRiver;
    StyledComboBox *comboNoiseC;
    StyledComboBox *comboNoiseE;
    QRadioButton *radioNoiseH;
    QRadioButton *radioBetaT;
    QRadioButton *radioBetaH;

    void setupUi(QDialog *LayerDialog)
    {
        if (LayerDialog->objectName().isEmpty())
            LayerDialog->setObjectName(QString::fromUtf8("LayerDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        LayerDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(LayerDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBiomes = new StyledComboBox(LayerDialog);
        comboBiomes->setObjectName(QString::fromUtf8("comboBiomes"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBiomes->sizePolicy().hasHeightForWidth());
        comboBiomes->setSizePolicy(sizePolicy);
        comboBiomes->setMinimumSize(QSize(240, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        comboBiomes->setFont(font);
        comboBiomes->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboBiomes, 0, 1, 1, 1);

        comboNoiseW = new StyledComboBox(LayerDialog);
        comboNoiseW->setObjectName(QString::fromUtf8("comboNoiseW"));
        comboNoiseW->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboNoiseW, 8, 1, 1, 1);

        radioNoiseD = new QRadioButton(LayerDialog);
        radioNoiseD->setObjectName(QString::fromUtf8("radioNoiseD"));

        gridLayout_2->addWidget(radioNoiseD, 7, 0, 1, 1);

        radioNoiseW = new QRadioButton(LayerDialog);
        radioNoiseW->setObjectName(QString::fromUtf8("radioNoiseW"));

        gridLayout_2->addWidget(radioNoiseW, 8, 0, 1, 1);

        radioBiomes = new QRadioButton(LayerDialog);
        radioBiomes->setObjectName(QString::fromUtf8("radioBiomes"));

        gridLayout_2->addWidget(radioBiomes, 0, 0, 1, 1);

        comboNoiseT = new StyledComboBox(LayerDialog);
        comboNoiseT->setObjectName(QString::fromUtf8("comboNoiseT"));
        comboNoiseT->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboNoiseT, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(LayerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 16, 0, 1, 2);

        radioNoiseT = new QRadioButton(LayerDialog);
        radioNoiseT->setObjectName(QString::fromUtf8("radioNoiseT"));

        gridLayout_2->addWidget(radioNoiseT, 3, 0, 1, 1);

        radioOcean = new QRadioButton(LayerDialog);
        radioOcean->setObjectName(QString::fromUtf8("radioOcean"));

        gridLayout_2->addWidget(radioOcean, 10, 0, 1, 1);

        comboHeight = new StyledComboBox(LayerDialog);
        comboHeight->setObjectName(QString::fromUtf8("comboHeight"));
        comboHeight->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboHeight, 14, 1, 1, 1);

        radioHeight = new QRadioButton(LayerDialog);
        radioHeight->setObjectName(QString::fromUtf8("radioHeight"));

        gridLayout_2->addWidget(radioHeight, 14, 0, 1, 1);

        comboNoiseH = new StyledComboBox(LayerDialog);
        comboNoiseH->setObjectName(QString::fromUtf8("comboNoiseH"));
        comboNoiseH->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboNoiseH, 4, 1, 1, 1);

        radioNoOcean = new QRadioButton(LayerDialog);
        radioNoOcean->setObjectName(QString::fromUtf8("radioNoOcean"));

        gridLayout_2->addWidget(radioNoOcean, 11, 0, 1, 1);

        radioNoiseC = new QRadioButton(LayerDialog);
        radioNoiseC->setObjectName(QString::fromUtf8("radioNoiseC"));

        gridLayout_2->addWidget(radioNoiseC, 5, 0, 1, 1);

        radioStruct = new QRadioButton(LayerDialog);
        radioStruct->setObjectName(QString::fromUtf8("radioStruct"));

        gridLayout_2->addWidget(radioStruct, 15, 0, 1, 1);

        radioNoiseE = new QRadioButton(LayerDialog);
        radioNoiseE->setObjectName(QString::fromUtf8("radioNoiseE"));

        gridLayout_2->addWidget(radioNoiseE, 6, 0, 1, 1);

        radioRiver = new QRadioButton(LayerDialog);
        radioRiver->setObjectName(QString::fromUtf8("radioRiver"));

        gridLayout_2->addWidget(radioRiver, 9, 0, 1, 1);

        comboNoiseC = new StyledComboBox(LayerDialog);
        comboNoiseC->setObjectName(QString::fromUtf8("comboNoiseC"));
        comboNoiseC->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboNoiseC, 5, 1, 1, 1);

        comboNoiseE = new StyledComboBox(LayerDialog);
        comboNoiseE->setObjectName(QString::fromUtf8("comboNoiseE"));
        comboNoiseE->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboNoiseE, 6, 1, 1, 1);

        radioNoiseH = new QRadioButton(LayerDialog);
        radioNoiseH->setObjectName(QString::fromUtf8("radioNoiseH"));

        gridLayout_2->addWidget(radioNoiseH, 4, 0, 1, 1);

        radioBetaT = new QRadioButton(LayerDialog);
        radioBetaT->setObjectName(QString::fromUtf8("radioBetaT"));

        gridLayout_2->addWidget(radioBetaT, 12, 0, 1, 1);

        radioBetaH = new QRadioButton(LayerDialog);
        radioBetaH->setObjectName(QString::fromUtf8("radioBetaH"));

        gridLayout_2->addWidget(radioBetaH, 13, 0, 1, 1);


        retranslateUi(LayerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LayerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LayerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LayerDialog);
    } // setupUi

    void retranslateUi(QDialog *LayerDialog)
    {
        LayerDialog->setWindowTitle(QCoreApplication::translate("LayerDialog", "Layer Display Options", nullptr));
        radioNoiseD->setText(QCoreApplication::translate("LayerDialog", "Depth", nullptr));
        radioNoiseW->setText(QCoreApplication::translate("LayerDialog", "Weirdness octaves:", nullptr));
        radioBiomes->setText(QCoreApplication::translate("LayerDialog", "Biome scale:", nullptr));
        radioNoiseT->setText(QCoreApplication::translate("LayerDialog", "Temperature octaves:", nullptr));
        radioOcean->setText(QCoreApplication::translate("LayerDialog", "Ocean layer", nullptr));
        radioHeight->setText(QCoreApplication::translate("LayerDialog", "Approx. surface height:", nullptr));
        radioNoOcean->setText(QCoreApplication::translate("LayerDialog", "No beta oceans", nullptr));
        radioNoiseC->setText(QCoreApplication::translate("LayerDialog", "Contnentalness octaves:", nullptr));
        radioStruct->setText(QCoreApplication::translate("LayerDialog", "Structure potential", nullptr));
        radioNoiseE->setText(QCoreApplication::translate("LayerDialog", "Erosion octaves:", nullptr));
        radioRiver->setText(QCoreApplication::translate("LayerDialog", "River layer", nullptr));
        radioNoiseH->setText(QCoreApplication::translate("LayerDialog", "Humidity octaves:", nullptr));
        radioBetaT->setText(QCoreApplication::translate("LayerDialog", "Beta temperature", nullptr));
        radioBetaH->setText(QCoreApplication::translate("LayerDialog", "Beta humidity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayerDialog: public Ui_LayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERDIALOG_H
