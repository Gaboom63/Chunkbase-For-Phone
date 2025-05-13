/********************************************************************************
** Form generated from reading UI file 'formgen48.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMGEN48_H
#define UI_FORMGEN48_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "src/conditiondialog.h"
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_FormGen48
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabAuto;
    QGridLayout *gridLayout_4;
    QLabel *labelAutoDesc;
    QLabel *labelAuto;
    QWidget *tabQuadF;
    QGridLayout *gridLayout_5;
    QLabel *labelSalt;
    QLineEdit *lineSalt;
    QLabel *labelLow20;
    StyledComboBox *comboLow20;
    QWidget *tabQuadM;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelQM;
    QWidget *tabList;
    QGridLayout *gridLayout_7;
    QLabel *labelPath;
    QLineEdit *lineList48;
    QPushButton *buttonBrowse;
    QLabel *labelListSalt;
    QLineEdit *lineListSalt;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioAuto;
    QRadioButton *radioManual;
    QLabel *labelTranspose;
    QHBoxLayout *horizontalLayout;
    QLabel *labelX1;
    CoordEdit *lineEditX1;
    QLabel *labelZ1;
    CoordEdit *lineEditZ1;
    QLabel *label;
    QLabel *labelX2;
    CoordEdit *lineEditX2;
    QLabel *labelZ2;
    CoordEdit *lineEditZ2;
    QLabel *labelSpace;
    QLabel *labelCount;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormGen48)
    {
        if (FormGen48->objectName().isEmpty())
            FormGen48->setObjectName(QString::fromUtf8("FormGen48"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormGen48->sizePolicy().hasHeightForWidth());
        FormGen48->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(FormGen48);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(FormGen48);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabAuto = new QWidget();
        tabAuto->setObjectName(QString::fromUtf8("tabAuto"));
        gridLayout_4 = new QGridLayout(tabAuto);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        labelAutoDesc = new QLabel(tabAuto);
        labelAutoDesc->setObjectName(QString::fromUtf8("labelAutoDesc"));

        gridLayout_4->addWidget(labelAutoDesc, 0, 0, 1, 1);

        labelAuto = new QLabel(tabAuto);
        labelAuto->setObjectName(QString::fromUtf8("labelAuto"));

        gridLayout_4->addWidget(labelAuto, 1, 0, 1, 1);

        tabWidget->addTab(tabAuto, QString());
        tabQuadF = new QWidget();
        tabQuadF->setObjectName(QString::fromUtf8("tabQuadF"));
        gridLayout_5 = new QGridLayout(tabQuadF);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        labelSalt = new QLabel(tabQuadF);
        labelSalt->setObjectName(QString::fromUtf8("labelSalt"));

        gridLayout_5->addWidget(labelSalt, 1, 0, 1, 1);

        lineSalt = new QLineEdit(tabQuadF);
        lineSalt->setObjectName(QString::fromUtf8("lineSalt"));
        lineSalt->setEnabled(false);

        gridLayout_5->addWidget(lineSalt, 1, 1, 1, 1);

        labelLow20 = new QLabel(tabQuadF);
        labelLow20->setObjectName(QString::fromUtf8("labelLow20"));

        gridLayout_5->addWidget(labelLow20, 0, 0, 1, 1);

        comboLow20 = new StyledComboBox(tabQuadF);
        comboLow20->addItem(QString());
        comboLow20->addItem(QString());
        comboLow20->addItem(QString());
        comboLow20->addItem(QString());
        comboLow20->addItem(QString());
        comboLow20->setObjectName(QString::fromUtf8("comboLow20"));

        gridLayout_5->addWidget(comboLow20, 0, 1, 1, 1);

        tabWidget->addTab(tabQuadF, QString());
        tabQuadM = new QWidget();
        tabQuadM->setObjectName(QString::fromUtf8("tabQuadM"));
        horizontalLayout_2 = new QHBoxLayout(tabQuadM);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelQM = new QLabel(tabQuadM);
        labelQM->setObjectName(QString::fromUtf8("labelQM"));

        horizontalLayout_2->addWidget(labelQM);

        tabWidget->addTab(tabQuadM, QString());
        tabList = new QWidget();
        tabList->setObjectName(QString::fromUtf8("tabList"));
        gridLayout_7 = new QGridLayout(tabList);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(4, 4, 4, 4);
        labelPath = new QLabel(tabList);
        labelPath->setObjectName(QString::fromUtf8("labelPath"));

        gridLayout_7->addWidget(labelPath, 0, 0, 1, 1);

        lineList48 = new QLineEdit(tabList);
        lineList48->setObjectName(QString::fromUtf8("lineList48"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        lineList48->setFont(font);
        lineList48->setReadOnly(true);

        gridLayout_7->addWidget(lineList48, 0, 1, 1, 1);

        buttonBrowse = new QPushButton(tabList);
        buttonBrowse->setObjectName(QString::fromUtf8("buttonBrowse"));

        gridLayout_7->addWidget(buttonBrowse, 0, 2, 1, 1);

        labelListSalt = new QLabel(tabList);
        labelListSalt->setObjectName(QString::fromUtf8("labelListSalt"));

        gridLayout_7->addWidget(labelListSalt, 1, 0, 1, 1);

        lineListSalt = new QLineEdit(tabList);
        lineListSalt->setObjectName(QString::fromUtf8("lineListSalt"));
        lineListSalt->setEnabled(true);

        gridLayout_7->addWidget(lineListSalt, 1, 1, 1, 2);

        tabWidget->addTab(tabList, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 2);

        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        radioAuto = new QRadioButton(frame);
        radioAuto->setObjectName(QString::fromUtf8("radioAuto"));

        gridLayout_3->addWidget(radioAuto, 0, 2, 1, 1);

        radioManual = new QRadioButton(frame);
        radioManual->setObjectName(QString::fromUtf8("radioManual"));

        gridLayout_3->addWidget(radioManual, 0, 3, 1, 1);

        labelTranspose = new QLabel(frame);
        labelTranspose->setObjectName(QString::fromUtf8("labelTranspose"));

        gridLayout_3->addWidget(labelTranspose, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelX1 = new QLabel(widget);
        labelX1->setObjectName(QString::fromUtf8("labelX1"));

        horizontalLayout->addWidget(labelX1);

        lineEditX1 = new CoordEdit(widget);
        lineEditX1->setObjectName(QString::fromUtf8("lineEditX1"));

        horizontalLayout->addWidget(lineEditX1);

        labelZ1 = new QLabel(widget);
        labelZ1->setObjectName(QString::fromUtf8("labelZ1"));

        horizontalLayout->addWidget(labelZ1);

        lineEditZ1 = new CoordEdit(widget);
        lineEditZ1->setObjectName(QString::fromUtf8("lineEditZ1"));

        horizontalLayout->addWidget(lineEditZ1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labelX2 = new QLabel(widget);
        labelX2->setObjectName(QString::fromUtf8("labelX2"));

        horizontalLayout->addWidget(labelX2);

        lineEditX2 = new CoordEdit(widget);
        lineEditX2->setObjectName(QString::fromUtf8("lineEditX2"));

        horizontalLayout->addWidget(lineEditX2);

        labelZ2 = new QLabel(widget);
        labelZ2->setObjectName(QString::fromUtf8("labelZ2"));

        horizontalLayout->addWidget(labelZ2);

        lineEditZ2 = new CoordEdit(widget);
        lineEditZ2->setObjectName(QString::fromUtf8("lineEditZ2"));

        horizontalLayout->addWidget(lineEditZ2);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);

        labelSpace = new QLabel(widget);
        labelSpace->setObjectName(QString::fromUtf8("labelSpace"));

        gridLayout_2->addWidget(labelSpace, 3, 0, 1, 1);

        labelCount = new QLabel(widget);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));
        labelCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelCount, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(FormGen48);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormGen48);
    } // setupUi

    void retranslateUi(QWidget *FormGen48)
    {
        FormGen48->setWindowTitle(QCoreApplication::translate("FormGen48", "Form", nullptr));
        labelAutoDesc->setText(QCoreApplication::translate("FormGen48", "Automatically select suitable options based on conditions.", nullptr));
        labelAuto->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabAuto), QCoreApplication::translate("FormGen48", "Auto/None", nullptr));
#if QT_CONFIG(tooltip)
        labelSalt->setToolTip(QCoreApplication::translate("FormGen48", "Value (such as a structure salt) added to the 48-bit seeds", nullptr));
#endif // QT_CONFIG(tooltip)
        labelSalt->setText(QCoreApplication::translate("FormGen48", "Add structure salt:", nullptr));
        lineSalt->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelLow20->setToolTip(QCoreApplication::translate("FormGen48", "Selects a set of values for the lower 20-bits of the seed, corresponding to quad-feature constellations\n"
"Applies only to feature-structures of region-size = 32 and chunk-gap = 8, in particular swamp-huts", nullptr));
#endif // QT_CONFIG(tooltip)
        labelLow20->setText(QCoreApplication::translate("FormGen48", "Restrict lower bits:", nullptr));
        comboLow20->setItemText(0, QCoreApplication::translate("FormGen48", "Quad-hut (ideal)", nullptr));
        comboLow20->setItemText(1, QCoreApplication::translate("FormGen48", "Quad-hut (classic)", nullptr));
        comboLow20->setItemText(2, QCoreApplication::translate("FormGen48", "Quad-hut (normal)", nullptr));
        comboLow20->setItemText(3, QCoreApplication::translate("FormGen48", "Quad-hut (barely)", nullptr));
        comboLow20->setItemText(4, QCoreApplication::translate("FormGen48", "Quad-feature (ideal, custom salt)", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabQuadF), QCoreApplication::translate("FormGen48", "Quad-feature", nullptr));
#if QT_CONFIG(tooltip)
        labelQM->setToolTip(QCoreApplication::translate("FormGen48", "Number of planar spawning spaces inside monuments that are within 128 blocks of a center position\n"
"(i.e. this is a measure quality, out of 4*58*58)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelQM->setText(QCoreApplication::translate("FormGen48", "Min. monument area:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQuadM), QCoreApplication::translate("FormGen48", "Quad-monument", nullptr));
#if QT_CONFIG(tooltip)
        labelPath->setToolTip(QCoreApplication::translate("FormGen48", "Use a custom seed list as source for 48-bit seed candidates", nullptr));
#endif // QT_CONFIG(tooltip)
        labelPath->setText(QCoreApplication::translate("FormGen48", "Load 48-bit seed list:", nullptr));
        buttonBrowse->setText(QCoreApplication::translate("FormGen48", "...", nullptr));
#if QT_CONFIG(tooltip)
        labelListSalt->setToolTip(QCoreApplication::translate("FormGen48", "Value (such as a structure salt) added to the 48-bit seeds", nullptr));
#endif // QT_CONFIG(tooltip)
        labelListSalt->setText(QCoreApplication::translate("FormGen48", "Add structure salt:", nullptr));
        lineListSalt->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabList), QCoreApplication::translate("FormGen48", "Seed list", nullptr));
        radioAuto->setText(QCoreApplication::translate("FormGen48", "Auto", nullptr));
        radioManual->setText(QCoreApplication::translate("FormGen48", "Manual", nullptr));
        labelTranspose->setText(QCoreApplication::translate("FormGen48", "Transpose by regions (multiplied by \303\227512):", nullptr));
#if QT_CONFIG(tooltip)
        labelX1->setToolTip(QCoreApplication::translate("FormGen48", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX1->setText(QCoreApplication::translate("FormGen48", "X<sub>1</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX1->setToolTip(QCoreApplication::translate("FormGen48", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX1->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ1->setToolTip(QCoreApplication::translate("FormGen48", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ1->setText(QCoreApplication::translate("FormGen48", "Z<sub>1</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ1->setToolTip(QCoreApplication::translate("FormGen48", "Lower bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ1->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        labelX2->setToolTip(QCoreApplication::translate("FormGen48", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelX2->setText(QCoreApplication::translate("FormGen48", "X<sub>2</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditX2->setToolTip(QCoreApplication::translate("FormGen48", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditX2->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
#if QT_CONFIG(tooltip)
        labelZ2->setToolTip(QCoreApplication::translate("FormGen48", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelZ2->setText(QCoreApplication::translate("FormGen48", "Z<sub>2</sub>:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditZ2->setToolTip(QCoreApplication::translate("FormGen48", "Upper bound (inclusive)", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditZ2->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
        labelSpace->setText(QCoreApplication::translate("FormGen48", "Seeds in search space:", nullptr));
        labelCount->setText(QCoreApplication::translate("FormGen48", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormGen48: public Ui_FormGen48 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMGEN48_H
