/********************************************************************************
** Form generated from reading UI file 'formconditions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONDITIONS_H
#define UI_FORMCONDITIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConditions
{
public:
    QGridLayout *gridLayout;
    QListWidget *listConditions;
    QHBoxLayout *layoutButtons;
    QPushButton *buttonRemoveAll;
    QPushButton *buttonRemove;
    QPushButton *buttonDisable;
    QPushButton *buttonEdit;
    QPushButton *buttonAddFilter;

    void setupUi(QWidget *FormConditions)
    {
        if (FormConditions->objectName().isEmpty())
            FormConditions->setObjectName(QString::fromUtf8("FormConditions"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormConditions->sizePolicy().hasHeightForWidth());
        FormConditions->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(FormConditions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listConditions = new QListWidget(FormConditions);
        listConditions->setObjectName(QString::fromUtf8("listConditions"));
        sizePolicy.setHeightForWidth(listConditions->sizePolicy().hasHeightForWidth());
        listConditions->setSizePolicy(sizePolicy);
        listConditions->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listConditions->setFont(font);
        listConditions->setContextMenuPolicy(Qt::CustomContextMenu);
        listConditions->setDragDropMode(QAbstractItemView::InternalMove);
        listConditions->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listConditions->setMovement(QListView::Snap);

        gridLayout->addWidget(listConditions, 0, 0, 1, 5);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        buttonRemoveAll = new QPushButton(FormConditions);
        buttonRemoveAll->setObjectName(QString::fromUtf8("buttonRemoveAll"));

        layoutButtons->addWidget(buttonRemoveAll);

        buttonRemove = new QPushButton(FormConditions);
        buttonRemove->setObjectName(QString::fromUtf8("buttonRemove"));

        layoutButtons->addWidget(buttonRemove);

        buttonDisable = new QPushButton(FormConditions);
        buttonDisable->setObjectName(QString::fromUtf8("buttonDisable"));

        layoutButtons->addWidget(buttonDisable);

        buttonEdit = new QPushButton(FormConditions);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));

        layoutButtons->addWidget(buttonEdit);

        buttonAddFilter = new QPushButton(FormConditions);
        buttonAddFilter->setObjectName(QString::fromUtf8("buttonAddFilter"));

        layoutButtons->addWidget(buttonAddFilter);


        gridLayout->addLayout(layoutButtons, 1, 0, 1, 5);


        retranslateUi(FormConditions);

        QMetaObject::connectSlotsByName(FormConditions);
    } // setupUi

    void retranslateUi(QWidget *FormConditions)
    {
        buttonRemoveAll->setText(QCoreApplication::translate("FormConditions", "Remove all", nullptr));
        buttonRemove->setText(QCoreApplication::translate("FormConditions", "Remove", nullptr));
        buttonDisable->setText(QCoreApplication::translate("FormConditions", "Dis-/Enable", nullptr));
        buttonEdit->setText(QCoreApplication::translate("FormConditions", "Edit", nullptr));
        buttonAddFilter->setText(QCoreApplication::translate("FormConditions", "Add", nullptr));
        (void)FormConditions;
    } // retranslateUi

};

namespace Ui {
    class FormConditions: public Ui_FormConditions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONDITIONS_H
