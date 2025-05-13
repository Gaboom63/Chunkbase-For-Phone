/********************************************************************************
** Form generated from reading UI file 'maptoolsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPTOOLSDIALOG_H
#define UI_MAPTOOLSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapToolsDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollContent;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QFrame *lineH;
    QLabel *label;
    QCheckBox *checkZoom;

    void setupUi(QDialog *MapToolsDialog)
    {
        if (MapToolsDialog->objectName().isEmpty())
            MapToolsDialog->setObjectName(QString::fromUtf8("MapToolsDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MapToolsDialog->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(MapToolsDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(MapToolsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 2);

        scrollArea = new QScrollArea(MapToolsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollContent = new QWidget();
        scrollContent->setObjectName(QString::fromUtf8("scrollContent"));
        gridLayout = new QGridLayout(scrollContent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(scrollContent);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/zoom.png")));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_4 = new QLabel(scrollContent);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_2 = new QLabel(scrollContent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        lineH = new QFrame(scrollContent);
        lineH->setObjectName(QString::fromUtf8("lineH"));
        lineH->setFrameShape(QFrame::HLine);
        lineH->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineH, 1, 0, 1, 4);

        label = new QLabel(scrollContent);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        checkZoom = new QCheckBox(scrollContent);
        checkZoom->setObjectName(QString::fromUtf8("checkZoom"));

        gridLayout->addWidget(checkZoom, 2, 0, 1, 1);

        scrollArea->setWidget(scrollContent);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 2);


        retranslateUi(MapToolsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MapToolsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MapToolsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MapToolsDialog);
    } // setupUi

    void retranslateUi(QDialog *MapToolsDialog)
    {
        MapToolsDialog->setWindowTitle(QCoreApplication::translate("MapToolsDialog", "Map Toolbar Options", nullptr));
        label_5->setText(QString());
        label_4->setText(QCoreApplication::translate("MapToolsDialog", "Zoom In/Out", nullptr));
        label_2->setText(QCoreApplication::translate("MapToolsDialog", "Maximum visible scale\n"
"(blocks per pixel)", nullptr));
        label->setText(QCoreApplication::translate("MapToolsDialog", "Enabled tools", nullptr));
        checkZoom->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapToolsDialog: public Ui_MapToolsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPTOOLSDIALOG_H
