/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QFrame *line;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(16);
        gridLayout->setVerticalSpacing(8);
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setOpenExternalLinks(true);

        gridLayout->addWidget(label, 0, 2, 2, 1);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 2, 1, 1);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(128, 128));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/logo.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        line = new QFrame(AboutDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 1);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Cubiomes-Viewer _VERSION_</span></p><p>Built: _DATE_</p><p>URL: <a href=\"https://github.com/Cubitect/cubiomes-viewer\"><span style=\" text-decoration: underline; color:#0057ae;\">https://github.com/Cubitect/cubiomes-viewer</span></a></p><p>License: <a href=\"https://www.gnu.org/licenses/gpl-3.0.en.html\"><span style=\" text-decoration: underline; color:#0057ae;\">GPLv3</span></a></p><p><br/><span style=\" font-size:12pt; font-weight:600;\">Components and Legal Information</span></p><p>\342\200\224 Biome and structure generation from <a href=\"https://github.com/Cubitect/cubiomes/\"><span style=\" text-decoration: underline; color:#0057ae;\">cubiomes</span></a>, licensed under <a href=\"https://mit-license.org/\"><span style=\" text-decoration: underline; color:#0057ae;\">MIT</span></a>.</p><p>\342\200\224 Cross platform GUI toolkit: Qt _QT_MAJOR_._QT_MINOR_, available under <a href=\"https://www.qt.io/licensing/\"><span style=\" text-deco"
                        "ration: underline; color:#0057ae;\">(L)GPLv3</span></a>.</p><p>\342\200\224 Dark Qt theme derived from <a href=\"https://github.com/ColinDuquesnoy/QDarkStyleSheet\"><span style=\" text-decoration: underline; color:#0057ae;\">QDarkStyleSheet</span></a>, licensed under MIT.</p><p>\342\200\224 Biome colors and icons are inspired by <a href=\"https://github.com/toolbox4minecraft/amidst\"><span style=\" text-decoration: underline; color:#0057ae;\">Amidst</span></a>, licensed under GPLv3.</p><p>\342\200\224 <a href=\"https://www.lua.org/license.html\"><span style=\" text-decoration: underline; color:#0057ae;\">Lua _LUA_VERS_</span></a> is distributed under the terms of the MIT license.<br/></p><p>NOT AN OFFICIAL MINECRAFT PRODUCT.</p><p>NOT APPROVED BY OR ASSOCIATED WITH MOJANG OR MICROSOFT.</p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
