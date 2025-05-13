/********************************************************************************
** Form generated from reading UI file 'conditiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDITIONDIALOG_H
#define UI_CONDITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/scripts.h"
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_ConditionDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    StyledComboBox *comboCat;
    StyledComboBox *comboType;
    QLabel *labelMC;
    QLabel *labelFilterType;
    QSpacerItem *horizontalSpacer_4;
    QSplitter *splitter;
    Collapsible *collapseDescription;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBoxGeneral;
    QGridLayout *gridLayout_9;
    QCheckBox *checkEnabled;
    QLineEdit *lineSummary;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QGroupBox *groupBoxPosition;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelX1;
    CoordEdit *lineEditX1;
    QLabel *labelZ1;
    CoordEdit *lineEditZ1;
    QLabel *label_13;
    QLabel *labelX2;
    CoordEdit *lineEditX2;
    QLabel *labelZ2;
    CoordEdit *lineEditZ2;
    QPushButton *buttonFromVisible;
    QCheckBox *checkSkipRef;
    QLineEdit *lineSquare;
    QLineEdit *lineRadius;
    QRadioButton *radioCustom;
    QLabel *labelRelative;
    QPushButton *buttonAreaInfo;
    SpinInstances *spinBox;
    StyledComboBox *comboRelative;
    QRadioButton *radioSquare;
    QCheckBox *checkRadius;
    QLabel *labelSpinBox;
    QStackedWidget *stackedWidget;
    QWidget *pageNone;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QWidget *pageBiomes;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_13;
    QLabel *labelY;
    QScrollArea *scrollBiomes;
    QWidget *scrollBiomesContent;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayoutBiomes;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonUncheck;
    QPushButton *buttonInclude;
    QPushButton *buttonExclude;
    QStackedWidget *stackedBiome;
    QWidget *pageBiomeOpt;
    QGridLayout *gridLayout_30;
    QCheckBox *checkApprox;
    QLabel *labelBiomeScale;
    QCheckBox *checkMatchAny;
    StyledComboBox *comboScale;
    QWidget *pageBiomeOptSample;
    QGridLayout *gridLayout_31;
    QLabel *label_17;
    QLabel *label_18;
    QCheckBox *checkSamplePos;
    QLineEdit *lineCoverage1;
    QLineEdit *lineConfidence1;
    StyledComboBox *comboY1;
    QWidget *pageBiomeCenter;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_19;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *lineBiomeSize;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QLabel *labelY_2;
    QLineEdit *lineTolerance;
    QLabel *labelBiomeSize;
    StyledComboBox *comboMatchBiome;
    StyledComboBox *comboY2;
    QWidget *pageTemps;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayoutTemps;
    QSpacerItem *verticalSpacer;
    QWidget *pageClimates;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_15;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_11;
    QGridLayout *gridNoiseRequired;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_14;
    QGridLayout *gridNoiseName;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_12;
    QGridLayout *gridNoiseAllowed;
    QLabel *label_10;
    QScrollArea *scrollNoise;
    QWidget *scrollNoiseContent;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridNoiseBiomes;
    QWidget *pageNoise;
    QGridLayout *gridLayout_23;
    QGroupBox *groupBoxNoise;
    QGridLayout *gridLayout_24;
    StyledComboBox *comboClimatePara;
    QStackedWidget *stackedNoise;
    QWidget *pageNoiseMinMax;
    QGridLayout *gridLayout_33;
    StyledComboBox *comboMinMax;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QWidget *pageNoiseSample;
    QGridLayout *gridLayout_32;
    QCheckBox *checkSamplePos2;
    QLineEdit *lineCoverage2;
    QLabel *label_27;
    QSpacerItem *verticalSpacer_9;
    QLineEdit *lineConfidence2;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_9;
    QLabel *label_14;
    StyledComboBox *comboOctaves;
    QLabel *label_12;
    QLineEdit *lineMax;
    QLabel *label_8;
    QLineEdit *lineMin;
    QCheckBox *checkInvertRange;
    QSpacerItem *horizontalSpacer_2;
    QWidget *pageHeight;
    QGridLayout *gridLayout_25;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_26;
    QLabel *label_11;
    StyledComboBox *comboHeightRange;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridHeightRange;
    QWidget *pageLua;
    QGridLayout *gridLayout_20;
    StyledComboBox *comboLua;
    QTabWidget *tabWidgetLua;
    QWidget *tabLuaText;
    QGridLayout *gridLayout_21;
    QPushButton *pushLuaSaveAs;
    QPushButton *pushLuaExample;
    QPushButton *pushLuaSave;
    ScriptEditor *textEditLua;
    QWidget *tabLuaOutput;
    QGridLayout *gridLayout_22;
    QPlainTextEdit *textEditLuaOut;
    QLabel *labelLuaCall;
    QLabel *label_7;
    QPushButton *pushLuaOpen;
    QPushButton *pushInfoLua;
    QWidget *pageSpiral;
    QGridLayout *gridLayout_28;
    QGroupBox *groupBoxSpiral;
    QGridLayout *gridLayout_29;
    QLabel *label_16;
    QLineEdit *lineSpiralStep;
    QSpacerItem *verticalSpacer_8;
    QWidget *pageVillage;
    QGridLayout *gridLayoutVillage;
    QGroupBox *groupBoxVillage;
    QGridLayout *gridLayoutVillage2;
    QCheckBox *checkStartPieces;
    QCheckBox *checkAbandoned;
    QScrollArea *scrollVillagePieces;
    QWidget *scrollVillagePiecesContents;
    QVBoxLayout *verticalLayout_3_1;
    QGridLayout *gridVillagePieces;
    QWidget *pageBastion;
    QGridLayout *gridLayoutBasion;
    QGroupBox *groupBoxBastion;
    QGridLayout *gridLayoutBastion2;
    QCheckBox *checkStartBastion;
    QScrollArea *scrollBastionPieces;
    QWidget *scrollBastionPiecesContents;
    QVBoxLayout *verticalLayout_3_2;
    QGridLayout *gridBastionPieces;
    QWidget *pageFortress;
    QGridLayout *gridLayout_16;
    QGroupBox *groupBoxFortress;
    QGridLayout *gridLayout_17;
    QCheckBox *checkDenseBB;
    QSpacerItem *verticalSpacer_3;
    QWidget *pagePortal;
    QGridLayout *gridLayoutPortal;
    QGroupBox *groupBoxPortal;
    QGridLayout *gridLayoutPortal2;
    QCheckBox *checkStartPortal;
    QScrollArea *scrollPortalPieces;
    QWidget *scrollPortalPiecesContents;
    QVBoxLayout *verticalLayout_3_3;
    QGridLayout *gridPortalPieces;
    QWidget *pageEndCity;
    QGridLayout *gridLayoutEndCity;
    QGroupBox *groupBoxEndCity;
    QGridLayout *gridLayoutEndCity2;
    QCheckBox *checkEndShip;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageIgloo;
    QGridLayout *gridLayout_27;
    QGroupBox *groupBoxIgloo;
    QGridLayout *gridLayoutEndCity2_2;
    QCheckBox *checkBasement;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConditionDialog)
    {
        if (ConditionDialog->objectName().isEmpty())
            ConditionDialog->setObjectName(QString::fromUtf8("ConditionDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConditionDialog->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(ConditionDialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboCat = new StyledComboBox(ConditionDialog);
        comboCat->setObjectName(QString::fromUtf8("comboCat"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboCat->sizePolicy().hasHeightForWidth());
        comboCat->setSizePolicy(sizePolicy);
        comboCat->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(comboCat, 0, 4, 1, 1);

        comboType = new StyledComboBox(ConditionDialog);
        comboType->addItem(QString());
        comboType->setObjectName(QString::fromUtf8("comboType"));
        comboType->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboType->sizePolicy().hasHeightForWidth());
        comboType->setSizePolicy(sizePolicy1);
        comboType->setMaxVisibleItems(20);
        comboType->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout_2->addWidget(comboType, 0, 5, 1, 1);

        labelMC = new QLabel(ConditionDialog);
        labelMC->setObjectName(QString::fromUtf8("labelMC"));

        gridLayout_2->addWidget(labelMC, 0, 0, 1, 1);

        labelFilterType = new QLabel(ConditionDialog);
        labelFilterType->setObjectName(QString::fromUtf8("labelFilterType"));
        labelFilterType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelFilterType, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        splitter = new QSplitter(ConditionDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        collapseDescription = new Collapsible(splitter);
        collapseDescription->setObjectName(QString::fromUtf8("collapseDescription"));
        splitter->addWidget(collapseDescription);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBoxGeneral = new QGroupBox(layoutWidget);
        groupBoxGeneral->setObjectName(QString::fromUtf8("groupBoxGeneral"));
        gridLayout_9 = new QGridLayout(groupBoxGeneral);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        checkEnabled = new QCheckBox(groupBoxGeneral);
        checkEnabled->setObjectName(QString::fromUtf8("checkEnabled"));

        gridLayout_9->addWidget(checkEnabled, 0, 5, 1, 1);

        lineSummary = new QLineEdit(groupBoxGeneral);
        lineSummary->setObjectName(QString::fromUtf8("lineSummary"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineSummary->sizePolicy().hasHeightForWidth());
        lineSummary->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        lineSummary->setFont(font);
        lineSummary->setMaxLength(26);

        gridLayout_9->addWidget(lineSummary, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        label_2 = new QLabel(groupBoxGeneral);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_9->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBoxGeneral, 0, 0, 2, 2);

        groupBoxPosition = new QGroupBox(layoutWidget);
        groupBoxPosition->setObjectName(QString::fromUtf8("groupBoxPosition"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxPosition->sizePolicy().hasHeightForWidth());
        groupBoxPosition->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(groupBoxPosition);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelX1 = new QLabel(groupBoxPosition);
        labelX1->setObjectName(QString::fromUtf8("labelX1"));

        horizontalLayout->addWidget(labelX1);

        lineEditX1 = new CoordEdit(groupBoxPosition);
        lineEditX1->setObjectName(QString::fromUtf8("lineEditX1"));

        horizontalLayout->addWidget(lineEditX1);

        labelZ1 = new QLabel(groupBoxPosition);
        labelZ1->setObjectName(QString::fromUtf8("labelZ1"));

        horizontalLayout->addWidget(labelZ1);

        lineEditZ1 = new CoordEdit(groupBoxPosition);
        lineEditZ1->setObjectName(QString::fromUtf8("lineEditZ1"));

        horizontalLayout->addWidget(lineEditZ1);

        label_13 = new QLabel(groupBoxPosition);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout->addWidget(label_13);

        labelX2 = new QLabel(groupBoxPosition);
        labelX2->setObjectName(QString::fromUtf8("labelX2"));

        horizontalLayout->addWidget(labelX2);

        lineEditX2 = new CoordEdit(groupBoxPosition);
        lineEditX2->setObjectName(QString::fromUtf8("lineEditX2"));

        horizontalLayout->addWidget(lineEditX2);

        labelZ2 = new QLabel(groupBoxPosition);
        labelZ2->setObjectName(QString::fromUtf8("labelZ2"));

        horizontalLayout->addWidget(labelZ2);

        lineEditZ2 = new CoordEdit(groupBoxPosition);
        lineEditZ2->setObjectName(QString::fromUtf8("lineEditZ2"));
        lineEditZ2->setMaxLength(9);

        horizontalLayout->addWidget(lineEditZ2);

        buttonFromVisible = new QPushButton(groupBoxPosition);
        buttonFromVisible->setObjectName(QString::fromUtf8("buttonFromVisible"));

        horizontalLayout->addWidget(buttonFromVisible);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 6);

        checkSkipRef = new QCheckBox(groupBoxPosition);
        checkSkipRef->setObjectName(QString::fromUtf8("checkSkipRef"));

        gridLayout->addWidget(checkSkipRef, 0, 6, 1, 1);

        lineSquare = new QLineEdit(groupBoxPosition);
        lineSquare->setObjectName(QString::fromUtf8("lineSquare"));

        gridLayout->addWidget(lineSquare, 3, 5, 1, 2);

        lineRadius = new QLineEdit(groupBoxPosition);
        lineRadius->setObjectName(QString::fromUtf8("lineRadius"));

        gridLayout->addWidget(lineRadius, 2, 5, 1, 2);

        radioCustom = new QRadioButton(groupBoxPosition);
        radioCustom->setObjectName(QString::fromUtf8("radioCustom"));

        gridLayout->addWidget(radioCustom, 5, 0, 1, 1);

        labelRelative = new QLabel(groupBoxPosition);
        labelRelative->setObjectName(QString::fromUtf8("labelRelative"));

        gridLayout->addWidget(labelRelative, 6, 0, 1, 3);

        buttonAreaInfo = new QPushButton(groupBoxPosition);
        buttonAreaInfo->setObjectName(QString::fromUtf8("buttonAreaInfo"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonAreaInfo->sizePolicy().hasHeightForWidth());
        buttonAreaInfo->setSizePolicy(sizePolicy4);
        buttonAreaInfo->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border: none;\n"
"	image: url(:/icons/info.png);\n"
"	image-position: right;\n"
"}\n"
"QPushButton:hover {\n"
"	image: url(:/icons/info_h.png);\n"
"}"));

        gridLayout->addWidget(buttonAreaInfo, 3, 4, 1, 1);

        spinBox = new SpinInstances(groupBoxPosition);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy5);
        spinBox->setMinimum(0);
        spinBox->setMaximum(99);
        spinBox->setValue(1);

        gridLayout->addWidget(spinBox, 0, 5, 1, 1);

        comboRelative = new StyledComboBox(groupBoxPosition);
        comboRelative->addItem(QString());
        comboRelative->setObjectName(QString::fromUtf8("comboRelative"));

        gridLayout->addWidget(comboRelative, 6, 3, 1, 4);

        radioSquare = new QRadioButton(groupBoxPosition);
        radioSquare->setObjectName(QString::fromUtf8("radioSquare"));
        radioSquare->setChecked(true);

        gridLayout->addWidget(radioSquare, 3, 0, 1, 4);

        checkRadius = new QCheckBox(groupBoxPosition);
        checkRadius->setObjectName(QString::fromUtf8("checkRadius"));

        gridLayout->addWidget(checkRadius, 2, 0, 1, 4);

        labelSpinBox = new QLabel(groupBoxPosition);
        labelSpinBox->setObjectName(QString::fromUtf8("labelSpinBox"));

        gridLayout->addWidget(labelSpinBox, 0, 0, 1, 4);


        gridLayout_7->addWidget(groupBoxPosition, 2, 0, 2, 2);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLineWidth(0);
        pageNone = new QWidget();
        pageNone->setObjectName(QString::fromUtf8("pageNone"));
        pageNone->setEnabled(false);
        gridLayout_10 = new QGridLayout(pageNone);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        groupBox_6 = new QGroupBox(pageNone);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 0, 0, 1, 1);

        stackedWidget->addWidget(pageNone);
        pageBiomes = new QWidget();
        pageBiomes->setObjectName(QString::fromUtf8("pageBiomes"));
        gridLayout_4 = new QGridLayout(pageBiomes);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_7 = new QGroupBox(pageBiomes);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy6);
        gridLayout_13 = new QGridLayout(groupBox_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        labelY = new QLabel(groupBox_7);
        labelY->setObjectName(QString::fromUtf8("labelY"));
        labelY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_13->addWidget(labelY, 0, 3, 1, 1);

        scrollBiomes = new QScrollArea(groupBox_7);
        scrollBiomes->setObjectName(QString::fromUtf8("scrollBiomes"));
        scrollBiomes->setWidgetResizable(true);
        scrollBiomesContent = new QWidget();
        scrollBiomesContent->setObjectName(QString::fromUtf8("scrollBiomesContent"));
        verticalLayout_6 = new QVBoxLayout(scrollBiomesContent);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayoutBiomes = new QGridLayout();
        gridLayoutBiomes->setObjectName(QString::fromUtf8("gridLayoutBiomes"));

        verticalLayout_6->addLayout(gridLayoutBiomes);

        scrollBiomes->setWidget(scrollBiomesContent);

        gridLayout_13->addWidget(scrollBiomes, 3, 0, 1, 5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonUncheck = new QPushButton(groupBox_7);
        buttonUncheck->setObjectName(QString::fromUtf8("buttonUncheck"));

        horizontalLayout_4->addWidget(buttonUncheck);

        buttonInclude = new QPushButton(groupBox_7);
        buttonInclude->setObjectName(QString::fromUtf8("buttonInclude"));

        horizontalLayout_4->addWidget(buttonInclude);

        buttonExclude = new QPushButton(groupBox_7);
        buttonExclude->setObjectName(QString::fromUtf8("buttonExclude"));

        horizontalLayout_4->addWidget(buttonExclude);


        gridLayout_13->addLayout(horizontalLayout_4, 2, 0, 1, 5);

        stackedBiome = new QStackedWidget(groupBox_7);
        stackedBiome->setObjectName(QString::fromUtf8("stackedBiome"));
        sizePolicy2.setHeightForWidth(stackedBiome->sizePolicy().hasHeightForWidth());
        stackedBiome->setSizePolicy(sizePolicy2);
        pageBiomeOpt = new QWidget();
        pageBiomeOpt->setObjectName(QString::fromUtf8("pageBiomeOpt"));
        sizePolicy2.setHeightForWidth(pageBiomeOpt->sizePolicy().hasHeightForWidth());
        pageBiomeOpt->setSizePolicy(sizePolicy2);
        gridLayout_30 = new QGridLayout(pageBiomeOpt);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(0, 0, 0, 0);
        checkApprox = new QCheckBox(pageBiomeOpt);
        checkApprox->setObjectName(QString::fromUtf8("checkApprox"));

        gridLayout_30->addWidget(checkApprox, 2, 1, 1, 1);

        labelBiomeScale = new QLabel(pageBiomeOpt);
        labelBiomeScale->setObjectName(QString::fromUtf8("labelBiomeScale"));

        gridLayout_30->addWidget(labelBiomeScale, 0, 0, 1, 1);

        checkMatchAny = new QCheckBox(pageBiomeOpt);
        checkMatchAny->setObjectName(QString::fromUtf8("checkMatchAny"));

        gridLayout_30->addWidget(checkMatchAny, 2, 0, 1, 1);

        comboScale = new StyledComboBox(pageBiomeOpt);
        comboScale->setObjectName(QString::fromUtf8("comboScale"));

        gridLayout_30->addWidget(comboScale, 0, 1, 1, 1);

        stackedBiome->addWidget(pageBiomeOpt);
        pageBiomeOptSample = new QWidget();
        pageBiomeOptSample->setObjectName(QString::fromUtf8("pageBiomeOptSample"));
        sizePolicy2.setHeightForWidth(pageBiomeOptSample->sizePolicy().hasHeightForWidth());
        pageBiomeOptSample->setSizePolicy(sizePolicy2);
        gridLayout_31 = new QGridLayout(pageBiomeOptSample);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(pageBiomeOptSample);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_31->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(pageBiomeOptSample);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_31->addWidget(label_18, 1, 0, 1, 1);

        checkSamplePos = new QCheckBox(pageBiomeOptSample);
        checkSamplePos->setObjectName(QString::fromUtf8("checkSamplePos"));

        gridLayout_31->addWidget(checkSamplePos, 0, 4, 1, 1);

        lineCoverage1 = new QLineEdit(pageBiomeOptSample);
        lineCoverage1->setObjectName(QString::fromUtf8("lineCoverage1"));

        gridLayout_31->addWidget(lineCoverage1, 0, 1, 1, 1);

        lineConfidence1 = new QLineEdit(pageBiomeOptSample);
        lineConfidence1->setObjectName(QString::fromUtf8("lineConfidence1"));

        gridLayout_31->addWidget(lineConfidence1, 1, 1, 1, 1);

        stackedBiome->addWidget(pageBiomeOptSample);

        gridLayout_13->addWidget(stackedBiome, 0, 0, 2, 2);

        comboY1 = new StyledComboBox(groupBox_7);
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->addItem(QString());
        comboY1->setObjectName(QString::fromUtf8("comboY1"));
        comboY1->setEditable(true);
        comboY1->setMaxVisibleItems(12);

        gridLayout_13->addWidget(comboY1, 0, 4, 1, 1);


        gridLayout_4->addWidget(groupBox_7, 1, 1, 1, 1);

        stackedWidget->addWidget(pageBiomes);
        pageBiomeCenter = new QWidget();
        pageBiomeCenter->setObjectName(QString::fromUtf8("pageBiomeCenter"));
        gridLayout_18 = new QGridLayout(pageBiomeCenter);
        gridLayout_18->setSpacing(0);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(pageBiomeCenter);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_19 = new QGridLayout(groupBox_5);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_19->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_19->addWidget(label_6, 0, 0, 1, 1);

        lineBiomeSize = new QLineEdit(groupBox_5);
        lineBiomeSize->setObjectName(QString::fromUtf8("lineBiomeSize"));

        gridLayout_19->addWidget(lineBiomeSize, 2, 2, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 270, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_19->addItem(verticalSpacer_4, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_19->addWidget(label_5, 2, 0, 1, 1);

        labelY_2 = new QLabel(groupBox_5);
        labelY_2->setObjectName(QString::fromUtf8("labelY_2"));

        gridLayout_19->addWidget(labelY_2, 1, 0, 1, 2);

        lineTolerance = new QLineEdit(groupBox_5);
        lineTolerance->setObjectName(QString::fromUtf8("lineTolerance"));

        gridLayout_19->addWidget(lineTolerance, 3, 2, 1, 2);

        labelBiomeSize = new QLabel(groupBox_5);
        labelBiomeSize->setObjectName(QString::fromUtf8("labelBiomeSize"));
        sizePolicy6.setHeightForWidth(labelBiomeSize->sizePolicy().hasHeightForWidth());
        labelBiomeSize->setSizePolicy(sizePolicy6);

        gridLayout_19->addWidget(labelBiomeSize, 2, 4, 1, 1);

        comboMatchBiome = new StyledComboBox(groupBox_5);
        comboMatchBiome->setObjectName(QString::fromUtf8("comboMatchBiome"));
        comboMatchBiome->setEditable(true);
        comboMatchBiome->setMaxVisibleItems(20);

        gridLayout_19->addWidget(comboMatchBiome, 0, 2, 1, 3);

        comboY2 = new StyledComboBox(groupBox_5);
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->addItem(QString());
        comboY2->setObjectName(QString::fromUtf8("comboY2"));
        comboY2->setEditable(true);
        comboY2->setMaxVisibleItems(12);

        gridLayout_19->addWidget(comboY2, 1, 2, 1, 3);


        gridLayout_18->addWidget(groupBox_5, 0, 0, 1, 1);

        stackedWidget->addWidget(pageBiomeCenter);
        pageTemps = new QWidget();
        pageTemps->setObjectName(QString::fromUtf8("pageTemps"));
        verticalLayout_4 = new QVBoxLayout(pageTemps);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(pageTemps);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout = new QVBoxLayout(groupBox_8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayoutTemps = new QGridLayout();
        gridLayoutTemps->setObjectName(QString::fromUtf8("gridLayoutTemps"));

        verticalLayout->addLayout(gridLayoutTemps);

        verticalSpacer = new QSpacerItem(20, 322, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_4->addWidget(groupBox_8);

        stackedWidget->addWidget(pageTemps);
        pageClimates = new QWidget();
        pageClimates->setObjectName(QString::fromUtf8("pageClimates"));
        gridLayout_8 = new QGridLayout(pageClimates);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(pageClimates);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_15 = new QGridLayout(groupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_11 = new QGridLayout(groupBox_3);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 8, 0, 0);
        gridNoiseRequired = new QGridLayout();
        gridNoiseRequired->setSpacing(0);
        gridNoiseRequired->setObjectName(QString::fromUtf8("gridNoiseRequired"));

        gridLayout_11->addLayout(gridNoiseRequired, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 1, 1, 3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_14 = new QGridLayout(groupBox_4);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 8, 0, 0);
        gridNoiseName = new QGridLayout();
        gridNoiseName->setSpacing(0);
        gridNoiseName->setObjectName(QString::fromUtf8("gridNoiseName"));

        gridLayout_14->addLayout(gridNoiseName, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(groupBox_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_12 = new QGridLayout(groupBox_9);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 8, 0, 0);
        gridNoiseAllowed = new QGridLayout();
        gridNoiseAllowed->setSpacing(0);
        gridNoiseAllowed->setObjectName(QString::fromUtf8("gridNoiseAllowed"));

        gridLayout_12->addLayout(gridNoiseAllowed, 1, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_9, 0, 4, 1, 3);


        gridLayout_15->addWidget(groupBox_2, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_15->addWidget(label_10, 1, 0, 1, 1);

        scrollNoise = new QScrollArea(groupBox);
        scrollNoise->setObjectName(QString::fromUtf8("scrollNoise"));
        scrollNoise->setWidgetResizable(true);
        scrollNoiseContent = new QWidget();
        scrollNoiseContent->setObjectName(QString::fromUtf8("scrollNoiseContent"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(scrollNoiseContent->sizePolicy().hasHeightForWidth());
        scrollNoiseContent->setSizePolicy(sizePolicy7);
        verticalLayout_5 = new QVBoxLayout(scrollNoiseContent);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridNoiseBiomes = new QGridLayout();
        gridNoiseBiomes->setObjectName(QString::fromUtf8("gridNoiseBiomes"));

        verticalLayout_5->addLayout(gridNoiseBiomes);

        scrollNoise->setWidget(scrollNoiseContent);

        gridLayout_15->addWidget(scrollNoise, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(pageClimates);
        pageNoise = new QWidget();
        pageNoise->setObjectName(QString::fromUtf8("pageNoise"));
        gridLayout_23 = new QGridLayout(pageNoise);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        groupBoxNoise = new QGroupBox(pageNoise);
        groupBoxNoise->setObjectName(QString::fromUtf8("groupBoxNoise"));
        gridLayout_24 = new QGridLayout(groupBoxNoise);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        comboClimatePara = new StyledComboBox(groupBoxNoise);
        comboClimatePara->setObjectName(QString::fromUtf8("comboClimatePara"));

        gridLayout_24->addWidget(comboClimatePara, 0, 1, 1, 4);

        stackedNoise = new QStackedWidget(groupBoxNoise);
        stackedNoise->setObjectName(QString::fromUtf8("stackedNoise"));
        pageNoiseMinMax = new QWidget();
        pageNoiseMinMax->setObjectName(QString::fromUtf8("pageNoiseMinMax"));
        gridLayout_33 = new QGridLayout(pageNoiseMinMax);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        comboMinMax = new StyledComboBox(pageNoiseMinMax);
        comboMinMax->addItem(QString());
        comboMinMax->addItem(QString());
        comboMinMax->setObjectName(QString::fromUtf8("comboMinMax"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(comboMinMax->sizePolicy().hasHeightForWidth());
        comboMinMax->setSizePolicy(sizePolicy8);

        gridLayout_33->addWidget(comboMinMax, 0, 1, 1, 1);

        label_15 = new QLabel(pageNoiseMinMax);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_33->addWidget(label_15, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_33->addItem(verticalSpacer_5, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(180, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_33->addItem(horizontalSpacer, 1, 0, 1, 1);

        stackedNoise->addWidget(pageNoiseMinMax);
        pageNoiseSample = new QWidget();
        pageNoiseSample->setObjectName(QString::fromUtf8("pageNoiseSample"));
        gridLayout_32 = new QGridLayout(pageNoiseSample);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_32->setContentsMargins(0, 0, 0, 0);
        checkSamplePos2 = new QCheckBox(pageNoiseSample);
        checkSamplePos2->setObjectName(QString::fromUtf8("checkSamplePos2"));

        gridLayout_32->addWidget(checkSamplePos2, 2, 1, 1, 1);

        lineCoverage2 = new QLineEdit(pageNoiseSample);
        lineCoverage2->setObjectName(QString::fromUtf8("lineCoverage2"));

        gridLayout_32->addWidget(lineCoverage2, 0, 1, 1, 1);

        label_27 = new QLabel(pageNoiseSample);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_32->addWidget(label_27, 1, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_32->addItem(verticalSpacer_9, 3, 1, 1, 1);

        lineConfidence2 = new QLineEdit(pageNoiseSample);
        lineConfidence2->setObjectName(QString::fromUtf8("lineConfidence2"));

        gridLayout_32->addWidget(lineConfidence2, 1, 1, 1, 1);

        label_19 = new QLabel(pageNoiseSample);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_32->addWidget(label_19, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_32->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        stackedNoise->addWidget(pageNoiseSample);

        gridLayout_24->addWidget(stackedNoise, 4, 0, 1, 5);

        label_9 = new QLabel(groupBoxNoise);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_24->addWidget(label_9, 3, 0, 1, 1);

        label_14 = new QLabel(groupBoxNoise);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_24->addWidget(label_14, 3, 2, 1, 1);

        comboOctaves = new StyledComboBox(groupBoxNoise);
        comboOctaves->setObjectName(QString::fromUtf8("comboOctaves"));
        comboOctaves->setFont(font);

        gridLayout_24->addWidget(comboOctaves, 1, 1, 1, 4);

        label_12 = new QLabel(groupBoxNoise);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_24->addWidget(label_12, 1, 0, 1, 1);

        lineMax = new QLineEdit(groupBoxNoise);
        lineMax->setObjectName(QString::fromUtf8("lineMax"));

        gridLayout_24->addWidget(lineMax, 3, 3, 1, 1);

        label_8 = new QLabel(groupBoxNoise);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_24->addWidget(label_8, 0, 0, 1, 1);

        lineMin = new QLineEdit(groupBoxNoise);
        lineMin->setObjectName(QString::fromUtf8("lineMin"));

        gridLayout_24->addWidget(lineMin, 3, 1, 1, 1);

        checkInvertRange = new QCheckBox(groupBoxNoise);
        checkInvertRange->setObjectName(QString::fromUtf8("checkInvertRange"));

        gridLayout_24->addWidget(checkInvertRange, 3, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_2, 5, 0, 1, 1);


        gridLayout_23->addWidget(groupBoxNoise, 0, 0, 1, 1);

        stackedWidget->addWidget(pageNoise);
        pageHeight = new QWidget();
        pageHeight->setObjectName(QString::fromUtf8("pageHeight"));
        gridLayout_25 = new QGridLayout(pageHeight);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        groupBox_11 = new QGroupBox(pageHeight);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_26 = new QGridLayout(groupBox_11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        label_11 = new QLabel(groupBox_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_26->addWidget(label_11, 0, 0, 1, 1);

        comboHeightRange = new StyledComboBox(groupBox_11);
        comboHeightRange->addItem(QString());
        comboHeightRange->addItem(QString());
        comboHeightRange->setObjectName(QString::fromUtf8("comboHeightRange"));

        gridLayout_26->addWidget(comboHeightRange, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 332, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_26->addItem(verticalSpacer_6, 1, 1, 1, 1);

        gridHeightRange = new QGridLayout();
        gridHeightRange->setSpacing(0);
        gridHeightRange->setObjectName(QString::fromUtf8("gridHeightRange"));

        gridLayout_26->addLayout(gridHeightRange, 0, 2, 1, 1);


        gridLayout_25->addWidget(groupBox_11, 0, 0, 1, 1);

        stackedWidget->addWidget(pageHeight);
        pageLua = new QWidget();
        pageLua->setObjectName(QString::fromUtf8("pageLua"));
        gridLayout_20 = new QGridLayout(pageLua);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        comboLua = new StyledComboBox(pageLua);
        comboLua->setObjectName(QString::fromUtf8("comboLua"));
        sizePolicy5.setHeightForWidth(comboLua->sizePolicy().hasHeightForWidth());
        comboLua->setSizePolicy(sizePolicy5);

        gridLayout_20->addWidget(comboLua, 0, 2, 1, 1);

        tabWidgetLua = new QTabWidget(pageLua);
        tabWidgetLua->setObjectName(QString::fromUtf8("tabWidgetLua"));
        tabLuaText = new QWidget();
        tabLuaText->setObjectName(QString::fromUtf8("tabLuaText"));
        gridLayout_21 = new QGridLayout(tabLuaText);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(0, 0, 0, 1);
        pushLuaSaveAs = new QPushButton(tabLuaText);
        pushLuaSaveAs->setObjectName(QString::fromUtf8("pushLuaSaveAs"));

        gridLayout_21->addWidget(pushLuaSaveAs, 1, 4, 1, 1);

        pushLuaExample = new QPushButton(tabLuaText);
        pushLuaExample->setObjectName(QString::fromUtf8("pushLuaExample"));

        gridLayout_21->addWidget(pushLuaExample, 1, 3, 1, 1);

        pushLuaSave = new QPushButton(tabLuaText);
        pushLuaSave->setObjectName(QString::fromUtf8("pushLuaSave"));

        gridLayout_21->addWidget(pushLuaSave, 1, 5, 1, 1);

        textEditLua = new ScriptEditor(tabLuaText);
        textEditLua->setObjectName(QString::fromUtf8("textEditLua"));
        textEditLua->setFont(font);

        gridLayout_21->addWidget(textEditLua, 0, 3, 1, 3);

        tabWidgetLua->addTab(tabLuaText, QString());
        tabLuaOutput = new QWidget();
        tabLuaOutput->setObjectName(QString::fromUtf8("tabLuaOutput"));
        gridLayout_22 = new QGridLayout(tabLuaOutput);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        textEditLuaOut = new QPlainTextEdit(tabLuaOutput);
        textEditLuaOut->setObjectName(QString::fromUtf8("textEditLuaOut"));
        textEditLuaOut->setFont(font);
        textEditLuaOut->setReadOnly(true);

        gridLayout_22->addWidget(textEditLuaOut, 1, 0, 1, 2);

        labelLuaCall = new QLabel(tabLuaOutput);
        labelLuaCall->setObjectName(QString::fromUtf8("labelLuaCall"));
        labelLuaCall->setFont(font);

        gridLayout_22->addWidget(labelLuaCall, 0, 0, 1, 2);

        tabWidgetLua->addTab(tabLuaOutput, QString());

        gridLayout_20->addWidget(tabWidgetLua, 1, 0, 1, 5);

        label_7 = new QLabel(pageLua);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_20->addWidget(label_7, 0, 0, 1, 1);

        pushLuaOpen = new QPushButton(pageLua);
        pushLuaOpen->setObjectName(QString::fromUtf8("pushLuaOpen"));

        gridLayout_20->addWidget(pushLuaOpen, 0, 4, 1, 1);

        pushInfoLua = new QPushButton(pageLua);
        pushInfoLua->setObjectName(QString::fromUtf8("pushInfoLua"));
        pushInfoLua->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border: none;\n"
"	image: url(:/icons/info.png);\n"
"	image-position: right;\n"
"}\n"
"QPushButton:hover {\n"
"	image: url(:/icons/info_h.png);\n"
"}"));

        gridLayout_20->addWidget(pushInfoLua, 0, 1, 1, 1);

        stackedWidget->addWidget(pageLua);
        pageSpiral = new QWidget();
        pageSpiral->setObjectName(QString::fromUtf8("pageSpiral"));
        gridLayout_28 = new QGridLayout(pageSpiral);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(0, 0, 0, 0);
        groupBoxSpiral = new QGroupBox(pageSpiral);
        groupBoxSpiral->setObjectName(QString::fromUtf8("groupBoxSpiral"));
        gridLayout_29 = new QGridLayout(groupBoxSpiral);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        label_16 = new QLabel(groupBoxSpiral);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_29->addWidget(label_16, 0, 0, 1, 1);

        lineSpiralStep = new QLineEdit(groupBoxSpiral);
        lineSpiralStep->setObjectName(QString::fromUtf8("lineSpiralStep"));

        gridLayout_29->addWidget(lineSpiralStep, 0, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_29->addItem(verticalSpacer_8, 1, 0, 1, 1);


        gridLayout_28->addWidget(groupBoxSpiral, 0, 0, 1, 1);

        stackedWidget->addWidget(pageSpiral);
        pageVillage = new QWidget();
        pageVillage->setObjectName(QString::fromUtf8("pageVillage"));
        gridLayoutVillage = new QGridLayout(pageVillage);
        gridLayoutVillage->setObjectName(QString::fromUtf8("gridLayoutVillage"));
        gridLayoutVillage->setContentsMargins(0, 0, 0, 0);
        groupBoxVillage = new QGroupBox(pageVillage);
        groupBoxVillage->setObjectName(QString::fromUtf8("groupBoxVillage"));
        gridLayoutVillage2 = new QGridLayout(groupBoxVillage);
        gridLayoutVillage2->setObjectName(QString::fromUtf8("gridLayoutVillage2"));
        checkStartPieces = new QCheckBox(groupBoxVillage);
        checkStartPieces->setObjectName(QString::fromUtf8("checkStartPieces"));

        gridLayoutVillage2->addWidget(checkStartPieces, 0, 0, 1, 1);

        checkAbandoned = new QCheckBox(groupBoxVillage);
        checkAbandoned->setObjectName(QString::fromUtf8("checkAbandoned"));
        checkAbandoned->setTristate(true);

        gridLayoutVillage2->addWidget(checkAbandoned, 0, 1, 1, 1);

        scrollVillagePieces = new QScrollArea(groupBoxVillage);
        scrollVillagePieces->setObjectName(QString::fromUtf8("scrollVillagePieces"));
        scrollVillagePieces->setWidgetResizable(true);
        scrollVillagePiecesContents = new QWidget();
        scrollVillagePiecesContents->setObjectName(QString::fromUtf8("scrollVillagePiecesContents"));
        verticalLayout_3_1 = new QVBoxLayout(scrollVillagePiecesContents);
        verticalLayout_3_1->setObjectName(QString::fromUtf8("verticalLayout_3_1"));
        gridVillagePieces = new QGridLayout();
        gridVillagePieces->setObjectName(QString::fromUtf8("gridVillagePieces"));

        verticalLayout_3_1->addLayout(gridVillagePieces);

        scrollVillagePieces->setWidget(scrollVillagePiecesContents);

        gridLayoutVillage2->addWidget(scrollVillagePieces, 1, 0, 1, 2);


        gridLayoutVillage->addWidget(groupBoxVillage, 0, 0, 1, 1);

        stackedWidget->addWidget(pageVillage);
        pageBastion = new QWidget();
        pageBastion->setObjectName(QString::fromUtf8("pageBastion"));
        gridLayoutBasion = new QGridLayout(pageBastion);
        gridLayoutBasion->setObjectName(QString::fromUtf8("gridLayoutBasion"));
        gridLayoutBasion->setContentsMargins(0, 0, 0, 0);
        groupBoxBastion = new QGroupBox(pageBastion);
        groupBoxBastion->setObjectName(QString::fromUtf8("groupBoxBastion"));
        gridLayoutBastion2 = new QGridLayout(groupBoxBastion);
        gridLayoutBastion2->setObjectName(QString::fromUtf8("gridLayoutBastion2"));
        checkStartBastion = new QCheckBox(groupBoxBastion);
        checkStartBastion->setObjectName(QString::fromUtf8("checkStartBastion"));

        gridLayoutBastion2->addWidget(checkStartBastion, 0, 0, 1, 1);

        scrollBastionPieces = new QScrollArea(groupBoxBastion);
        scrollBastionPieces->setObjectName(QString::fromUtf8("scrollBastionPieces"));
        scrollBastionPieces->setWidgetResizable(true);
        scrollBastionPiecesContents = new QWidget();
        scrollBastionPiecesContents->setObjectName(QString::fromUtf8("scrollBastionPiecesContents"));
        verticalLayout_3_2 = new QVBoxLayout(scrollBastionPiecesContents);
        verticalLayout_3_2->setObjectName(QString::fromUtf8("verticalLayout_3_2"));
        gridBastionPieces = new QGridLayout();
        gridBastionPieces->setObjectName(QString::fromUtf8("gridBastionPieces"));

        verticalLayout_3_2->addLayout(gridBastionPieces);

        scrollBastionPieces->setWidget(scrollBastionPiecesContents);

        gridLayoutBastion2->addWidget(scrollBastionPieces, 1, 0, 1, 1);


        gridLayoutBasion->addWidget(groupBoxBastion, 0, 0, 1, 1);

        stackedWidget->addWidget(pageBastion);
        pageFortress = new QWidget();
        pageFortress->setObjectName(QString::fromUtf8("pageFortress"));
        gridLayout_16 = new QGridLayout(pageFortress);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        groupBoxFortress = new QGroupBox(pageFortress);
        groupBoxFortress->setObjectName(QString::fromUtf8("groupBoxFortress"));
        gridLayout_17 = new QGridLayout(groupBoxFortress);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        checkDenseBB = new QCheckBox(groupBoxFortress);
        checkDenseBB->setObjectName(QString::fromUtf8("checkDenseBB"));

        gridLayout_17->addWidget(checkDenseBB, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 333, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_17->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_16->addWidget(groupBoxFortress, 0, 0, 1, 1);

        stackedWidget->addWidget(pageFortress);
        pagePortal = new QWidget();
        pagePortal->setObjectName(QString::fromUtf8("pagePortal"));
        gridLayoutPortal = new QGridLayout(pagePortal);
        gridLayoutPortal->setObjectName(QString::fromUtf8("gridLayoutPortal"));
        gridLayoutPortal->setContentsMargins(0, 0, 0, 0);
        groupBoxPortal = new QGroupBox(pagePortal);
        groupBoxPortal->setObjectName(QString::fromUtf8("groupBoxPortal"));
        gridLayoutPortal2 = new QGridLayout(groupBoxPortal);
        gridLayoutPortal2->setObjectName(QString::fromUtf8("gridLayoutPortal2"));
        checkStartPortal = new QCheckBox(groupBoxPortal);
        checkStartPortal->setObjectName(QString::fromUtf8("checkStartPortal"));

        gridLayoutPortal2->addWidget(checkStartPortal, 0, 0, 1, 1);

        scrollPortalPieces = new QScrollArea(groupBoxPortal);
        scrollPortalPieces->setObjectName(QString::fromUtf8("scrollPortalPieces"));
        scrollPortalPieces->setWidgetResizable(true);
        scrollPortalPiecesContents = new QWidget();
        scrollPortalPiecesContents->setObjectName(QString::fromUtf8("scrollPortalPiecesContents"));
        verticalLayout_3_3 = new QVBoxLayout(scrollPortalPiecesContents);
        verticalLayout_3_3->setObjectName(QString::fromUtf8("verticalLayout_3_3"));
        gridPortalPieces = new QGridLayout();
        gridPortalPieces->setObjectName(QString::fromUtf8("gridPortalPieces"));

        verticalLayout_3_3->addLayout(gridPortalPieces);

        scrollPortalPieces->setWidget(scrollPortalPiecesContents);

        gridLayoutPortal2->addWidget(scrollPortalPieces, 1, 0, 1, 1);


        gridLayoutPortal->addWidget(groupBoxPortal, 0, 0, 1, 1);

        stackedWidget->addWidget(pagePortal);
        pageEndCity = new QWidget();
        pageEndCity->setObjectName(QString::fromUtf8("pageEndCity"));
        gridLayoutEndCity = new QGridLayout(pageEndCity);
        gridLayoutEndCity->setObjectName(QString::fromUtf8("gridLayoutEndCity"));
        gridLayoutEndCity->setContentsMargins(0, 0, 0, 0);
        groupBoxEndCity = new QGroupBox(pageEndCity);
        groupBoxEndCity->setObjectName(QString::fromUtf8("groupBoxEndCity"));
        gridLayoutEndCity2 = new QGridLayout(groupBoxEndCity);
        gridLayoutEndCity2->setObjectName(QString::fromUtf8("gridLayoutEndCity2"));
        checkEndShip = new QCheckBox(groupBoxEndCity);
        checkEndShip->setObjectName(QString::fromUtf8("checkEndShip"));
        checkEndShip->setTristate(true);

        gridLayoutEndCity2->addWidget(checkEndShip, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutEndCity2->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayoutEndCity->addWidget(groupBoxEndCity, 0, 0, 1, 1);

        stackedWidget->addWidget(pageEndCity);
        pageIgloo = new QWidget();
        pageIgloo->setObjectName(QString::fromUtf8("pageIgloo"));
        gridLayout_27 = new QGridLayout(pageIgloo);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        groupBoxIgloo = new QGroupBox(pageIgloo);
        groupBoxIgloo->setObjectName(QString::fromUtf8("groupBoxIgloo"));
        gridLayoutEndCity2_2 = new QGridLayout(groupBoxIgloo);
        gridLayoutEndCity2_2->setObjectName(QString::fromUtf8("gridLayoutEndCity2_2"));
        checkBasement = new QCheckBox(groupBoxIgloo);
        checkBasement->setObjectName(QString::fromUtf8("checkBasement"));
        checkBasement->setTristate(true);

        gridLayoutEndCity2_2->addWidget(checkBasement, 0, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayoutEndCity2_2->addItem(verticalSpacer_7, 1, 0, 1, 1);


        gridLayout_27->addWidget(groupBoxIgloo, 0, 0, 1, 1);

        stackedWidget->addWidget(pageIgloo);

        gridLayout_7->addWidget(stackedWidget, 4, 0, 1, 2);

        splitter->addWidget(layoutWidget);

        gridLayout_3->addWidget(splitter, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(ConditionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        QWidget::setTabOrder(comboCat, comboType);
        QWidget::setTabOrder(comboType, spinBox);
        QWidget::setTabOrder(spinBox, lineEditX1);
        QWidget::setTabOrder(lineEditX1, lineEditZ1);
        QWidget::setTabOrder(lineEditZ1, lineEditX2);
        QWidget::setTabOrder(lineEditX2, lineEditZ2);
        QWidget::setTabOrder(lineEditZ2, comboRelative);
        QWidget::setTabOrder(comboRelative, stackedWidget);

        retranslateUi(ConditionDialog);

        stackedWidget->setCurrentIndex(5);
        stackedBiome->setCurrentIndex(1);
        stackedNoise->setCurrentIndex(0);
        tabWidgetLua->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConditionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConditionDialog)
    {
        ConditionDialog->setWindowTitle(QCoreApplication::translate("ConditionDialog", "Condition Editor", nullptr));
        comboType->setItemText(0, QCoreApplication::translate("ConditionDialog", "Select type", nullptr));

        labelMC->setText(QCoreApplication::translate("ConditionDialog", "MC: 1.X", nullptr));
        labelFilterType->setText(QCoreApplication::translate("ConditionDialog", "Condition type:", nullptr));
        groupBoxGeneral->setTitle(QCoreApplication::translate("ConditionDialog", "General", nullptr));
        checkEnabled->setText(QCoreApplication::translate("ConditionDialog", "Condition enabled", nullptr));
        lineSummary->setText(QString());
        lineSummary->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("ConditionDialog", "Label:", nullptr));
        groupBoxPosition->setTitle(QCoreApplication::translate("ConditionDialog", "Location", nullptr));
#if QT_CONFIG(tooltip)
        labelX1->setToolTip(QCoreApplication::translate("ConditionDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX1->setText(QCoreApplication::translate("ConditionDialog", "X<sub>1</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX1->setToolTip(QCoreApplication::translate("ConditionDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX1->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ1->setToolTip(QCoreApplication::translate("ConditionDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ1->setText(QCoreApplication::translate("ConditionDialog", "Z<sub>1</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ1->setToolTip(QCoreApplication::translate("ConditionDialog", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ1->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
        label_13->setText(QString());
#if QT_CONFIG(tooltip)
        labelX2->setToolTip(QCoreApplication::translate("ConditionDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX2->setText(QCoreApplication::translate("ConditionDialog", "X<sub>2</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX2->setToolTip(QCoreApplication::translate("ConditionDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX2->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ2->setToolTip(QCoreApplication::translate("ConditionDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ2->setText(QCoreApplication::translate("ConditionDialog", "Z<sub>2</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ2->setToolTip(QCoreApplication::translate("ConditionDialog", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ2->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
        buttonFromVisible->setText(QCoreApplication::translate("ConditionDialog", "From visible", nullptr));
#if QT_CONFIG(tooltip)
        checkSkipRef->setToolTip(QCoreApplication::translate("ConditionDialog", "Skip instances at exactly the relative reference location", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSkipRef->setText(QCoreApplication::translate("ConditionDialog", "Ignore reference", nullptr));
        lineSquare->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
        lineRadius->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
        radioCustom->setText(QCoreApplication::translate("ConditionDialog", "Custom:", nullptr));
        labelRelative->setText(QCoreApplication::translate("ConditionDialog", "Location is relative to:", nullptr));
        buttonAreaInfo->setText(QString());
        spinBox->setSpecialValueText(QCoreApplication::translate("ConditionDialog", "0 (exclude)", nullptr));
        comboRelative->setItemText(0, QCoreApplication::translate("ConditionDialog", "World origin", nullptr));

        radioSquare->setText(QCoreApplication::translate("ConditionDialog", "Within centred square of side:", nullptr));
        checkRadius->setText(QCoreApplication::translate("ConditionDialog", "Within radial distance:", nullptr));
        labelSpinBox->setText(QCoreApplication::translate("ConditionDialog", "Instances within area:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ConditionDialog", "Details", nullptr));
        label_3->setText(QCoreApplication::translate("ConditionDialog", "None", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("ConditionDialog", "Biomes", nullptr));
        labelY->setText(QCoreApplication::translate("ConditionDialog", "Y:", nullptr));
        buttonUncheck->setText(QCoreApplication::translate("ConditionDialog", "uncheck all", nullptr));
        buttonInclude->setText(QCoreApplication::translate("ConditionDialog", "include all", nullptr));
        buttonExclude->setText(QCoreApplication::translate("ConditionDialog", "exclude all", nullptr));
#if QT_CONFIG(tooltip)
        checkApprox->setToolTip(QCoreApplication::translate("ConditionDialog", "Enables optimizations that trade some accuracy for speed", nullptr));
#endif // QT_CONFIG(tooltip)
        checkApprox->setText(QCoreApplication::translate("ConditionDialog", "Approximate", nullptr));
        labelBiomeScale->setText(QCoreApplication::translate("ConditionDialog", "Biome scale:", nullptr));
#if QT_CONFIG(tooltip)
        checkMatchAny->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p style=\"white-space:pre\">Satisfied if <span style=\" font-weight:600;\">any</span> of the checked biomes are present</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkMatchAny->setText(QCoreApplication::translate("ConditionDialog", "Match any", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("ConditionDialog", "Proportion of the area that has to be of the included biomes", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("ConditionDialog", "Required coverage (%):", nullptr));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("ConditionDialog", "Statistical confidence that the coverage has been reached", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("ConditionDialog", "Confidence (%):", nullptr));
#if QT_CONFIG(tooltip)
        checkSamplePos->setToolTip(QCoreApplication::translate("ConditionDialog", "Instead of estimating the center of the allowed biome area,\n"
"yield each sampled position individually", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSamplePos->setText(QCoreApplication::translate("ConditionDialog", "Yield individual samples", nullptr));
#if QT_CONFIG(tooltip)
        lineCoverage1->setToolTip(QCoreApplication::translate("ConditionDialog", "Proportion of the area that has to be of the included biomes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineConfidence1->setToolTip(QCoreApplication::translate("ConditionDialog", "Statistical confidence that the coverage has been reached", nullptr));
#endif // QT_CONFIG(tooltip)
        comboY1->setItemText(0, QCoreApplication::translate("ConditionDialog", "256 (Surface)", nullptr));
        comboY1->setItemText(1, QCoreApplication::translate("ConditionDialog", "128 (Nether Roof)", nullptr));
        comboY1->setItemText(2, QCoreApplication::translate("ConditionDialog", "62 (Sea Level)", nullptr));
        comboY1->setItemText(3, QCoreApplication::translate("ConditionDialog", "48", nullptr));
        comboY1->setItemText(4, QCoreApplication::translate("ConditionDialog", "32", nullptr));
        comboY1->setItemText(5, QCoreApplication::translate("ConditionDialog", "16", nullptr));
        comboY1->setItemText(6, QCoreApplication::translate("ConditionDialog", "0", nullptr));
        comboY1->setItemText(7, QCoreApplication::translate("ConditionDialog", "-16", nullptr));
        comboY1->setItemText(8, QCoreApplication::translate("ConditionDialog", "-32", nullptr));
        comboY1->setItemText(9, QCoreApplication::translate("ConditionDialog", "-48", nullptr));
        comboY1->setItemText(10, QCoreApplication::translate("ConditionDialog", "-64 (Bedrock)", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("ConditionDialog", "Locate biome center", nullptr));
        label_4->setText(QCoreApplication::translate("ConditionDialog", "Border tolerance:", nullptr));
        label_6->setText(QCoreApplication::translate("ConditionDialog", "Biome:", nullptr));
        lineBiomeSize->setText(QCoreApplication::translate("ConditionDialog", "1", nullptr));
        label_5->setText(QCoreApplication::translate("ConditionDialog", "Minimum area:", nullptr));
        labelY_2->setText(QCoreApplication::translate("ConditionDialog", "Sample at height (Y):", nullptr));
        lineTolerance->setText(QCoreApplication::translate("ConditionDialog", "0", nullptr));
        labelBiomeSize->setText(QCoreApplication::translate("ConditionDialog", "(? sq. chunks)", nullptr));
        comboY2->setItemText(0, QCoreApplication::translate("ConditionDialog", "256 (Surface)", nullptr));
        comboY2->setItemText(1, QCoreApplication::translate("ConditionDialog", "128 (Nether Roof)", nullptr));
        comboY2->setItemText(2, QCoreApplication::translate("ConditionDialog", "62 (Sea Level)", nullptr));
        comboY2->setItemText(3, QCoreApplication::translate("ConditionDialog", "48", nullptr));
        comboY2->setItemText(4, QCoreApplication::translate("ConditionDialog", "32", nullptr));
        comboY2->setItemText(5, QCoreApplication::translate("ConditionDialog", "16", nullptr));
        comboY2->setItemText(6, QCoreApplication::translate("ConditionDialog", "0", nullptr));
        comboY2->setItemText(7, QCoreApplication::translate("ConditionDialog", "-16", nullptr));
        comboY2->setItemText(8, QCoreApplication::translate("ConditionDialog", "-32", nullptr));
        comboY2->setItemText(9, QCoreApplication::translate("ConditionDialog", "-48", nullptr));
        comboY2->setItemText(10, QCoreApplication::translate("ConditionDialog", "-64 (Bedrock)", nullptr));

        groupBox_8->setTitle(QCoreApplication::translate("ConditionDialog", "Temperature categories", nullptr));
        label->setText(QCoreApplication::translate("ConditionDialog", "Select how many entries of each temperature category are required.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConditionDialog", "Climate parameters", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConditionDialog", "Select the minimum required and maximum allowed climate parameters:", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>The climate has to enter the required range</p><p>With the <span style=\" font-style:italic;\">complete</span> modifier, the entire range must be covered</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("ConditionDialog", "Required:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConditionDialog", "Climate", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_9->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>The climate must remain inside the confinement range</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_9->setTitle(QCoreApplication::translate("ConditionDialog", "Confined:", nullptr));
        label_10->setText(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>Resulting biomes (<span style=\" font-weight:600;\">at least one</span> with <img src=\":/icons/check_include.png\"/>, <span style=\" font-weight:600;\">any</span> with <img src=\":/icons/check_unchecked.png\"/>, <span style=\" font-weight:600;\">none</span> with <img src=\":/icons/check_exclude.png\"/>):</p></body></html>", nullptr));
        groupBoxNoise->setTitle(QCoreApplication::translate("ConditionDialog", "Locate climate minimum/maximum", nullptr));
        comboMinMax->setItemText(0, QCoreApplication::translate("ConditionDialog", "Minimum", nullptr));
        comboMinMax->setItemText(1, QCoreApplication::translate("ConditionDialog", "Maximum", nullptr));

        label_15->setText(QCoreApplication::translate("ConditionDialog", "Yield position of:", nullptr));
#if QT_CONFIG(tooltip)
        checkSamplePos2->setToolTip(QCoreApplication::translate("ConditionDialog", "Instead of estimating the center of the allowed biome area,\n"
"yield each sampled position individually", nullptr));
#endif // QT_CONFIG(tooltip)
        checkSamplePos2->setText(QCoreApplication::translate("ConditionDialog", "Yield individual samples", nullptr));
#if QT_CONFIG(tooltip)
        label_27->setToolTip(QCoreApplication::translate("ConditionDialog", "Statistical confidence that the coverage has been reached", nullptr));
#endif // QT_CONFIG(tooltip)
        label_27->setText(QCoreApplication::translate("ConditionDialog", "Confidence (%):", nullptr));
#if QT_CONFIG(tooltip)
        lineConfidence2->setToolTip(QCoreApplication::translate("ConditionDialog", "Statistical confidence that the coverage has been reached", nullptr));
#endif // QT_CONFIG(tooltip)
        label_19->setText(QCoreApplication::translate("ConditionDialog", "Required coverage (%):", nullptr));
        label_9->setText(QCoreApplication::translate("ConditionDialog", "If value is in range:", nullptr));
        label_14->setText(QCoreApplication::translate("ConditionDialog", "-", nullptr));
        label_12->setText(QCoreApplication::translate("ConditionDialog", "Generate up to octave:", nullptr));
#if QT_CONFIG(tooltip)
        lineMax->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>Upper bound (inclusive)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineMax->setPlaceholderText(QCoreApplication::translate("ConditionDialog", "+Infinity", nullptr));
        label_8->setText(QCoreApplication::translate("ConditionDialog", "Climate parameter: ", nullptr));
#if QT_CONFIG(tooltip)
        lineMin->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>Lower bound (inclusive)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineMin->setPlaceholderText(QCoreApplication::translate("ConditionDialog", "-Infinity", nullptr));
#if QT_CONFIG(tooltip)
        checkInvertRange->setToolTip(QCoreApplication::translate("ConditionDialog", "Only match if value is outside the given range", nullptr));
#endif // QT_CONFIG(tooltip)
        checkInvertRange->setText(QCoreApplication::translate("ConditionDialog", "Invert range", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("ConditionDialog", "Approximate surface height", nullptr));
        label_11->setText(QCoreApplication::translate("ConditionDialog", "Height (Y-level)", nullptr));
        comboHeightRange->setItemText(0, QCoreApplication::translate("ConditionDialog", "Inside range:", nullptr));
        comboHeightRange->setItemText(1, QCoreApplication::translate("ConditionDialog", "Outside range:", nullptr));

        pushLuaSaveAs->setText(QCoreApplication::translate("ConditionDialog", "Save as...", nullptr));
        pushLuaExample->setText(QCoreApplication::translate("ConditionDialog", "Examples...", nullptr));
        pushLuaSave->setText(QCoreApplication::translate("ConditionDialog", "Save", nullptr));
        tabWidgetLua->setTabText(tabWidgetLua->indexOf(tabLuaText), QCoreApplication::translate("ConditionDialog", "Edit", nullptr));
        labelLuaCall->setText(QString());
        tabWidgetLua->setTabText(tabWidgetLua->indexOf(tabLuaOutput), QCoreApplication::translate("ConditionDialog", "Errors", nullptr));
        label_7->setText(QCoreApplication::translate("ConditionDialog", "Lua script:", nullptr));
        pushLuaOpen->setText(QCoreApplication::translate("ConditionDialog", "Open directory...", nullptr));
        pushInfoLua->setText(QString());
        groupBoxSpiral->setTitle(QCoreApplication::translate("ConditionDialog", "Spiral iterator", nullptr));
        label_16->setText(QCoreApplication::translate("ConditionDialog", "Step size:", nullptr));
        lineSpiralStep->setText(QCoreApplication::translate("ConditionDialog", "512", nullptr));
        groupBoxVillage->setTitle(QCoreApplication::translate("ConditionDialog", "Village variants", nullptr));
#if QT_CONFIG(tooltip)
        checkStartPieces->setToolTip(QCoreApplication::translate("ConditionDialog", "Allow only structures that start with one of the selected pieces", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStartPieces->setText(QCoreApplication::translate("ConditionDialog", "Filter starting piece", nullptr));
        checkAbandoned->setText(QCoreApplication::translate("ConditionDialog", "Abandoned", nullptr));
        groupBoxBastion->setTitle(QCoreApplication::translate("ConditionDialog", "Bastion variants", nullptr));
#if QT_CONFIG(tooltip)
        checkStartBastion->setToolTip(QCoreApplication::translate("ConditionDialog", "Allow only structures that start with one of the selected pieces", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStartBastion->setText(QCoreApplication::translate("ConditionDialog", "Filter starting piece", nullptr));
        groupBoxFortress->setTitle(QCoreApplication::translate("ConditionDialog", "Fortress pieces", nullptr));
#if QT_CONFIG(tooltip)
        checkDenseBB->setToolTip(QCoreApplication::translate("ConditionDialog", "<html><head/><body><p>Maximum continuous square bounding box</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkDenseBB->setText(QCoreApplication::translate("ConditionDialog", "With 2x2 arrangement of bridge crossings or start piece", nullptr));
        groupBoxPortal->setTitle(QCoreApplication::translate("ConditionDialog", "Ruined portal variants", nullptr));
#if QT_CONFIG(tooltip)
        checkStartPortal->setToolTip(QCoreApplication::translate("ConditionDialog", "Allow only structures that start with one of the selected pieces", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStartPortal->setText(QCoreApplication::translate("ConditionDialog", "Filter starting piece", nullptr));
        groupBoxEndCity->setTitle(QCoreApplication::translate("ConditionDialog", "End city variants", nullptr));
        checkEndShip->setText(QCoreApplication::translate("ConditionDialog", "End ship", nullptr));
        groupBoxIgloo->setTitle(QCoreApplication::translate("ConditionDialog", "Igloo variants", nullptr));
        checkBasement->setText(QCoreApplication::translate("ConditionDialog", "Basement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConditionDialog: public Ui_ConditionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDITIONDIALOG_H
