/********************************************************************************
** Form generated from reading UI file 'gasblender.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASBLENDER_H
#define UI_GASBLENDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GasBlender
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBoxInitial;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *spinBox_Pi;
    QLabel *label_20;
    QSlider *horizontalSlider_Pi;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDoubleSpinBox *spinBox_O2i;
    QLabel *label_22;
    QSlider *horizontalSlider_O2i;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QDoubleSpinBox *spinBox_Hei;
    QLabel *label_23;
    QSlider *horizontalSlider_Hei;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBoxFinal;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QSpinBox *spinBox_Pf;
    QLabel *label_21;
    QSlider *horizontalSlider_Pf;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QSpinBox *spinBox_O2f;
    QLabel *label_24;
    QSlider *horizontalSlider_O2f;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpinBox *spinBox_Hef;
    QLabel *label_25;
    QSlider *horizontalSlider_Hef;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButtonIdeal;
    QRadioButton *radioButtonReal;
    QCheckBox *checkBoxHe;
    QLabel *label_27;
    QSpinBox *spinBox_T;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpinBox *spinBox_O2fill;
    QLabel *label_26;
    QSlider *horizontalSlider_O2fill;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_Pi;
    QLabel *label_18;
    QLabel *label_14;
    QLineEdit *lineEdit_Pf;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *calculateButton;
    QPushButton *costsButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QLineEdit *lineEdit_PHe;
    QLabel *label_2;
    QLabel *label_16;
    QLineEdit *lineEdit_PO2;
    QLabel *label_3;
    QLabel *label_17;
    QLineEdit *lineEdit_Pfill;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButtonIdealBM;
    QRadioButton *radioButtonRealBM;
    QLabel *label_29;
    QSpinBox *spinBoxTBM;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *calculateButtonBM;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_31;
    QLineEdit *lineEdit_PiBM;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *lineEdit_PfBM;
    QLabel *label_34;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_35;
    QLineEdit *lineEdit_HeBM;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_37;
    QLineEdit *lineEdit_O2BM;
    QLabel *label_38;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_39;
    QLineEdit *lineEdit_N2BM;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GasBlender)
    {
        if (GasBlender->objectName().isEmpty())
            GasBlender->setObjectName(QString::fromUtf8("GasBlender"));
        GasBlender->setEnabled(true);
        GasBlender->resize(616, 429);
        centralwidget = new QWidget(GasBlender);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 21, 584, 350));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        comboBoxInitial = new QComboBox(frame);
        comboBoxInitial->setObjectName(QString::fromUtf8("comboBoxInitial"));

        horizontalLayout_3->addWidget(comboBoxInitial);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        spinBox_Pi = new QSpinBox(frame);
        spinBox_Pi->setObjectName(QString::fromUtf8("spinBox_Pi"));
        spinBox_Pi->setMinimum(0);
        spinBox_Pi->setMaximum(400);
        spinBox_Pi->setValue(0);

        horizontalLayout_5->addWidget(spinBox_Pi);

        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_5->addWidget(label_20);

        horizontalSlider_Pi = new QSlider(frame);
        horizontalSlider_Pi->setObjectName(QString::fromUtf8("horizontalSlider_Pi"));
        horizontalSlider_Pi->setMaximum(400);
        horizontalSlider_Pi->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_Pi);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        spinBox_O2i = new QDoubleSpinBox(frame);
        spinBox_O2i->setObjectName(QString::fromUtf8("spinBox_O2i"));
        spinBox_O2i->setDecimals(1);
        spinBox_O2i->setSingleStep(0.1);
        spinBox_O2i->setValue(0);

        horizontalLayout_6->addWidget(spinBox_O2i);

        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_6->addWidget(label_22);

        horizontalSlider_O2i = new QSlider(frame);
        horizontalSlider_O2i->setObjectName(QString::fromUtf8("horizontalSlider_O2i"));
        horizontalSlider_O2i->setMaximum(100);
        horizontalSlider_O2i->setValue(0);
        horizontalSlider_O2i->setSliderPosition(0);
        horizontalSlider_O2i->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_O2i);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        spinBox_Hei = new QDoubleSpinBox(frame);
        spinBox_Hei->setObjectName(QString::fromUtf8("spinBox_Hei"));
        spinBox_Hei->setDecimals(1);
        spinBox_Hei->setMaximum(100);
        spinBox_Hei->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinBox_Hei);

        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_2->addWidget(label_23);

        horizontalSlider_Hei = new QSlider(frame);
        horizontalSlider_Hei->setObjectName(QString::fromUtf8("horizontalSlider_Hei"));
        horizontalSlider_Hei->setMaximum(100);
        horizontalSlider_Hei->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_Hei);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(layoutWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_6);

        comboBoxFinal = new QComboBox(frame_2);
        comboBoxFinal->setObjectName(QString::fromUtf8("comboBoxFinal"));

        horizontalLayout_4->addWidget(comboBoxFinal);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        spinBox_Pf = new QSpinBox(frame_2);
        spinBox_Pf->setObjectName(QString::fromUtf8("spinBox_Pf"));
        spinBox_Pf->setMinimum(0);
        spinBox_Pf->setMaximum(400);
        spinBox_Pf->setValue(0);

        horizontalLayout_8->addWidget(spinBox_Pf);

        label_21 = new QLabel(frame_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_8->addWidget(label_21);

        horizontalSlider_Pf = new QSlider(frame_2);
        horizontalSlider_Pf->setObjectName(QString::fromUtf8("horizontalSlider_Pf"));
        horizontalSlider_Pf->setMaximum(400);
        horizontalSlider_Pf->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_Pf);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        spinBox_O2f = new QSpinBox(frame_2);
        spinBox_O2f->setObjectName(QString::fromUtf8("spinBox_O2f"));
        spinBox_O2f->setMaximum(100);

        horizontalLayout_9->addWidget(spinBox_O2f);

        label_24 = new QLabel(frame_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_9->addWidget(label_24);

        horizontalSlider_O2f = new QSlider(frame_2);
        horizontalSlider_O2f->setObjectName(QString::fromUtf8("horizontalSlider_O2f"));
        horizontalSlider_O2f->setMaximum(100);
        horizontalSlider_O2f->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_O2f);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        spinBox_Hef = new QSpinBox(frame_2);
        spinBox_Hef->setObjectName(QString::fromUtf8("spinBox_Hef"));
        spinBox_Hef->setMaximum(100);

        horizontalLayout_12->addWidget(spinBox_Hef);

        label_25 = new QLabel(frame_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_12->addWidget(label_25);

        horizontalSlider_Hef = new QSlider(frame_2);
        horizontalSlider_Hef->setObjectName(QString::fromUtf8("horizontalSlider_Hef"));
        horizontalSlider_Hef->setMaximum(100);
        horizontalSlider_Hef->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSlider_Hef);


        verticalLayout_3->addLayout(horizontalLayout_12);


        horizontalLayout->addWidget(frame_2);


        verticalLayout_4->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        radioButtonIdeal = new QRadioButton(tab);
        radioButtonIdeal->setObjectName(QString::fromUtf8("radioButtonIdeal"));
        radioButtonIdeal->setChecked(true);
        radioButtonIdeal->setAutoExclusive(true);

        horizontalLayout_11->addWidget(radioButtonIdeal);

        radioButtonReal = new QRadioButton(tab);
        radioButtonReal->setObjectName(QString::fromUtf8("radioButtonReal"));
        radioButtonReal->setChecked(false);
        radioButtonReal->setAutoExclusive(true);

        horizontalLayout_11->addWidget(radioButtonReal);

        checkBoxHe = new QCheckBox(tab);
        checkBoxHe->setObjectName(QString::fromUtf8("checkBoxHe"));
        checkBoxHe->setEnabled(false);
        checkBoxHe->setChecked(true);

        horizontalLayout_11->addWidget(checkBoxHe);

        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setEnabled(false);

        horizontalLayout_11->addWidget(label_27);

        spinBox_T = new QSpinBox(tab);
        spinBox_T->setObjectName(QString::fromUtf8("spinBox_T"));
        spinBox_T->setEnabled(false);
        spinBox_T->setMinimum(-20);
        spinBox_T->setMaximum(50);
        spinBox_T->setValue(25);

        horizontalLayout_11->addWidget(spinBox_T);

        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setEnabled(false);

        horizontalLayout_11->addWidget(label_28);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        spinBox_O2fill = new QSpinBox(tab);
        spinBox_O2fill->setObjectName(QString::fromUtf8("spinBox_O2fill"));
        spinBox_O2fill->setMaximum(99);
        spinBox_O2fill->setValue(21);

        horizontalLayout_7->addWidget(spinBox_O2fill);

        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_7->addWidget(label_26);

        horizontalSlider_O2fill = new QSlider(tab);
        horizontalSlider_O2fill->setObjectName(QString::fromUtf8("horizontalSlider_O2fill"));
        horizontalSlider_O2fill->setMaximum(99);
        horizontalSlider_O2fill->setValue(21);
        horizontalSlider_O2fill->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_O2fill);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit_Pi = new QLineEdit(tab);
        lineEdit_Pi->setObjectName(QString::fromUtf8("lineEdit_Pi"));
        lineEdit_Pi->setEnabled(false);
        lineEdit_Pi->setMaximumSize(QSize(51, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lineEdit_Pi->setFont(font);

        horizontalLayout_13->addWidget(lineEdit_Pi);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_13->addWidget(label_18);

        label_14 = new QLabel(tab);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        lineEdit_Pf = new QLineEdit(tab);
        lineEdit_Pf->setObjectName(QString::fromUtf8("lineEdit_Pf"));
        lineEdit_Pf->setEnabled(false);
        lineEdit_Pf->setMaximumSize(QSize(51, 16777215));
        lineEdit_Pf->setFont(font);

        horizontalLayout_13->addWidget(lineEdit_Pf);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_13->addWidget(label_19);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        calculateButton = new QPushButton(tab);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));

        horizontalLayout_13->addWidget(calculateButton);

        costsButton = new QPushButton(tab);
        costsButton->setObjectName(QString::fromUtf8("costsButton"));
        costsButton->setEnabled(false);

        horizontalLayout_13->addWidget(costsButton);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_10->addWidget(label_15);

        lineEdit_PHe = new QLineEdit(tab);
        lineEdit_PHe->setObjectName(QString::fromUtf8("lineEdit_PHe"));
        lineEdit_PHe->setEnabled(false);
        lineEdit_PHe->setMaximumSize(QSize(51, 16777215));
        lineEdit_PHe->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_PHe);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_10->addWidget(label_16);

        lineEdit_PO2 = new QLineEdit(tab);
        lineEdit_PO2->setObjectName(QString::fromUtf8("lineEdit_PO2"));
        lineEdit_PO2->setEnabled(false);
        lineEdit_PO2->setMaximumSize(QSize(51, 16777215));
        lineEdit_PO2->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_PO2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_10->addWidget(label_3);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_10->addWidget(label_17);

        lineEdit_Pfill = new QLineEdit(tab);
        lineEdit_Pfill->setObjectName(QString::fromUtf8("lineEdit_Pfill"));
        lineEdit_Pfill->setEnabled(false);
        lineEdit_Pfill->setMaximumSize(QSize(51, 16777215));
        lineEdit_Pfill->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_Pfill);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_10->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        radioButtonIdealBM = new QRadioButton(tab_2);
        radioButtonIdealBM->setObjectName(QString::fromUtf8("radioButtonIdealBM"));
        radioButtonIdealBM->setChecked(true);
        radioButtonIdealBM->setAutoExclusive(true);

        horizontalLayout_14->addWidget(radioButtonIdealBM);

        radioButtonRealBM = new QRadioButton(tab_2);
        radioButtonRealBM->setObjectName(QString::fromUtf8("radioButtonRealBM"));
        radioButtonRealBM->setChecked(false);
        radioButtonRealBM->setAutoExclusive(true);

        horizontalLayout_14->addWidget(radioButtonRealBM);

        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setEnabled(false);

        horizontalLayout_14->addWidget(label_29);

        spinBoxTBM = new QSpinBox(tab_2);
        spinBoxTBM->setObjectName(QString::fromUtf8("spinBoxTBM"));
        spinBoxTBM->setEnabled(false);
        spinBoxTBM->setMinimum(-20);
        spinBoxTBM->setMaximum(50);
        spinBoxTBM->setValue(25);

        horizontalLayout_14->addWidget(spinBoxTBM);

        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setEnabled(false);

        horizontalLayout_14->addWidget(label_30);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);

        calculateButtonBM = new QPushButton(tab_2);
        calculateButtonBM->setObjectName(QString::fromUtf8("calculateButtonBM"));

        horizontalLayout_17->addWidget(calculateButtonBM);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_15->addWidget(label_31);

        lineEdit_PiBM = new QLineEdit(tab_2);
        lineEdit_PiBM->setObjectName(QString::fromUtf8("lineEdit_PiBM"));
        lineEdit_PiBM->setEnabled(false);
        lineEdit_PiBM->setMaximumSize(QSize(51, 16777215));
        lineEdit_PiBM->setFont(font);

        horizontalLayout_15->addWidget(lineEdit_PiBM);

        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_15->addWidget(label_32);

        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_15->addWidget(label_33);

        lineEdit_PfBM = new QLineEdit(tab_2);
        lineEdit_PfBM->setObjectName(QString::fromUtf8("lineEdit_PfBM"));
        lineEdit_PfBM->setEnabled(false);
        lineEdit_PfBM->setMaximumSize(QSize(51, 16777215));
        lineEdit_PfBM->setFont(font);

        horizontalLayout_15->addWidget(lineEdit_PfBM);

        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_15->addWidget(label_34);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);

        label_35 = new QLabel(tab_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_16->addWidget(label_35);

        lineEdit_HeBM = new QLineEdit(tab_2);
        lineEdit_HeBM->setObjectName(QString::fromUtf8("lineEdit_HeBM"));
        lineEdit_HeBM->setEnabled(false);
        lineEdit_HeBM->setMaximumSize(QSize(51, 16777215));
        lineEdit_HeBM->setFont(font);

        horizontalLayout_16->addWidget(lineEdit_HeBM);

        label_36 = new QLabel(tab_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_16->addWidget(label_36);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_8);

        label_37 = new QLabel(tab_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_16->addWidget(label_37);

        lineEdit_O2BM = new QLineEdit(tab_2);
        lineEdit_O2BM->setObjectName(QString::fromUtf8("lineEdit_O2BM"));
        lineEdit_O2BM->setEnabled(false);
        lineEdit_O2BM->setMaximumSize(QSize(51, 16777215));
        lineEdit_O2BM->setFont(font);

        horizontalLayout_16->addWidget(lineEdit_O2BM);

        label_38 = new QLabel(tab_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        horizontalLayout_16->addWidget(label_38);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);

        label_39 = new QLabel(tab_2);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_16->addWidget(label_39);

        lineEdit_N2BM = new QLineEdit(tab_2);
        lineEdit_N2BM->setObjectName(QString::fromUtf8("lineEdit_N2BM"));
        lineEdit_N2BM->setEnabled(false);
        lineEdit_N2BM->setMaximumSize(QSize(51, 16777215));
        lineEdit_N2BM->setFont(font);

        horizontalLayout_16->addWidget(lineEdit_N2BM);

        label_40 = new QLabel(tab_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_16->addWidget(label_40);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_16);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        GasBlender->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GasBlender);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 616, 25));
        GasBlender->setMenuBar(menubar);
        statusbar = new QStatusBar(GasBlender);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GasBlender->setStatusBar(statusbar);
        QWidget::setTabOrder(comboBoxInitial, spinBox_Pi);
        QWidget::setTabOrder(spinBox_Pi, horizontalSlider_Pi);
        QWidget::setTabOrder(horizontalSlider_Pi, spinBox_O2i);
        QWidget::setTabOrder(spinBox_O2i, horizontalSlider_O2i);
        QWidget::setTabOrder(horizontalSlider_O2i, spinBox_Hei);
        QWidget::setTabOrder(spinBox_Hei, comboBoxFinal);
        QWidget::setTabOrder(comboBoxFinal, spinBox_Pf);
        QWidget::setTabOrder(spinBox_Pf, horizontalSlider_Pf);
        QWidget::setTabOrder(horizontalSlider_Pf, spinBox_O2f);
        QWidget::setTabOrder(spinBox_O2f, horizontalSlider_O2f);
        QWidget::setTabOrder(horizontalSlider_O2f, spinBox_Hef);
        QWidget::setTabOrder(spinBox_Hef, horizontalSlider_Hef);
        QWidget::setTabOrder(horizontalSlider_Hef, spinBox_O2fill);
        QWidget::setTabOrder(spinBox_O2fill, horizontalSlider_O2fill);
        QWidget::setTabOrder(horizontalSlider_O2fill, radioButtonIdeal);
        QWidget::setTabOrder(radioButtonIdeal, checkBoxHe);
        QWidget::setTabOrder(checkBoxHe, spinBox_T);
        QWidget::setTabOrder(spinBox_T, calculateButton);
        QWidget::setTabOrder(calculateButton, costsButton);
        QWidget::setTabOrder(costsButton, lineEdit_Pi);
        QWidget::setTabOrder(lineEdit_Pi, lineEdit_Pf);
        QWidget::setTabOrder(lineEdit_Pf, lineEdit_PHe);
        QWidget::setTabOrder(lineEdit_PHe, lineEdit_PO2);
        QWidget::setTabOrder(lineEdit_PO2, lineEdit_Pfill);

        retranslateUi(GasBlender);
        QObject::connect(spinBox_Pi, SIGNAL(valueChanged(int)), horizontalSlider_Pi, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_Pi, SIGNAL(valueChanged(int)), spinBox_Pi, SLOT(setValue(int)));
        QObject::connect(spinBox_Pf, SIGNAL(valueChanged(int)), horizontalSlider_Pf, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_Pf, SIGNAL(valueChanged(int)), spinBox_Pf, SLOT(setValue(int)));
        QObject::connect(spinBox_O2f, SIGNAL(valueChanged(int)), horizontalSlider_O2f, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_O2f, SIGNAL(valueChanged(int)), spinBox_O2f, SLOT(setValue(int)));
        QObject::connect(spinBox_Hef, SIGNAL(valueChanged(int)), horizontalSlider_Hef, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_Hef, SIGNAL(valueChanged(int)), spinBox_Hef, SLOT(setValue(int)));
        QObject::connect(spinBox_O2fill, SIGNAL(valueChanged(int)), horizontalSlider_O2fill, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_O2fill, SIGNAL(valueChanged(int)), spinBox_O2fill, SLOT(setValue(int)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), checkBoxHe, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), spinBox_T, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonIdeal, SIGNAL(clicked(bool)), checkBoxHe, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonIdeal, SIGNAL(clicked(bool)), spinBox_T, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_27, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_28, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonIdeal, SIGNAL(clicked(bool)), label_27, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_28, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_28, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_28, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonReal, SIGNAL(clicked(bool)), label_28, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonIdeal, SIGNAL(clicked(bool)), spinBox_T, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonIdeal, SIGNAL(clicked(bool)), label_28, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonRealBM, SIGNAL(clicked(bool)), label_29, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonRealBM, SIGNAL(clicked(bool)), spinBoxTBM, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonRealBM, SIGNAL(clicked(bool)), label_30, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonIdealBM, SIGNAL(clicked(bool)), label_29, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonIdealBM, SIGNAL(clicked(bool)), spinBoxTBM, SLOT(setDisabled(bool)));
        QObject::connect(radioButtonIdealBM, SIGNAL(clicked(bool)), label_30, SLOT(setDisabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GasBlender);
    } // setupUi

    void retranslateUi(QMainWindow *GasBlender)
    {
        GasBlender->setWindowTitle(QApplication::translate("GasBlender", "GasBlender", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GasBlender", "Initial mixture:", 0, QApplication::UnicodeUTF8));
        comboBoxInitial->clear();
        comboBoxInitial->insertItems(0, QStringList()
         << QApplication::translate("GasBlender", "fast selector", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "Nitrox 32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "Nitrox 50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "25/25 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "35/25 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "30/30 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "21/35 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "18/45 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "15/55 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "10/70 (O2/He)", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("GasBlender", "P=", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GasBlender", "O2", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GasBlender", "He", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GasBlender", "Final mixture:", 0, QApplication::UnicodeUTF8));
        comboBoxFinal->clear();
        comboBoxFinal->insertItems(0, QStringList()
         << QApplication::translate("GasBlender", "fast selector", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "Nitrox 32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "Nitrox 50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "25/25 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "35/25 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "30/30 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "21/35 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "18/45 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "15/55 (O2/He)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GasBlender", "10/70 (O2/He)", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("GasBlender", "P=", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GasBlender", "O2", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("GasBlender", "He", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        radioButtonIdeal->setText(QApplication::translate("GasBlender", "ideal gas", 0, QApplication::UnicodeUTF8));
        radioButtonReal->setText(QApplication::translate("GasBlender", "real gas(GERG 2004)", 0, QApplication::UnicodeUTF8));
        checkBoxHe->setText(QApplication::translate("GasBlender", "He first", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("GasBlender", "T=", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("GasBlender", "grad C", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GasBlender", "Top off gas:  O2/N2 mix (air = 21%O2)    O2", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("GasBlender", "Initial P=", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("GasBlender", "   Final P=", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        calculateButton->setText(QApplication::translate("GasBlender", "Calculate", 0, QApplication::UnicodeUTF8));
        costsButton->setText(QApplication::translate("GasBlender", "Costs", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("GasBlender", "P(He)=     ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("GasBlender", "     P(O2)=", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("GasBlender", "     P(O2/N2 mix)= ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GasBlender", "Partial Mixing", 0, QApplication::UnicodeUTF8));
        radioButtonIdealBM->setText(QApplication::translate("GasBlender", "ideal gas", 0, QApplication::UnicodeUTF8));
        radioButtonRealBM->setText(QApplication::translate("GasBlender", "real gas(GERG 2004)", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("GasBlender", "T=", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("GasBlender", "grad C", 0, QApplication::UnicodeUTF8));
        calculateButtonBM->setText(QApplication::translate("GasBlender", "Calculate", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("GasBlender", "Initial P=", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("GasBlender", "   Final P=", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("GasBlender", "bar", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("GasBlender", "He ", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("GasBlender", "    O2", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("GasBlender", "N2", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("GasBlender", "%", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GasBlender", "Continuous Mixing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GasBlender: public Ui_GasBlender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GASBLENDER_H
