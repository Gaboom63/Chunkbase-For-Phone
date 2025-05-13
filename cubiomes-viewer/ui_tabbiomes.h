/********************************************************************************
** Form generated from reading UI file 'tabbiomes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABBIOMES_H
#define UI_TABBIOMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/conditiondialog.h"
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_TabBiomes
{
public:
    QGridLayout *gridLayout;
    QLabel *labelDescription;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushExport;
    QPushButton *pushStart;
    StyledComboBox *comboSeedSource;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridArea;
    QHBoxLayout *layoutArea;
    QLabel *labelX1;
    CoordEdit *lineX1;
    QLabel *labelZ1;
    CoordEdit *lineZ1;
    QLabel *label_2;
    QLabel *labelX2;
    CoordEdit *lineX2;
    QLabel *labelZ2;
    CoordEdit *lineZ2;
    QPushButton *buttonFromVisible;
    QTabWidget *tabWidget;
    QWidget *tabLocate;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineBiomeSize;
    QLabel *labelBiomeSize;
    QLabel *label_4;
    QTreeWidget *treeLocate;
    StyledComboBox *comboBiome;
    QLineEdit *lineTolerance;
    QWidget *tabStats;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkNether;
    QCheckBox *checkEnd;
    QCheckBox *checkOverworld;
    QGridLayout *gridLayout_3;
    QRadioButton *radioStochastic;
    QRadioButton *radioFullSample;
    StyledComboBox *comboScale;
    QLineEdit *lineSamples;
    QTableView *table;

    void setupUi(QWidget *TabBiomes)
    {
        if (TabBiomes->objectName().isEmpty())
            TabBiomes->setObjectName(QString::fromUtf8("TabBiomes"));
        gridLayout = new QGridLayout(TabBiomes);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelDescription = new QLabel(TabBiomes);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));

        gridLayout->addWidget(labelDescription, 0, 0, 1, 2);

        label = new QLabel(TabBiomes);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushExport = new QPushButton(TabBiomes);
        pushExport->setObjectName(QString::fromUtf8("pushExport"));
        pushExport->setEnabled(false);

        horizontalLayout->addWidget(pushExport);

        pushStart = new QPushButton(TabBiomes);
        pushStart->setObjectName(QString::fromUtf8("pushStart"));

        horizontalLayout->addWidget(pushStart);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);

        comboSeedSource = new StyledComboBox(TabBiomes);
        comboSeedSource->addItem(QString());
        comboSeedSource->addItem(QString());
        comboSeedSource->setObjectName(QString::fromUtf8("comboSeedSource"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSeedSource->sizePolicy().hasHeightForWidth());
        comboSeedSource->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSeedSource, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 5, 0, 1, 2);

        gridArea = new QGridLayout();
        gridArea->setObjectName(QString::fromUtf8("gridArea"));
        layoutArea = new QHBoxLayout();
        layoutArea->setObjectName(QString::fromUtf8("layoutArea"));
        labelX1 = new QLabel(TabBiomes);
        labelX1->setObjectName(QString::fromUtf8("labelX1"));

        layoutArea->addWidget(labelX1);

        lineX1 = new CoordEdit(TabBiomes);
        lineX1->setObjectName(QString::fromUtf8("lineX1"));

        layoutArea->addWidget(lineX1);

        labelZ1 = new QLabel(TabBiomes);
        labelZ1->setObjectName(QString::fromUtf8("labelZ1"));

        layoutArea->addWidget(labelZ1);

        lineZ1 = new CoordEdit(TabBiomes);
        lineZ1->setObjectName(QString::fromUtf8("lineZ1"));

        layoutArea->addWidget(lineZ1);

        label_2 = new QLabel(TabBiomes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        layoutArea->addWidget(label_2);

        labelX2 = new QLabel(TabBiomes);
        labelX2->setObjectName(QString::fromUtf8("labelX2"));

        layoutArea->addWidget(labelX2);

        lineX2 = new CoordEdit(TabBiomes);
        lineX2->setObjectName(QString::fromUtf8("lineX2"));

        layoutArea->addWidget(lineX2);

        labelZ2 = new QLabel(TabBiomes);
        labelZ2->setObjectName(QString::fromUtf8("labelZ2"));

        layoutArea->addWidget(labelZ2);

        lineZ2 = new CoordEdit(TabBiomes);
        lineZ2->setObjectName(QString::fromUtf8("lineZ2"));

        layoutArea->addWidget(lineZ2);


        gridArea->addLayout(layoutArea, 0, 0, 1, 1);

        buttonFromVisible = new QPushButton(TabBiomes);
        buttonFromVisible->setObjectName(QString::fromUtf8("buttonFromVisible"));

        gridArea->addWidget(buttonFromVisible, 0, 1, 1, 1);


        gridLayout->addLayout(gridArea, 3, 0, 1, 2);

        tabWidget = new QTabWidget(TabBiomes);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabLocate = new QWidget();
        tabLocate->setObjectName(QString::fromUtf8("tabLocate"));
        gridLayout_5 = new QGridLayout(tabLocate);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_6 = new QLabel(tabLocate);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(tabLocate);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 1, 0, 1, 1);

        lineBiomeSize = new QLineEdit(tabLocate);
        lineBiomeSize->setObjectName(QString::fromUtf8("lineBiomeSize"));

        gridLayout_5->addWidget(lineBiomeSize, 1, 1, 1, 1);

        labelBiomeSize = new QLabel(tabLocate);
        labelBiomeSize->setObjectName(QString::fromUtf8("labelBiomeSize"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBiomeSize->sizePolicy().hasHeightForWidth());
        labelBiomeSize->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(labelBiomeSize, 1, 2, 1, 1);

        label_4 = new QLabel(tabLocate);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 2, 0, 1, 1);

        treeLocate = new QTreeWidget(tabLocate);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(3, font);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setFont(1, font);
        __qtreewidgetitem->setFont(0, font);
        treeLocate->setHeaderItem(__qtreewidgetitem);
        treeLocate->setObjectName(QString::fromUtf8("treeLocate"));
        treeLocate->setFont(font);
        treeLocate->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeLocate->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeLocate->setSortingEnabled(true);
        treeLocate->setAnimated(true);

        gridLayout_5->addWidget(treeLocate, 3, 0, 1, 3);

        comboBiome = new StyledComboBox(tabLocate);
        comboBiome->setObjectName(QString::fromUtf8("comboBiome"));
        comboBiome->setEditable(true);
        comboBiome->setMaxVisibleItems(20);

        gridLayout_5->addWidget(comboBiome, 0, 1, 1, 2);

        lineTolerance = new QLineEdit(tabLocate);
        lineTolerance->setObjectName(QString::fromUtf8("lineTolerance"));

        gridLayout_5->addWidget(lineTolerance, 2, 1, 1, 1);

        tabWidget->addTab(tabLocate, QString());
        tabStats = new QWidget();
        tabStats->setObjectName(QString::fromUtf8("tabStats"));
        gridLayout_2 = new QGridLayout(tabStats);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkNether = new QCheckBox(tabStats);
        checkNether->setObjectName(QString::fromUtf8("checkNether"));

        gridLayout_4->addWidget(checkNether, 0, 1, 1, 1);

        checkEnd = new QCheckBox(tabStats);
        checkEnd->setObjectName(QString::fromUtf8("checkEnd"));

        gridLayout_4->addWidget(checkEnd, 0, 2, 1, 1);

        checkOverworld = new QCheckBox(tabStats);
        checkOverworld->setObjectName(QString::fromUtf8("checkOverworld"));
        checkOverworld->setChecked(true);

        gridLayout_4->addWidget(checkOverworld, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioStochastic = new QRadioButton(tabStats);
        radioStochastic->setObjectName(QString::fromUtf8("radioStochastic"));

        gridLayout_3->addWidget(radioStochastic, 1, 0, 1, 1);

        radioFullSample = new QRadioButton(tabStats);
        radioFullSample->setObjectName(QString::fromUtf8("radioFullSample"));
        radioFullSample->setChecked(true);

        gridLayout_3->addWidget(radioFullSample, 0, 0, 1, 1);

        comboScale = new StyledComboBox(tabStats);
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->addItem(QString());
        comboScale->setObjectName(QString::fromUtf8("comboScale"));

        gridLayout_3->addWidget(comboScale, 0, 1, 1, 1);

        lineSamples = new QLineEdit(tabStats);
        lineSamples->setObjectName(QString::fromUtf8("lineSamples"));

        gridLayout_3->addWidget(lineSamples, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        table = new QTableView(tabStats);
        table->setObjectName(QString::fromUtf8("table"));
        table->setFont(font);
        table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        table->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_2->addWidget(table, 2, 0, 1, 1);

        tabWidget->addTab(tabStats, QString());

        gridLayout->addWidget(tabWidget, 4, 0, 1, 2);


        retranslateUi(TabBiomes);

        tabWidget->setCurrentIndex(0);
        comboScale->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TabBiomes);
    } // setupUi

    void retranslateUi(QWidget *TabBiomes)
    {
        TabBiomes->setWindowTitle(QCoreApplication::translate("TabBiomes", "Form", nullptr));
        labelDescription->setText(QCoreApplication::translate("TabBiomes", "Analyze the biomes inside an area.", nullptr));
        label->setText(QCoreApplication::translate("TabBiomes", "Seed(s):", nullptr));
        pushExport->setText(QCoreApplication::translate("TabBiomes", "Export...", nullptr));
        pushStart->setText(QCoreApplication::translate("TabBiomes", "Analyze", nullptr));
        comboSeedSource->setItemText(0, QCoreApplication::translate("TabBiomes", "Current seed", nullptr));
        comboSeedSource->setItemText(1, QCoreApplication::translate("TabBiomes", "From matching seeds list", nullptr));

#if QT_CONFIG(tooltip)
        labelX1->setToolTip(QCoreApplication::translate("TabBiomes", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX1->setText(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>X<span style=\" vertical-align:sub;\">1</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineX1->setToolTip(QCoreApplication::translate("TabBiomes", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineX1->setText(QCoreApplication::translate("TabBiomes", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ1->setToolTip(QCoreApplication::translate("TabBiomes", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ1->setText(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>Z<span style=\" vertical-align:sub;\">1</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineZ1->setToolTip(QCoreApplication::translate("TabBiomes", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineZ1->setText(QCoreApplication::translate("TabBiomes", "0", nullptr));
        label_2->setText(QString());
#if QT_CONFIG(tooltip)
        labelX2->setToolTip(QCoreApplication::translate("TabBiomes", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX2->setText(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>X<span style=\" vertical-align:sub;\">2</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineX2->setToolTip(QCoreApplication::translate("TabBiomes", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineX2->setText(QCoreApplication::translate("TabBiomes", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ2->setToolTip(QCoreApplication::translate("TabBiomes", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ2->setText(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>Z<span style=\" vertical-align:sub;\">2</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineZ2->setToolTip(QCoreApplication::translate("TabBiomes", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineZ2->setText(QCoreApplication::translate("TabBiomes", "0", nullptr));
        buttonFromVisible->setText(QCoreApplication::translate("TabBiomes", "From visible", nullptr));
        label_6->setText(QCoreApplication::translate("TabBiomes", "Biome:", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>Biome area at scale 1:4, representing 4x4 blocks</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("TabBiomes", "Minimum area @ 1:4:", nullptr));
        lineBiomeSize->setText(QString());
        labelBiomeSize->setText(QCoreApplication::translate("TabBiomes", "(? sq. chunks)", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("TabBiomes", "<html><head/><body><p>Merge biomes that are separated by a margin that is less than this</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("TabBiomes", "Border tolerance:", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeLocate->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("TabBiomes", "z", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TabBiomes", "x", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TabBiomes", "area @ 1:4", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TabBiomes", "seed", nullptr));
        lineTolerance->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabLocate), QCoreApplication::translate("TabBiomes", "Locate", nullptr));
        checkNether->setText(QCoreApplication::translate("TabBiomes", "Nether", nullptr));
        checkEnd->setText(QCoreApplication::translate("TabBiomes", "End", nullptr));
        checkOverworld->setText(QCoreApplication::translate("TabBiomes", "Overworld", nullptr));
        radioStochastic->setText(QCoreApplication::translate("TabBiomes", "Random samples (scale 1:4):", nullptr));
        radioFullSample->setText(QCoreApplication::translate("TabBiomes", "Full area sampling with scale:", nullptr));
        comboScale->setItemText(0, QCoreApplication::translate("TabBiomes", "1:1", nullptr));
        comboScale->setItemText(1, QCoreApplication::translate("TabBiomes", "1:4", nullptr));
        comboScale->setItemText(2, QCoreApplication::translate("TabBiomes", "1:16", nullptr));
        comboScale->setItemText(3, QCoreApplication::translate("TabBiomes", "1:64", nullptr));
        comboScale->setItemText(4, QCoreApplication::translate("TabBiomes", "1:256", nullptr));

        lineSamples->setText(QCoreApplication::translate("TabBiomes", "10000", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStats), QCoreApplication::translate("TabBiomes", "Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabBiomes: public Ui_TabBiomes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABBIOMES_H
