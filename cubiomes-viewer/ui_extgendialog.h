/********************************************************************************
** Form generated from reading UI file 'extgendialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTGENDIALOG_H
#define UI_EXTGENDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_ExtGenDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupSalts;
    QDialogButtonBox *buttonBox;
    QCheckBox *checkEstimate;
    QCheckBox *checkExperimental;

    void setupUi(QDialog *ExtGenDialog)
    {
        if (ExtGenDialog->objectName().isEmpty())
            ExtGenDialog->setObjectName(QString::fromUtf8("ExtGenDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExtGenDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ExtGenDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupSalts = new QGroupBox(ExtGenDialog);
        groupSalts->setObjectName(QString::fromUtf8("groupSalts"));
        groupSalts->setCheckable(true);
        groupSalts->setChecked(false);

        gridLayout->addWidget(groupSalts, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ExtGenDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        checkEstimate = new QCheckBox(ExtGenDialog);
        checkEstimate->setObjectName(QString::fromUtf8("checkEstimate"));

        gridLayout->addWidget(checkEstimate, 2, 0, 1, 2);

        checkExperimental = new QCheckBox(ExtGenDialog);
        checkExperimental->setObjectName(QString::fromUtf8("checkExperimental"));

        gridLayout->addWidget(checkExperimental, 1, 0, 1, 2);


        retranslateUi(ExtGenDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExtGenDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExtGenDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExtGenDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtGenDialog)
    {
        ExtGenDialog->setWindowTitle(QCoreApplication::translate("ExtGenDialog", "World Settings", nullptr));
        groupSalts->setTitle(QCoreApplication::translate("ExtGenDialog", "Override structure salt", nullptr));
        checkEstimate->setText(QCoreApplication::translate("ExtGenDialog", "Estimate terrain (1.18+)", nullptr));
        checkExperimental->setText(QCoreApplication::translate("ExtGenDialog", "Enable experimentally supported versions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtGenDialog: public Ui_ExtGenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTGENDIALOG_H
