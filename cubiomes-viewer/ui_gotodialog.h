/********************************************************************************
** Form generated from reading UI file 'gotodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTODIALOG_H
#define UI_GOTODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GotoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *labelX;
    QLineEdit *lineX;
    QLabel *labelZ;
    QLineEdit *lineZ;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineScale;
    QLabel *label_3;
    QCheckBox *checkAnimate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GotoDialog)
    {
        if (GotoDialog->objectName().isEmpty())
            GotoDialog->setObjectName(QString::fromUtf8("GotoDialog"));
        GotoDialog->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GotoDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GotoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(GotoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        frame = new QFrame(GotoDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelX = new QLabel(frame);
        labelX->setObjectName(QString::fromUtf8("labelX"));

        horizontalLayout->addWidget(labelX);

        lineX = new QLineEdit(frame);
        lineX->setObjectName(QString::fromUtf8("lineX"));
        lineX->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(lineX);

        labelZ = new QLabel(frame);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));

        horizontalLayout->addWidget(labelZ);

        lineZ = new QLineEdit(frame);
        lineZ->setObjectName(QString::fromUtf8("lineZ"));
        lineZ->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(lineZ);


        verticalLayout->addWidget(frame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(GotoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineScale = new QLineEdit(GotoDialog);
        lineScale->setObjectName(QString::fromUtf8("lineScale"));
        lineScale->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(lineScale);

        label_3 = new QLabel(GotoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        checkAnimate = new QCheckBox(GotoDialog);
        checkAnimate->setObjectName(QString::fromUtf8("checkAnimate"));

        verticalLayout->addWidget(checkAnimate);

        buttonBox = new QDialogButtonBox(GotoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GotoDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), GotoDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), GotoDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(GotoDialog);
    } // setupUi

    void retranslateUi(QDialog *GotoDialog)
    {
        GotoDialog->setWindowTitle(QCoreApplication::translate("GotoDialog", "Coordinates", nullptr));
        label->setText(QCoreApplication::translate("GotoDialog", "Coordinates:", nullptr));
        labelX->setText(QCoreApplication::translate("GotoDialog", "X", nullptr));
        labelZ->setText(QCoreApplication::translate("GotoDialog", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("GotoDialog", "Scale:", nullptr));
#if QT_CONFIG(tooltip)
        lineScale->setToolTip(QCoreApplication::translate("GotoDialog", "A very large scale may be unsafe", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("GotoDialog", "blocks per pixel", nullptr));
        checkAnimate->setText(QCoreApplication::translate("GotoDialog", "Animate travel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GotoDialog: public Ui_GotoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTODIALOG_H
