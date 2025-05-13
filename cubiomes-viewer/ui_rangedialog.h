/********************************************************************************
** Form generated from reading UI file 'rangedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGEDIALOG_H
#define UI_RANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RangeDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkHex;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineMax;
    QLineEdit *lineMin;

    void setupUi(QDialog *RangeDialog)
    {
        if (RangeDialog->objectName().isEmpty())
            RangeDialog->setObjectName(QString::fromUtf8("RangeDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        RangeDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(RangeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkHex = new QCheckBox(RangeDialog);
        checkHex->setObjectName(QString::fromUtf8("checkHex"));

        gridLayout->addWidget(checkHex, 4, 2, 1, 1);

        label_3 = new QLabel(RangeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RangeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        label = new QLabel(RangeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_2 = new QLabel(RangeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineMax = new QLineEdit(RangeDialog);
        lineMax->setObjectName(QString::fromUtf8("lineMax"));

        gridLayout->addWidget(lineMax, 3, 2, 1, 1);

        lineMin = new QLineEdit(RangeDialog);
        lineMin->setObjectName(QString::fromUtf8("lineMin"));

        gridLayout->addWidget(lineMin, 2, 2, 1, 1);


        retranslateUi(RangeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RangeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RangeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RangeDialog);
    } // setupUi

    void retranslateUi(QDialog *RangeDialog)
    {
        RangeDialog->setWindowTitle(QCoreApplication::translate("RangeDialog", "Search range", nullptr));
        checkHex->setText(QCoreApplication::translate("RangeDialog", "Hexadecimal", nullptr));
        label_3->setText(QCoreApplication::translate("RangeDialog", "Maximum:", nullptr));
        label->setText(QCoreApplication::translate("RangeDialog", "<html><head/><body><p>Set a value range for the incremental search. </p><p>Bounds are unsigned.</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RangeDialog", "Minimum:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RangeDialog: public Ui_RangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGEDIALOG_H
