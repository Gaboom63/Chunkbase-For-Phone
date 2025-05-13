/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionOpenShadow;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionSearch_seed_list;
    QAction *actionSearch_full_seed_space;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionPreferences;
    QAction *actionQuit;
    QAction *actionAddShadow;
    QAction *actionExtGen;
    QAction *actionExamples;
    QAction *actionPresetSave;
    QAction *actionPresetLoad;
    QAction *actionBiomeColors;
    QAction *actionBiomes;
    QAction *actionGoto;
    QAction *actionOceanTemp;
    QAction *actionRiver;
    QAction *actionExportImg;
    QAction *actionToolbarConfig;
    QAction *actionParaTemperature;
    QAction *actionParaHumidity;
    QAction *actionParaContinentalness;
    QAction *actionParaErosion;
    QAction *actionParaWeirdness;
    QAction *actionParaDepth;
    QAction *actionStructures;
    QAction *actionScreenshot;
    QAction *actionDock;
    QAction *actionHeight;
    QAction *actionLayerDisplay;
    QAction *actionNoOceans;
    QAction *actionBetaTemperature;
    QAction *actionBetaHumidity;
    QAction *actionRedistribute;
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QSplitter *splitterMap;
    QFrame *controlFrame;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridMCSeed;
    QCheckBox *checkLarge;
    StyledComboBox *comboBoxMC;
    StyledComboBox *comboY;
    QLabel *labelMC;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *seedEdit;
    QLabel *labelSeedType;
    QLabel *labelY;
    QLabel *labelMono;
    QLabel *labelSeed;
    QTabWidget *tabContainer;
    QWidget *tabSearch;
    QGridLayout *gridLayout_3;
    QSplitter *splitterSearch;
    Collapsible *collapseConstraints;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabContainerSearch;
    QWidget *tabSeeds;
    QGridLayout *gridLayout_2;
    QSplitter *splitterSeeds;
    Collapsible *collapseGen48;
    Collapsible *collapseControl;
    QFrame *frameMap;
    QGridLayout *gridLayout_4;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuMap;
    QMenu *menuHistory;
    QMenu *menuHelp;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuLayer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpenShadow = new QAction(MainWindow);
        actionOpenShadow->setObjectName(QString::fromUtf8("actionOpenShadow"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSearch_seed_list = new QAction(MainWindow);
        actionSearch_seed_list->setObjectName(QString::fromUtf8("actionSearch_seed_list"));
        actionSearch_full_seed_space = new QAction(MainWindow);
        actionSearch_full_seed_space->setObjectName(QString::fromUtf8("actionSearch_full_seed_space"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAddShadow = new QAction(MainWindow);
        actionAddShadow->setObjectName(QString::fromUtf8("actionAddShadow"));
        actionExtGen = new QAction(MainWindow);
        actionExtGen->setObjectName(QString::fromUtf8("actionExtGen"));
        actionExamples = new QAction(MainWindow);
        actionExamples->setObjectName(QString::fromUtf8("actionExamples"));
        actionPresetSave = new QAction(MainWindow);
        actionPresetSave->setObjectName(QString::fromUtf8("actionPresetSave"));
        actionPresetLoad = new QAction(MainWindow);
        actionPresetLoad->setObjectName(QString::fromUtf8("actionPresetLoad"));
        actionBiomeColors = new QAction(MainWindow);
        actionBiomeColors->setObjectName(QString::fromUtf8("actionBiomeColors"));
        actionBiomes = new QAction(MainWindow);
        actionBiomes->setObjectName(QString::fromUtf8("actionBiomes"));
        actionBiomes->setCheckable(true);
        actionBiomes->setChecked(true);
        actionGoto = new QAction(MainWindow);
        actionGoto->setObjectName(QString::fromUtf8("actionGoto"));
        actionOceanTemp = new QAction(MainWindow);
        actionOceanTemp->setObjectName(QString::fromUtf8("actionOceanTemp"));
        actionOceanTemp->setCheckable(true);
        actionRiver = new QAction(MainWindow);
        actionRiver->setObjectName(QString::fromUtf8("actionRiver"));
        actionRiver->setCheckable(true);
        actionExportImg = new QAction(MainWindow);
        actionExportImg->setObjectName(QString::fromUtf8("actionExportImg"));
        actionToolbarConfig = new QAction(MainWindow);
        actionToolbarConfig->setObjectName(QString::fromUtf8("actionToolbarConfig"));
        actionParaTemperature = new QAction(MainWindow);
        actionParaTemperature->setObjectName(QString::fromUtf8("actionParaTemperature"));
        actionParaTemperature->setCheckable(true);
        actionParaHumidity = new QAction(MainWindow);
        actionParaHumidity->setObjectName(QString::fromUtf8("actionParaHumidity"));
        actionParaHumidity->setCheckable(true);
        actionParaContinentalness = new QAction(MainWindow);
        actionParaContinentalness->setObjectName(QString::fromUtf8("actionParaContinentalness"));
        actionParaContinentalness->setCheckable(true);
        actionParaErosion = new QAction(MainWindow);
        actionParaErosion->setObjectName(QString::fromUtf8("actionParaErosion"));
        actionParaErosion->setCheckable(true);
        actionParaWeirdness = new QAction(MainWindow);
        actionParaWeirdness->setObjectName(QString::fromUtf8("actionParaWeirdness"));
        actionParaWeirdness->setCheckable(true);
        actionParaDepth = new QAction(MainWindow);
        actionParaDepth->setObjectName(QString::fromUtf8("actionParaDepth"));
        actionParaDepth->setCheckable(true);
        actionStructures = new QAction(MainWindow);
        actionStructures->setObjectName(QString::fromUtf8("actionStructures"));
        actionStructures->setCheckable(true);
        actionScreenshot = new QAction(MainWindow);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        actionDock = new QAction(MainWindow);
        actionDock->setObjectName(QString::fromUtf8("actionDock"));
        actionHeight = new QAction(MainWindow);
        actionHeight->setObjectName(QString::fromUtf8("actionHeight"));
        actionHeight->setCheckable(true);
        actionLayerDisplay = new QAction(MainWindow);
        actionLayerDisplay->setObjectName(QString::fromUtf8("actionLayerDisplay"));
        actionNoOceans = new QAction(MainWindow);
        actionNoOceans->setObjectName(QString::fromUtf8("actionNoOceans"));
        actionNoOceans->setCheckable(true);
        actionBetaTemperature = new QAction(MainWindow);
        actionBetaTemperature->setObjectName(QString::fromUtf8("actionBetaTemperature"));
        actionBetaTemperature->setCheckable(true);
        actionBetaHumidity = new QAction(MainWindow);
        actionBetaHumidity->setObjectName(QString::fromUtf8("actionBetaHumidity"));
        actionBetaHumidity->setCheckable(true);
        actionRedistribute = new QAction(MainWindow);
        actionRedistribute->setObjectName(QString::fromUtf8("actionRedistribute"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        splitterMap = new QSplitter(centralWidget);
        splitterMap->setObjectName(QString::fromUtf8("splitterMap"));
        splitterMap->setOrientation(Qt::Horizontal);
        controlFrame = new QFrame(splitterMap);
        controlFrame->setObjectName(QString::fromUtf8("controlFrame"));
        verticalLayout_5 = new QVBoxLayout(controlFrame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridMCSeed = new QGridLayout();
        gridMCSeed->setSpacing(6);
        gridMCSeed->setObjectName(QString::fromUtf8("gridMCSeed"));
        gridMCSeed->setContentsMargins(9, 9, -1, -1);
        checkLarge = new QCheckBox(controlFrame);
        checkLarge->setObjectName(QString::fromUtf8("checkLarge"));

        gridMCSeed->addWidget(checkLarge, 1, 0, 1, 2);

        comboBoxMC = new StyledComboBox(controlFrame);
        comboBoxMC->setObjectName(QString::fromUtf8("comboBoxMC"));
        comboBoxMC->setMinimumContentsLength(8);
        comboBoxMC->setIconSize(QSize(0, 16));

        gridMCSeed->addWidget(comboBoxMC, 0, 1, 1, 1);

        comboY = new StyledComboBox(controlFrame);
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->addItem(QString());
        comboY->setObjectName(QString::fromUtf8("comboY"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboY->sizePolicy().hasHeightForWidth());
        comboY->setSizePolicy(sizePolicy);
        comboY->setEditable(true);
        comboY->setMaxVisibleItems(12);

        gridMCSeed->addWidget(comboY, 1, 7, 1, 1);

        labelMC = new QLabel(controlFrame);
        labelMC->setObjectName(QString::fromUtf8("labelMC"));

        gridMCSeed->addWidget(labelMC, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        seedEdit = new QLineEdit(controlFrame);
        seedEdit->setObjectName(QString::fromUtf8("seedEdit"));

        horizontalLayout_2->addWidget(seedEdit);

        labelSeedType = new QLabel(controlFrame);
        labelSeedType->setObjectName(QString::fromUtf8("labelSeedType"));

        horizontalLayout_2->addWidget(labelSeedType);


        gridMCSeed->addLayout(horizontalLayout_2, 0, 7, 1, 1);

        labelY = new QLabel(controlFrame);
        labelY->setObjectName(QString::fromUtf8("labelY"));
        labelY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridMCSeed->addWidget(labelY, 1, 3, 1, 1);

        labelMono = new QLabel(controlFrame);
        labelMono->setObjectName(QString::fromUtf8("labelMono"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        labelMono->setFont(font);

        gridMCSeed->addWidget(labelMono, 1, 2, 1, 1);

        labelSeed = new QLabel(controlFrame);
        labelSeed->setObjectName(QString::fromUtf8("labelSeed"));
        labelSeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridMCSeed->addWidget(labelSeed, 0, 2, 1, 2);


        verticalLayout_5->addLayout(gridMCSeed);

        tabContainer = new QTabWidget(controlFrame);
        tabContainer->setObjectName(QString::fromUtf8("tabContainer"));
        tabContainer->setStyleSheet(QString::fromUtf8("QToolButton {\n"
" 	background-color: transparent;\n"
"}"));
        tabSearch = new QWidget();
        tabSearch->setObjectName(QString::fromUtf8("tabSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabSearch->sizePolicy().hasHeightForWidth());
        tabSearch->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(tabSearch);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, -1, -1, -1);
        splitterSearch = new QSplitter(tabSearch);
        splitterSearch->setObjectName(QString::fromUtf8("splitterSearch"));
        splitterSearch->setOrientation(Qt::Vertical);
        collapseConstraints = new Collapsible(splitterSearch);
        collapseConstraints->setObjectName(QString::fromUtf8("collapseConstraints"));
        sizePolicy1.setHeightForWidth(collapseConstraints->sizePolicy().hasHeightForWidth());
        collapseConstraints->setSizePolicy(sizePolicy1);
        splitterSearch->addWidget(collapseConstraints);
        gridLayoutWidget = new QWidget(splitterSearch);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(18, 0, 0, 0);
        tabContainerSearch = new QTabWidget(gridLayoutWidget);
        tabContainerSearch->setObjectName(QString::fromUtf8("tabContainerSearch"));
        tabSeeds = new QWidget();
        tabSeeds->setObjectName(QString::fromUtf8("tabSeeds"));
        gridLayout_2 = new QGridLayout(tabSeeds);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, 0);
        splitterSeeds = new QSplitter(tabSeeds);
        splitterSeeds->setObjectName(QString::fromUtf8("splitterSeeds"));
        splitterSeeds->setOrientation(Qt::Vertical);
        collapseGen48 = new Collapsible(splitterSeeds);
        collapseGen48->setObjectName(QString::fromUtf8("collapseGen48"));
        sizePolicy1.setHeightForWidth(collapseGen48->sizePolicy().hasHeightForWidth());
        collapseGen48->setSizePolicy(sizePolicy1);
        splitterSeeds->addWidget(collapseGen48);
        collapseControl = new Collapsible(splitterSeeds);
        collapseControl->setObjectName(QString::fromUtf8("collapseControl"));
        sizePolicy1.setHeightForWidth(collapseControl->sizePolicy().hasHeightForWidth());
        collapseControl->setSizePolicy(sizePolicy1);
        splitterSeeds->addWidget(collapseControl);

        gridLayout_2->addWidget(splitterSeeds, 0, 0, 1, 1);

        tabContainerSearch->addTab(tabSeeds, QString());

        gridLayout->addWidget(tabContainerSearch, 0, 0, 1, 1);

        splitterSearch->addWidget(gridLayoutWidget);

        gridLayout_3->addWidget(splitterSearch, 0, 0, 1, 1);

        tabContainer->addTab(tabSearch, QString());

        verticalLayout_5->addWidget(tabContainer);

        splitterMap->addWidget(controlFrame);
        frameMap = new QFrame(splitterMap);
        frameMap->setObjectName(QString::fromUtf8("frameMap"));
        frameMap->setFrameShape(QFrame::StyledPanel);
        frameMap->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frameMap);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        splitterMap->addWidget(frameMap);

        gridLayout_6->addWidget(splitterMap, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setLayoutDirection(Qt::RightToLeft);
        toolBar->setAutoFillBackground(false);
        toolBar->setStyleSheet(QString::fromUtf8("\n"
"QToolBar {\n"
"	border-radius: 0px;\n"
"	padding: 0px;\n"
"	spacing: 0px;\n"
"}\n"
"\n"
"QToolButton {\n"
"	border-radius: 3px;\n"
"	padding: 1px;\n"
"	border: 0px solid;\n"
"	margin: 0px;\n"
"}\n"
"QToolButton:!checked {\n"
"}\n"
"QToolButton:checked {\n"
"	background-color: #8a9dc4;\n"
"}\n"
""));
        toolBar->setMovable(true);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setOrientation(Qt::Vertical);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::RightToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuMap = new QMenu(menuBar);
        menuMap->setObjectName(QString::fromUtf8("menuMap"));
        menuHistory = new QMenu(menuMap);
        menuHistory->setObjectName(QString::fromUtf8("menuHistory"));
        menuHistory->setEnabled(false);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuLayer = new QMenu(menuBar);
        menuLayer->setObjectName(QString::fromUtf8("menuLayer"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuMap->menuAction());
        menuBar->addAction(menuLayer->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMap->addAction(menuHistory->menuAction());
        menuMap->addAction(actionOpenShadow);
        menuMap->addSeparator();
        menuMap->addAction(actionDock);
        menuMap->addAction(actionGoto);
        menuMap->addSeparator();
        menuMap->addAction(actionScreenshot);
        menuMap->addAction(actionExportImg);
        menuMap->addSeparator();
        menuHistory->addSeparator();
        menuHelp->addAction(actionExamples);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionPresetLoad);
        menuFile->addSeparator();
        menuFile->addAction(actionSearch_seed_list);
        menuFile->addAction(actionSearch_full_seed_space);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAddShadow);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRedistribute);
        menuEdit->addSeparator();
        menuEdit->addAction(actionExtGen);
        menuEdit->addAction(actionBiomeColors);
        menuEdit->addAction(actionToolbarConfig);
        menuEdit->addAction(actionPreferences);
        menuLayer->addAction(actionLayerDisplay);
        menuLayer->addSeparator();
        menuLayer->addAction(actionBiomes);
        menuLayer->addSeparator();
        menuLayer->addAction(actionParaTemperature);
        menuLayer->addAction(actionParaHumidity);
        menuLayer->addAction(actionParaContinentalness);
        menuLayer->addAction(actionParaErosion);
        menuLayer->addAction(actionParaDepth);
        menuLayer->addAction(actionParaWeirdness);
        menuLayer->addSeparator();
        menuLayer->addAction(actionRiver);
        menuLayer->addAction(actionOceanTemp);
        menuLayer->addSeparator();
        menuLayer->addAction(actionNoOceans);
        menuLayer->addAction(actionBetaTemperature);
        menuLayer->addAction(actionBetaHumidity);
        menuLayer->addSeparator();
        menuLayer->addAction(actionHeight);
        menuLayer->addAction(actionStructures);
        menuLayer->addSeparator();

        retranslateUi(MainWindow);

        tabContainer->setCurrentIndex(0);
        tabContainerSearch->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cubiomes Viewer", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionOpenShadow->setText(QCoreApplication::translate("MainWindow", "Open shadow seed", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save session...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load session...", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSearch_seed_list->setText(QCoreApplication::translate("MainWindow", "Search seed list...", nullptr));
#if QT_CONFIG(tooltip)
        actionSearch_seed_list->setToolTip(QCoreApplication::translate("MainWindow", "Load seeds from file for search", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSearch_full_seed_space->setText(QCoreApplication::translate("MainWindow", "Search full seed space", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy seeds from list", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste seeds into list", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Edit preferences...", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionAddShadow->setText(QCoreApplication::translate("MainWindow", "Add shadow for all seeds", nullptr));
        actionExtGen->setText(QCoreApplication::translate("MainWindow", "Advanced world settings...", nullptr));
        actionExamples->setText(QCoreApplication::translate("MainWindow", "Example filters...", nullptr));
        actionPresetSave->setText(QCoreApplication::translate("MainWindow", "Save filter as preset...", nullptr));
        actionPresetLoad->setText(QCoreApplication::translate("MainWindow", "Load filter preset...", nullptr));
        actionBiomeColors->setText(QCoreApplication::translate("MainWindow", "Edit biome colors...", nullptr));
        actionBiomes->setText(QCoreApplication::translate("MainWindow", "Biome scales (default)", nullptr));
#if QT_CONFIG(shortcut)
        actionBiomes->setShortcut(QCoreApplication::translate("MainWindow", "Alt+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoto->setText(QCoreApplication::translate("MainWindow", "Go to...", nullptr));
#if QT_CONFIG(shortcut)
        actionGoto->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOceanTemp->setText(QCoreApplication::translate("MainWindow", "(1.13 - 1.17) O. Temp. 1:256", nullptr));
#if QT_CONFIG(shortcut)
        actionOceanTemp->setShortcut(QCoreApplication::translate("MainWindow", "Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRiver->setText(QCoreApplication::translate("MainWindow", "(1.13 - 1.17) River Mix 1:4", nullptr));
#if QT_CONFIG(shortcut)
        actionRiver->setShortcut(QCoreApplication::translate("MainWindow", "Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportImg->setText(QCoreApplication::translate("MainWindow", "Export biomes as image...", nullptr));
        actionToolbarConfig->setText(QCoreApplication::translate("MainWindow", "Edit map tools...", nullptr));
        actionParaTemperature->setText(QCoreApplication::translate("MainWindow", "(1.18+) Temperature", nullptr));
#if QT_CONFIG(shortcut)
        actionParaTemperature->setShortcut(QCoreApplication::translate("MainWindow", "Alt+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParaHumidity->setText(QCoreApplication::translate("MainWindow", "(1.18+) Humidity", nullptr));
#if QT_CONFIG(shortcut)
        actionParaHumidity->setShortcut(QCoreApplication::translate("MainWindow", "Alt+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParaContinentalness->setText(QCoreApplication::translate("MainWindow", "(1.18+) Continentalness", nullptr));
#if QT_CONFIG(shortcut)
        actionParaContinentalness->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParaErosion->setText(QCoreApplication::translate("MainWindow", "(1.18+) Erosion", nullptr));
#if QT_CONFIG(shortcut)
        actionParaErosion->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParaWeirdness->setText(QCoreApplication::translate("MainWindow", "(1.18+) Weirdness", nullptr));
#if QT_CONFIG(shortcut)
        actionParaWeirdness->setShortcut(QCoreApplication::translate("MainWindow", "Alt+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionParaDepth->setText(QCoreApplication::translate("MainWindow", "(1.18+) Depth", nullptr));
#if QT_CONFIG(shortcut)
        actionParaDepth->setShortcut(QCoreApplication::translate("MainWindow", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStructures->setText(QCoreApplication::translate("MainWindow", "Structure potential (48-bit)", nullptr));
#if QT_CONFIG(shortcut)
        actionStructures->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScreenshot->setText(QCoreApplication::translate("MainWindow", "Take screenshot", nullptr));
#if QT_CONFIG(shortcut)
        actionScreenshot->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDock->setText(QCoreApplication::translate("MainWindow", "Undock map", nullptr));
        actionHeight->setText(QCoreApplication::translate("MainWindow", "Approx. surface height", nullptr));
#if QT_CONFIG(shortcut)
        actionHeight->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLayerDisplay->setText(QCoreApplication::translate("MainWindow", "Display options...", nullptr));
        actionNoOceans->setText(QCoreApplication::translate("MainWindow", "(Beta 1.7) No beta oceans", nullptr));
        actionBetaTemperature->setText(QCoreApplication::translate("MainWindow", "(Beta 1.7) Temperature", nullptr));
        actionBetaHumidity->setText(QCoreApplication::translate("MainWindow", "(Beta 1.7) Humidity", nullptr));
        actionRedistribute->setText(QCoreApplication::translate("MainWindow", "Redistribute condition IDs", nullptr));
        checkLarge->setText(QCoreApplication::translate("MainWindow", "Large biomes", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxMC->setToolTip(QCoreApplication::translate("MainWindow", "Minecraft version", nullptr));
#endif // QT_CONFIG(tooltip)
        comboY->setItemText(0, QCoreApplication::translate("MainWindow", "256 (Surface)", nullptr));
        comboY->setItemText(1, QCoreApplication::translate("MainWindow", "128 (Nether Roof)", nullptr));
        comboY->setItemText(2, QCoreApplication::translate("MainWindow", "62 (Sea Level)", nullptr));
        comboY->setItemText(3, QCoreApplication::translate("MainWindow", "48", nullptr));
        comboY->setItemText(4, QCoreApplication::translate("MainWindow", "32", nullptr));
        comboY->setItemText(5, QCoreApplication::translate("MainWindow", "16", nullptr));
        comboY->setItemText(6, QCoreApplication::translate("MainWindow", "0", nullptr));
        comboY->setItemText(7, QCoreApplication::translate("MainWindow", "-16", nullptr));
        comboY->setItemText(8, QCoreApplication::translate("MainWindow", "-32", nullptr));
        comboY->setItemText(9, QCoreApplication::translate("MainWindow", "-48", nullptr));
        comboY->setItemText(10, QCoreApplication::translate("MainWindow", "-64 (Bedrock)", nullptr));

#if QT_CONFIG(tooltip)
        labelMC->setToolTip(QCoreApplication::translate("MainWindow", "Minecraft version", nullptr));
#endif // QT_CONFIG(tooltip)
        labelMC->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
#if QT_CONFIG(tooltip)
        seedEdit->setToolTip(QCoreApplication::translate("MainWindow", "Press enter to accept", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        labelSeedType->setToolTip(QCoreApplication::translate("MainWindow", "Seed can be an integer or text. Leave empty for a random seed", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSeedType->setText(QCoreApplication::translate("MainWindow", "random", nullptr));
#if QT_CONFIG(tooltip)
        labelY->setToolTip(QCoreApplication::translate("MainWindow", "Show map for this y-level", nullptr));
#endif // QT_CONFIG(tooltip)
        labelY->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
        labelMono->setText(QString());
#if QT_CONFIG(tooltip)
        labelSeed->setToolTip(QCoreApplication::translate("MainWindow", "Seed can be an integer or text. Leave empty for a random seed", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSeed->setText(QCoreApplication::translate("MainWindow", "seed:", nullptr));
        tabContainerSearch->setTabText(tabContainerSearch->indexOf(tabSeeds), QCoreApplication::translate("MainWindow", "Seeds", nullptr));
        tabContainer->setTabText(tabContainer->indexOf(tabSearch), QCoreApplication::translate("MainWindow", "Search", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "Map controls", nullptr));
        menuMap->setTitle(QCoreApplication::translate("MainWindow", "Map", nullptr));
        menuHistory->setTitle(QCoreApplication::translate("MainWindow", "Previous seeds", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuLayer->setTitle(QCoreApplication::translate("MainWindow", "Layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
