/********************************************************************************
** Form generated from reading UI file 'formsearchcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSEARCHCONTROL_H
#define UI_FORMSEARCHCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "src/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_FormSearchControl
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *buttonSearchHelp;
    QLabel *label;
    QSpinBox *spinThreads;
    QLabel *label_3;
    QPushButton *buttonMore;
    StyledComboBox *comboSearchType;
    QLabel *labelStatus;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonClear;
    QPushButton *buttonStart;
    QLineEdit *lineStart;
    QProgressBar *progressBar;
    QCheckBox *checkStop;
    QTableView *results;

    void setupUi(QWidget *FormSearchControl)
    {
        if (FormSearchControl->objectName().isEmpty())
            FormSearchControl->setObjectName(QString::fromUtf8("FormSearchControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormSearchControl->sizePolicy().hasHeightForWidth());
        FormSearchControl->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(FormSearchControl);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonSearchHelp = new QPushButton(FormSearchControl);
        buttonSearchHelp->setObjectName(QString::fromUtf8("buttonSearchHelp"));
        buttonSearchHelp->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border: none;\n"
"	image: url(:/icons/info.png);\n"
"	image-position: right;\n"
"}\n"
"QPushButton:hover {\n"
"	image: url(:/icons/info_h.png);\n"
"}"));

        gridLayout->addWidget(buttonSearchHelp, 0, 1, 1, 1);

        label = new QLabel(FormSearchControl);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinThreads = new QSpinBox(FormSearchControl);
        spinThreads->setObjectName(QString::fromUtf8("spinThreads"));
        spinThreads->setMinimum(1);
        spinThreads->setMaximum(1024);

        gridLayout->addWidget(spinThreads, 0, 6, 1, 1);

        label_3 = new QLabel(FormSearchControl);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        buttonMore = new QPushButton(FormSearchControl);
        buttonMore->setObjectName(QString::fromUtf8("buttonMore"));
        buttonMore->setEnabled(false);

        gridLayout->addWidget(buttonMore, 0, 4, 1, 1);

        comboSearchType = new StyledComboBox(FormSearchControl);
        comboSearchType->setObjectName(QString::fromUtf8("comboSearchType"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboSearchType->sizePolicy().hasHeightForWidth());
        comboSearchType->setSizePolicy(sizePolicy1);
        comboSearchType->setIconSize(QSize(0, 16));

        gridLayout->addWidget(comboSearchType, 0, 2, 1, 2);

        labelStatus = new QLabel(FormSearchControl);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        labelStatus->setFont(font);

        gridLayout->addWidget(labelStatus, 4, 0, 1, 7);

        label_2 = new QLabel(FormSearchControl);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonClear = new QPushButton(FormSearchControl);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonClear->setIcon(icon);

        horizontalLayout->addWidget(buttonClear);

        buttonStart = new QPushButton(FormSearchControl);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonStart->setIcon(icon1);
        buttonStart->setCheckable(true);

        horizontalLayout->addWidget(buttonStart);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 7);

        lineStart = new QLineEdit(FormSearchControl);
        lineStart->setObjectName(QString::fromUtf8("lineStart"));
        sizePolicy1.setHeightForWidth(lineStart->sizePolicy().hasHeightForWidth());
        lineStart->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineStart, 1, 2, 1, 2);

        progressBar = new QProgressBar(FormSearchControl);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setFont(font);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setMaximum(10000);
        progressBar->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(progressBar, 3, 0, 1, 7);

        checkStop = new QCheckBox(FormSearchControl);
        checkStop->setObjectName(QString::fromUtf8("checkStop"));
        checkStop->setChecked(true);

        gridLayout->addWidget(checkStop, 1, 5, 1, 2);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        results = new QTableView(FormSearchControl);
        results->setObjectName(QString::fromUtf8("results"));
        sizePolicy.setHeightForWidth(results->sizePolicy().hasHeightForWidth());
        results->setSizePolicy(sizePolicy);
        results->setMinimumSize(QSize(0, 20));
        results->setFont(font);
        results->setContextMenuPolicy(Qt::CustomContextMenu);
        results->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        results->setEditTriggers(QAbstractItemView::NoEditTriggers);
        results->setSelectionMode(QAbstractItemView::SingleSelection);
        results->setSelectionBehavior(QAbstractItemView::SelectRows);
        results->setSortingEnabled(true);
        results->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(results, 0, 0, 1, 1);


        retranslateUi(FormSearchControl);

        QMetaObject::connectSlotsByName(FormSearchControl);
    } // setupUi

    void retranslateUi(QWidget *FormSearchControl)
    {
        FormSearchControl->setWindowTitle(QCoreApplication::translate("FormSearchControl", "Form", nullptr));
        buttonSearchHelp->setText(QString());
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("FormSearchControl", "<html><head/><body><p>searching algorithm</p><p>incremental: best for non-exhaustive biome searches</p><p>48-bit family blocks: best for searches with strong structure restrictions</p><p>seed list from file...: load and search through a pre-computed list of seed</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("FormSearchControl", "Search:", nullptr));
        label_3->setText(QCoreApplication::translate("FormSearchControl", "Threads:", nullptr));
        buttonMore->setText(QCoreApplication::translate("FormSearchControl", "...", nullptr));
        labelStatus->setText(QCoreApplication::translate("FormSearchControl", "Idle", nullptr));
        label_2->setText(QCoreApplication::translate("FormSearchControl", "Seed:", nullptr));
        buttonClear->setText(QCoreApplication::translate("FormSearchControl", "Clear results", nullptr));
        buttonStart->setText(QCoreApplication::translate("FormSearchControl", "Start search", nullptr));
        lineStart->setText(QCoreApplication::translate("FormSearchControl", "0", nullptr));
#if QT_CONFIG(tooltip)
        progressBar->setToolTip(QCoreApplication::translate("FormSearchControl", "Queued progress within the search set", nullptr));
#endif // QT_CONFIG(tooltip)
        progressBar->setFormat(QCoreApplication::translate("FormSearchControl", "0", nullptr));
#if QT_CONFIG(tooltip)
        checkStop->setToolTip(QCoreApplication::translate("FormSearchControl", "stop as soon as the next set of matching seeds is found", nullptr));
#endif // QT_CONFIG(tooltip)
        checkStop->setText(QCoreApplication::translate("FormSearchControl", "Stop on results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSearchControl: public Ui_FormSearchControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSEARCHCONTROL_H
