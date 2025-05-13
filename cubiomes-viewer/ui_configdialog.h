/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupInterface;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QFontComboBox *fontComboMono;
    StyledComboBox *comboStyle;
    QLabel *label_4;
    QFontComboBox *fontComboNorm;
    StyledComboBox *comboLang;
    QLabel *label_12;
    QLabel *label_11;
    QSpinBox *spinFontSizeNorm;
    QSpinBox *spinFontSizeMono;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QLineEdit *lineSep;
    QLabel *label_8;
    StyledComboBox *comboQuote;
    QLabel *label_2;
    QGroupBox *groupSearch;
    QGridLayout *gridLayout_3;
    QLineEdit *lineMatching;
    QLabel *label_3;
    QGroupBox *groupSession;
    QGridLayout *gridLayout_4;
    QCheckBox *checkRestore;
    QSpinBox *spinAutosave;
    QCheckBox *checkAutosave;
    QCheckBox *checkWindowPos;
    QGroupBox *groupMisc;
    QGridLayout *gridLayout_5;
    QCheckBox *checkUpdates;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QSpinBox *spinThreads;
    QCheckBox *checkSmooth;
    QLineEdit *lineIconScale;
    QCheckBox *checkBBoxes;
    QLineEdit *lineGridSpacing;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_10;
    StyledComboBox *comboGridMult;
    QSpinBox *spinCacheSize;
    QLabel *label_14;
    QLabel *label_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConfigDialog->setWindowIcon(icon);
        gridLayout_8 = new QGridLayout(ConfigDialog);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        scrollArea = new QScrollArea(ConfigDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupInterface = new QGroupBox(scrollAreaWidgetContents);
        groupInterface->setObjectName(QString::fromUtf8("groupInterface"));
        gridLayout_2 = new QGridLayout(groupInterface);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_13 = new QLabel(groupInterface);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 2);

        fontComboMono = new QFontComboBox(groupInterface);
        fontComboMono->setObjectName(QString::fromUtf8("fontComboMono"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        fontComboMono->setFont(font);
        fontComboMono->setFontFilters(QFontComboBox::MonospacedFonts);

        gridLayout_2->addWidget(fontComboMono, 3, 2, 1, 1);

        comboStyle = new StyledComboBox(groupInterface);
        comboStyle->addItem(QString());
        comboStyle->addItem(QString());
        comboStyle->setObjectName(QString::fromUtf8("comboStyle"));
        comboStyle->setIconSize(QSize(0, 16));

        gridLayout_2->addWidget(comboStyle, 1, 2, 1, 3);

        label_4 = new QLabel(groupInterface);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 2);

        fontComboNorm = new QFontComboBox(groupInterface);
        fontComboNorm->setObjectName(QString::fromUtf8("fontComboNorm"));
        fontComboNorm->setFontFilters(QFontComboBox::ScalableFonts);

        gridLayout_2->addWidget(fontComboNorm, 2, 2, 1, 1);

        comboLang = new StyledComboBox(groupInterface);
        comboLang->setObjectName(QString::fromUtf8("comboLang"));

        gridLayout_2->addWidget(comboLang, 0, 2, 1, 3);

        label_12 = new QLabel(groupInterface);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 2);

        label_11 = new QLabel(groupInterface);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        spinFontSizeNorm = new QSpinBox(groupInterface);
        spinFontSizeNorm->setObjectName(QString::fromUtf8("spinFontSizeNorm"));
        spinFontSizeNorm->setMinimum(2);
        spinFontSizeNorm->setValue(10);

        gridLayout_2->addWidget(spinFontSizeNorm, 2, 3, 1, 2);

        spinFontSizeMono = new QSpinBox(groupInterface);
        spinFontSizeMono->setObjectName(QString::fromUtf8("spinFontSizeMono"));
        spinFontSizeMono->setMinimum(1);
        spinFontSizeMono->setValue(10);

        gridLayout_2->addWidget(spinFontSizeMono, 3, 3, 1, 2);


        gridLayout->addWidget(groupInterface, 0, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineSep = new QLineEdit(groupBox);
        lineSep->setObjectName(QString::fromUtf8("lineSep"));

        gridLayout_6->addWidget(lineSep, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 2, 0, 1, 1);

        comboQuote = new StyledComboBox(groupBox);
        comboQuote->addItem(QString());
        comboQuote->addItem(QString());
        comboQuote->addItem(QString());
        comboQuote->setObjectName(QString::fromUtf8("comboQuote"));

        gridLayout_6->addWidget(comboQuote, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        groupSearch = new QGroupBox(scrollAreaWidgetContents);
        groupSearch->setObjectName(QString::fromUtf8("groupSearch"));
        gridLayout_3 = new QGridLayout(groupSearch);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineMatching = new QLineEdit(groupSearch);
        lineMatching->setObjectName(QString::fromUtf8("lineMatching"));

        gridLayout_3->addWidget(lineMatching, 0, 1, 1, 1);

        label_3 = new QLabel(groupSearch);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupSearch, 2, 0, 1, 1);

        groupSession = new QGroupBox(scrollAreaWidgetContents);
        groupSession->setObjectName(QString::fromUtf8("groupSession"));
        gridLayout_4 = new QGridLayout(groupSession);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkRestore = new QCheckBox(groupSession);
        checkRestore->setObjectName(QString::fromUtf8("checkRestore"));

        gridLayout_4->addWidget(checkRestore, 0, 0, 2, 2);

        spinAutosave = new QSpinBox(groupSession);
        spinAutosave->setObjectName(QString::fromUtf8("spinAutosave"));
        spinAutosave->setMinimum(1);
        spinAutosave->setMaximum(120);
        spinAutosave->setValue(10);

        gridLayout_4->addWidget(spinAutosave, 3, 1, 1, 1);

        checkAutosave = new QCheckBox(groupSession);
        checkAutosave->setObjectName(QString::fromUtf8("checkAutosave"));

        gridLayout_4->addWidget(checkAutosave, 3, 0, 1, 1);

        checkWindowPos = new QCheckBox(groupSession);
        checkWindowPos->setObjectName(QString::fromUtf8("checkWindowPos"));

        gridLayout_4->addWidget(checkWindowPos, 2, 0, 1, 2);


        gridLayout->addWidget(groupSession, 4, 0, 1, 1);

        groupMisc = new QGroupBox(scrollAreaWidgetContents);
        groupMisc->setObjectName(QString::fromUtf8("groupMisc"));
        gridLayout_5 = new QGridLayout(groupMisc);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkUpdates = new QCheckBox(groupMisc);
        checkUpdates->setObjectName(QString::fromUtf8("checkUpdates"));

        gridLayout_5->addWidget(checkUpdates, 0, 0, 1, 1);


        gridLayout->addWidget(groupMisc, 5, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        spinThreads = new QSpinBox(groupBox_2);
        spinThreads->setObjectName(QString::fromUtf8("spinThreads"));

        gridLayout_7->addWidget(spinThreads, 5, 2, 1, 2);

        checkSmooth = new QCheckBox(groupBox_2);
        checkSmooth->setObjectName(QString::fromUtf8("checkSmooth"));

        gridLayout_7->addWidget(checkSmooth, 7, 0, 1, 4);

        lineIconScale = new QLineEdit(groupBox_2);
        lineIconScale->setObjectName(QString::fromUtf8("lineIconScale"));

        gridLayout_7->addWidget(lineIconScale, 0, 2, 1, 2);

        checkBBoxes = new QCheckBox(groupBox_2);
        checkBBoxes->setObjectName(QString::fromUtf8("checkBBoxes"));

        gridLayout_7->addWidget(checkBBoxes, 6, 0, 1, 4);

        lineGridSpacing = new QLineEdit(groupBox_2);
        lineGridSpacing->setObjectName(QString::fromUtf8("lineGridSpacing"));

        gridLayout_7->addWidget(lineGridSpacing, 2, 2, 1, 2);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 4, 0, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 2, 0, 1, 2);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_7->addWidget(label_10, 3, 0, 1, 2);

        comboGridMult = new StyledComboBox(groupBox_2);
        comboGridMult->addItem(QString());
        comboGridMult->addItem(QString());
        comboGridMult->addItem(QString());
        comboGridMult->addItem(QString());
        comboGridMult->addItem(QString());
        comboGridMult->setObjectName(QString::fromUtf8("comboGridMult"));
        comboGridMult->setEnabled(false);
        comboGridMult->setIconSize(QSize(0, 16));

        gridLayout_7->addWidget(comboGridMult, 3, 2, 1, 2);

        spinCacheSize = new QSpinBox(groupBox_2);
        spinCacheSize->setObjectName(QString::fromUtf8("spinCacheSize"));
        spinCacheSize->setMinimum(16);
        spinCacheSize->setMaximum(8192);
        spinCacheSize->setSingleStep(16);
        spinCacheSize->setValue(256);

        gridLayout_7->addWidget(spinCacheSize, 4, 2, 1, 2);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_7->addWidget(label_14, 0, 0, 1, 2);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 5, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_8->addWidget(scrollArea, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_8->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QCoreApplication::translate("ConfigDialog", "Preferences", nullptr));
        groupInterface->setTitle(QCoreApplication::translate("ConfigDialog", "Interface", nullptr));
        label_13->setText(QCoreApplication::translate("ConfigDialog", "Monospace font:", nullptr));
        comboStyle->setItemText(0, QCoreApplication::translate("ConfigDialog", "System", nullptr));
        comboStyle->setItemText(1, QCoreApplication::translate("ConfigDialog", "Dark", nullptr));

        label_4->setText(QCoreApplication::translate("ConfigDialog", "GUI style:", nullptr));
        label_12->setText(QCoreApplication::translate("ConfigDialog", "Application font:", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigDialog", "Language:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigDialog", "Export", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigDialog", "CSV cell quotation:", nullptr));
        comboQuote->setItemText(0, QCoreApplication::translate("ConfigDialog", "Where necessary", nullptr));
        comboQuote->setItemText(1, QCoreApplication::translate("ConfigDialog", "Single quotes (')", nullptr));
        comboQuote->setItemText(2, QCoreApplication::translate("ConfigDialog", "Double quotes (\")", nullptr));

        label_2->setText(QCoreApplication::translate("ConfigDialog", "CSV column separator:", nullptr));
        groupSearch->setTitle(QCoreApplication::translate("ConfigDialog", "Search", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDialog", "Maximum number of matching seeds:", nullptr));
        groupSession->setTitle(QCoreApplication::translate("ConfigDialog", "Session", nullptr));
        checkRestore->setText(QCoreApplication::translate("ConfigDialog", "Restore previous session at launch", nullptr));
        spinAutosave->setSuffix(QCoreApplication::translate("ConfigDialog", " min", nullptr));
        checkAutosave->setText(QCoreApplication::translate("ConfigDialog", "Autosave every:", nullptr));
        checkWindowPos->setText(QCoreApplication::translate("ConfigDialog", "Restore window position", nullptr));
        groupMisc->setTitle(QCoreApplication::translate("ConfigDialog", "Miscellaneous", nullptr));
        checkUpdates->setText(QCoreApplication::translate("ConfigDialog", "Check GitHub for updates at startup", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigDialog", "Map View", nullptr));
#if QT_CONFIG(tooltip)
        checkSmooth->setToolTip(QCoreApplication::translate("ConfigDialog", "<html><head/><body><p>Simulate inertia for the map view</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSmooth->setText(QCoreApplication::translate("ConfigDialog", "Smooth map motion", nullptr));
        checkBBoxes->setText(QCoreApplication::translate("ConfigDialog", "Outline known bounding boxes", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigDialog", "Map cache size:", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("ConfigDialog", "Use a fixed grid in blocks instead of outlining the generated map tiles\n"
"Leave blank for the default behaviour", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("ConfigDialog", "Custom grid spacing:", nullptr));
        label_10->setText(QCoreApplication::translate("ConfigDialog", "Custom grid multiplier:", nullptr));
        comboGridMult->setItemText(0, QCoreApplication::translate("ConfigDialog", "None", nullptr));
        comboGridMult->setItemText(1, QCoreApplication::translate("ConfigDialog", "2", nullptr));
        comboGridMult->setItemText(2, QCoreApplication::translate("ConfigDialog", "4", nullptr));
        comboGridMult->setItemText(3, QCoreApplication::translate("ConfigDialog", "5", nullptr));
        comboGridMult->setItemText(4, QCoreApplication::translate("ConfigDialog", "10", nullptr));

        spinCacheSize->setSuffix(QCoreApplication::translate("ConfigDialog", " MB", nullptr));
        label_14->setText(QCoreApplication::translate("ConfigDialog", "Icon scale:", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigDialog", "Threads for map:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
