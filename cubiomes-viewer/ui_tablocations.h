/********************************************************************************
** Form generated from reading UI file 'tablocations.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLOCATIONS_H
#define UI_TABLOCATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_TabLocations
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *labelStatus;
    QLineEdit *lineN;
    QLineEdit *lineZ;
    QLabel *label_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushExport;
    QPushButton *pushExpand;
    QPushButton *pushStart;
    StyledComboBox *comboSampling;
    QTreeWidget *treeWidget;
    QLineEdit *lineA;
    QLineEdit *lineX;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_7;
    StyledComboBox *comboSeedSource;

    void setupUi(QWidget *TabLocations)
    {
        if (TabLocations->objectName().isEmpty())
            TabLocations->setObjectName(QString::fromUtf8("TabLocations"));
        gridLayout = new QGridLayout(TabLocations);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(TabLocations);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        labelStatus = new QLabel(TabLocations);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        labelStatus->setFont(font);

        gridLayout->addWidget(labelStatus, 10, 0, 1, 5);

        lineN = new QLineEdit(TabLocations);
        lineN->setObjectName(QString::fromUtf8("lineN"));

        gridLayout->addWidget(lineN, 3, 1, 1, 4);

        lineZ = new QLineEdit(TabLocations);
        lineZ->setObjectName(QString::fromUtf8("lineZ"));

        gridLayout->addWidget(lineZ, 4, 4, 1, 1);

        label_5 = new QLabel(TabLocations);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        label_2 = new QLabel(TabLocations);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushExport = new QPushButton(TabLocations);
        pushExport->setObjectName(QString::fromUtf8("pushExport"));
        pushExport->setEnabled(false);

        horizontalLayout->addWidget(pushExport);

        pushExpand = new QPushButton(TabLocations);
        pushExpand->setObjectName(QString::fromUtf8("pushExpand"));

        horizontalLayout->addWidget(pushExpand);

        pushStart = new QPushButton(TabLocations);
        pushStart->setObjectName(QString::fromUtf8("pushStart"));

        horizontalLayout->addWidget(pushStart);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 5);

        comboSampling = new StyledComboBox(TabLocations);
        comboSampling->setObjectName(QString::fromUtf8("comboSampling"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboSampling->sizePolicy().hasHeightForWidth());
        comboSampling->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboSampling, 1, 1, 1, 4);

        treeWidget = new QTreeWidget(TabLocations);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setFont(3, font);
        __qtreewidgetitem->setFont(2, font);
        __qtreewidgetitem->setFont(1, font);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setFont(font);
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget->setIndentation(12);
        treeWidget->setAnimated(true);
        treeWidget->setExpandsOnDoubleClick(false);
        treeWidget->header()->setDefaultSectionSize(100);

        gridLayout->addWidget(treeWidget, 8, 0, 1, 5);

        lineA = new QLineEdit(TabLocations);
        lineA->setObjectName(QString::fromUtf8("lineA"));

        gridLayout->addWidget(lineA, 2, 1, 1, 4);

        lineX = new QLineEdit(TabLocations);
        lineX->setObjectName(QString::fromUtf8("lineX"));

        gridLayout->addWidget(lineX, 4, 2, 1, 1);

        label_6 = new QLabel(TabLocations);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 3, 1, 1);

        label_4 = new QLabel(TabLocations);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label = new QLabel(TabLocations);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_7 = new QLabel(TabLocations);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        comboSeedSource = new StyledComboBox(TabLocations);
        comboSeedSource->addItem(QString());
        comboSeedSource->addItem(QString());
        comboSeedSource->setObjectName(QString::fromUtf8("comboSeedSource"));

        gridLayout->addWidget(comboSeedSource, 0, 1, 1, 4);


        retranslateUi(TabLocations);

        QMetaObject::connectSlotsByName(TabLocations);
    } // setupUi

    void retranslateUi(QWidget *TabLocations)
    {
        TabLocations->setWindowTitle(QCoreApplication::translate("TabLocations", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("TabLocations", "Number of samples:", nullptr));
        labelStatus->setText(QCoreApplication::translate("TabLocations", "Idle", nullptr));
        lineN->setText(QCoreApplication::translate("TabLocations", "1", nullptr));
        label_5->setText(QCoreApplication::translate("TabLocations", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("TabLocations", "Sampling strategy:", nullptr));
        pushExport->setText(QCoreApplication::translate("TabLocations", "Export...", nullptr));
        pushExpand->setText(QCoreApplication::translate("TabLocations", "Expand all", nullptr));
        pushStart->setText(QCoreApplication::translate("TabLocations", "Analyze", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("TabLocations", "distance", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("TabLocations", "z", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("TabLocations", "x", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TabLocations", "seed/condition", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TabLocations", "id", nullptr));
        lineA->setText(QCoreApplication::translate("TabLocations", "512", nullptr));
        label_6->setText(QCoreApplication::translate("TabLocations", "Z:", nullptr));
        label_4->setText(QCoreApplication::translate("TabLocations", "Centered on:", nullptr));
        label->setText(QCoreApplication::translate("TabLocations", "Spread (\316\261):", nullptr));
        label_7->setText(QCoreApplication::translate("TabLocations", "Seed(s):", nullptr));
        comboSeedSource->setItemText(0, QCoreApplication::translate("TabLocations", "Current seed", nullptr));
        comboSeedSource->setItemText(1, QCoreApplication::translate("TabLocations", "From matching seeds list", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TabLocations: public Ui_TabLocations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLOCATIONS_H
