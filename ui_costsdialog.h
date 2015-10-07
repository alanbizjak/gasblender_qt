/********************************************************************************
** Form generated from reading UI file 'costsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTSDIALOG_H
#define UI_COSTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CostsDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditO2Price;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditHePrice;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditMixPrice;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEditTankVolume;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEditCosts;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *calcCostsButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;

    void setupUi(QDialog *CostsDialog)
    {
        if (CostsDialog->objectName().isEmpty())
            CostsDialog->setObjectName(QString::fromUtf8("CostsDialog"));
        CostsDialog->resize(489, 287);
        widget = new QWidget(CostsDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 12, 469, 266));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditO2Price = new QLineEdit(frame);
        lineEditO2Price->setObjectName(QString::fromUtf8("lineEditO2Price"));
        lineEditO2Price->setMaximumSize(QSize(51, 16777215));
        lineEditO2Price->setMaxLength(5);
        lineEditO2Price->setFrame(true);

        horizontalLayout->addWidget(lineEditO2Price);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditHePrice = new QLineEdit(frame);
        lineEditHePrice->setObjectName(QString::fromUtf8("lineEditHePrice"));
        lineEditHePrice->setMaximumSize(QSize(51, 16777215));
        lineEditHePrice->setMaxLength(5);
        lineEditHePrice->setFrame(true);

        horizontalLayout_2->addWidget(lineEditHePrice);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditMixPrice = new QLineEdit(frame);
        lineEditMixPrice->setObjectName(QString::fromUtf8("lineEditMixPrice"));
        lineEditMixPrice->setMaximumSize(QSize(51, 16777215));
        lineEditMixPrice->setMaxLength(5);
        lineEditMixPrice->setFrame(true);

        horizontalLayout_4->addWidget(lineEditMixPrice);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEditTankVolume = new QLineEdit(frame_2);
        lineEditTankVolume->setObjectName(QString::fromUtf8("lineEditTankVolume"));
        lineEditTankVolume->setMaximumSize(QSize(51, 16777215));
        lineEditTankVolume->setMaxLength(5);
        lineEditTankVolume->setFrame(true);

        horizontalLayout_3->addWidget(lineEditTankVolume);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(frame_2);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEditCosts = new QTextEdit(widget);
        textEditCosts->setObjectName(QString::fromUtf8("textEditCosts"));
        textEditCosts->setEnabled(true);
        textEditCosts->setReadOnly(true);

        verticalLayout_4->addWidget(textEditCosts);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        calcCostsButton = new QPushButton(widget);
        calcCostsButton->setObjectName(QString::fromUtf8("calcCostsButton"));

        horizontalLayout_6->addWidget(calcCostsButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_5->addWidget(closeButton);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_4);


        retranslateUi(CostsDialog);

        QMetaObject::connectSlotsByName(CostsDialog);
    } // setupUi

    void retranslateUi(QDialog *CostsDialog)
    {
        CostsDialog->setWindowTitle(QApplication::translate("CostsDialog", "Fill Costs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        CostsDialog->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("CostsDialog", "Gas Prices:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CostsDialog", "Oxygen:       ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CostsDialog", "/Liter", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CostsDialog", "Hellium:       ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CostsDialog", "/Liter", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CostsDialog", "N2/O2 mix:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CostsDialog", "Target Tank:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CostsDialog", "Volume:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CostsDialog", "Liters", 0, QApplication::UnicodeUTF8));
        textEditCosts->setHtml(QApplication::translate("CostsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        calcCostsButton->setText(QApplication::translate("CostsDialog", "Calculate", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("CostsDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CostsDialog: public Ui_CostsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTSDIALOG_H
