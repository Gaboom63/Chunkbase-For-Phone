/********************************************************************************
** Form generated from reading UI file 'tabstructures.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABSTRUCTURES_H
#define UI_TABSTRUCTURES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "src/conditiondialog.h"
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_TabStructures
{
public:
    QGridLayout *gridLayout;
    StyledComboBox *comboSeedSource;
    QLabel *label;
    QLabel *labelDescription;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushExport;
    QPushButton *pushStart;
    QTabWidget *tabWidget;
    QWidget *tabStructures;
    QGridLayout *gridLayout_2;
    QGridLayout *gridOptions;
    QRadioButton *radioMap;
    QRadioButton *radioAll;
    QCheckBox *checkCollect;
    QTreeWidget *treeStructs;
    QWidget *tabQuads;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeQuads;
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

    void setupUi(QWidget *TabStructures)
    {
        if (TabStructures->objectName().isEmpty())
            TabStructures->setObjectName(QString::fromUtf8("TabStructures"));
        gridLayout = new QGridLayout(TabStructures);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboSeedSource = new StyledComboBox(TabStructures);
        comboSeedSource->addItem(QString());
        comboSeedSource->addItem(QString());
        comboSeedSource->setObjectName(QString::fromUtf8("comboSeedSource"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSeedSource->sizePolicy().hasHeightForWidth());
        comboSeedSource->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSeedSource, 1, 1, 1, 1);

        label = new QLabel(TabStructures);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        labelDescription = new QLabel(TabStructures);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));

        gridLayout->addWidget(labelDescription, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushExport = new QPushButton(TabStructures);
        pushExport->setObjectName(QString::fromUtf8("pushExport"));
        pushExport->setEnabled(false);

        horizontalLayout->addWidget(pushExport);

        pushStart = new QPushButton(TabStructures);
        pushStart->setObjectName(QString::fromUtf8("pushStart"));

        horizontalLayout->addWidget(pushStart);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 2);

        tabWidget = new QTabWidget(TabStructures);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabStructures = new QWidget();
        tabStructures->setObjectName(QString::fromUtf8("tabStructures"));
        gridLayout_2 = new QGridLayout(tabStructures);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridOptions = new QGridLayout();
        gridOptions->setObjectName(QString::fromUtf8("gridOptions"));
        radioMap = new QRadioButton(tabStructures);
        radioMap->setObjectName(QString::fromUtf8("radioMap"));

        gridOptions->addWidget(radioMap, 0, 0, 1, 1);

        radioAll = new QRadioButton(tabStructures);
        radioAll->setObjectName(QString::fromUtf8("radioAll"));

        gridOptions->addWidget(radioAll, 0, 1, 1, 1);

        checkCollect = new QCheckBox(tabStructures);
        checkCollect->setObjectName(QString::fromUtf8("checkCollect"));
        checkCollect->setChecked(true);

        gridOptions->addWidget(checkCollect, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridOptions, 0, 0, 1, 1);

        treeStructs = new QTreeWidget(tabStructures);
        treeStructs->setObjectName(QString::fromUtf8("treeStructs"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        treeStructs->setFont(font);
        treeStructs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeStructs->setSortingEnabled(true);
        treeStructs->setAnimated(true);
        treeStructs->setExpandsOnDoubleClick(false);

        gridLayout_2->addWidget(treeStructs, 1, 0, 1, 1);

        tabWidget->addTab(tabStructures, QString());
        tabQuads = new QWidget();
        tabQuads->setObjectName(QString::fromUtf8("tabQuads"));
        gridLayout_3 = new QGridLayout(tabQuads);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeQuads = new QTreeWidget(tabQuads);
        treeQuads->setObjectName(QString::fromUtf8("treeQuads"));
        treeQuads->setFont(font);
        treeQuads->setContextMenuPolicy(Qt::CustomContextMenu);
        treeQuads->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeQuads->setSelectionMode(QAbstractItemView::SingleSelection);
        treeQuads->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeQuads->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeQuads->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeQuads->setSortingEnabled(true);
        treeQuads->setAnimated(true);

        gridLayout_3->addWidget(treeQuads, 0, 0, 1, 1);

        tabWidget->addTab(tabQuads, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 2);

        gridArea = new QGridLayout();
        gridArea->setObjectName(QString::fromUtf8("gridArea"));
        layoutArea = new QHBoxLayout();
        layoutArea->setObjectName(QString::fromUtf8("layoutArea"));
        labelX1 = new QLabel(TabStructures);
        labelX1->setObjectName(QString::fromUtf8("labelX1"));

        layoutArea->addWidget(labelX1);

        lineX1 = new CoordEdit(TabStructures);
        lineX1->setObjectName(QString::fromUtf8("lineX1"));

        layoutArea->addWidget(lineX1);

        labelZ1 = new QLabel(TabStructures);
        labelZ1->setObjectName(QString::fromUtf8("labelZ1"));

        layoutArea->addWidget(labelZ1);

        lineZ1 = new CoordEdit(TabStructures);
        lineZ1->setObjectName(QString::fromUtf8("lineZ1"));

        layoutArea->addWidget(lineZ1);

        label_2 = new QLabel(TabStructures);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        layoutArea->addWidget(label_2);

        labelX2 = new QLabel(TabStructures);
        labelX2->setObjectName(QString::fromUtf8("labelX2"));

        layoutArea->addWidget(labelX2);

        lineX2 = new CoordEdit(TabStructures);
        lineX2->setObjectName(QString::fromUtf8("lineX2"));

        layoutArea->addWidget(lineX2);

        labelZ2 = new QLabel(TabStructures);
        labelZ2->setObjectName(QString::fromUtf8("labelZ2"));

        layoutArea->addWidget(labelZ2);

        lineZ2 = new CoordEdit(TabStructures);
        lineZ2->setObjectName(QString::fromUtf8("lineZ2"));

        layoutArea->addWidget(lineZ2);


        gridArea->addLayout(layoutArea, 0, 0, 1, 1);

        buttonFromVisible = new QPushButton(TabStructures);
        buttonFromVisible->setObjectName(QString::fromUtf8("buttonFromVisible"));

        gridArea->addWidget(buttonFromVisible, 0, 1, 1, 1);


        gridLayout->addLayout(gridArea, 2, 0, 1, 2);


        retranslateUi(TabStructures);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabStructures);
    } // setupUi

    void retranslateUi(QWidget *TabStructures)
    {
        TabStructures->setWindowTitle(QCoreApplication::translate("TabStructures", "Form", nullptr));
        comboSeedSource->setItemText(0, QCoreApplication::translate("TabStructures", "Current seed", nullptr));
        comboSeedSource->setItemText(1, QCoreApplication::translate("TabStructures", "From matching seeds list", nullptr));

        label->setText(QCoreApplication::translate("TabStructures", "Seed(s):", nullptr));
        labelDescription->setText(QCoreApplication::translate("TabStructures", "Analyze the structures within an area.", nullptr));
        pushExport->setText(QCoreApplication::translate("TabStructures", "Export...", nullptr));
        pushStart->setText(QCoreApplication::translate("TabStructures", "Analyze", nullptr));
        radioMap->setText(QCoreApplication::translate("TabStructures", "Active map selections", nullptr));
        radioAll->setText(QCoreApplication::translate("TabStructures", "All structures", nullptr));
        checkCollect->setText(QCoreApplication::translate("TabStructures", "Collect all instances", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeStructs->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("TabStructures", "details", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("TabStructures", "z", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("TabStructures", "x", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TabStructures", "count", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TabStructures", "structure", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TabStructures", "seed", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStructures), QCoreApplication::translate("TabStructures", "Structures", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeQuads->headerItem();
        ___qtreewidgetitem1->setText(6, QCoreApplication::translate("TabStructures", "spawn area", nullptr));
        ___qtreewidgetitem1->setText(5, QCoreApplication::translate("TabStructures", "radius", nullptr));
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("TabStructures", "z", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("TabStructures", "x", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("TabStructures", "distance", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("TabStructures", "type", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("TabStructures", "seed", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQuads), QCoreApplication::translate("TabStructures", "Quad-Structures", nullptr));
#if QT_CONFIG(tooltip)
        labelX1->setToolTip(QCoreApplication::translate("TabStructures", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX1->setText(QCoreApplication::translate("TabStructures", "<html><head/><body><p>X<span style=\" vertical-align:sub;\">1</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineX1->setToolTip(QCoreApplication::translate("TabStructures", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineX1->setText(QCoreApplication::translate("TabStructures", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ1->setToolTip(QCoreApplication::translate("TabStructures", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ1->setText(QCoreApplication::translate("TabStructures", "<html><head/><body><p>Z<span style=\" vertical-align:sub;\">1</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineZ1->setToolTip(QCoreApplication::translate("TabStructures", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineZ1->setText(QCoreApplication::translate("TabStructures", "0", nullptr));
        label_2->setText(QString());
#if QT_CONFIG(tooltip)
        labelX2->setToolTip(QCoreApplication::translate("TabStructures", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX2->setText(QCoreApplication::translate("TabStructures", "<html><head/><body><p>X<span style=\" vertical-align:sub;\">2</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineX2->setToolTip(QCoreApplication::translate("TabStructures", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineX2->setText(QCoreApplication::translate("TabStructures", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ2->setToolTip(QCoreApplication::translate("TabStructures", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ2->setText(QCoreApplication::translate("TabStructures", "<html><head/><body><p>Z<span style=\" vertical-align:sub;\">2</span>:</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineZ2->setToolTip(QCoreApplication::translate("TabStructures", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineZ2->setText(QCoreApplication::translate("TabStructures", "0", nullptr));
        buttonFromVisible->setText(QCoreApplication::translate("TabStructures", "From visible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabStructures: public Ui_TabStructures {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABSTRUCTURES_H
