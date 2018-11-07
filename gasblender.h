#ifndef GASBLENDER_H
#define GASBLENDER_H

#include <QMainWindow>
#include <QAbstractButton>
#include "ui_gasblender.h"

class GasBlender: public QMainWindow, public Ui::GasBlender
{
  Q_OBJECT
    public:
  GasBlender(QWidget *parent =0);
 protected:
  void readSettings();
  void closeEvent(QCloseEvent *event);
  //  private signals:
  // void change();
private slots:
  void change(const QString);
  void setInitMix(int idx);
  void setFinalMix(int idx);
  void setHeiSlider(double);
  void setHeiSpinBox(int);
  void setO2iSlider(double);
  void setO2iSpinBox(int);
  void changedInit(double);
  void changedFinal(int);
  void about();
  void calculate();
  void bestmix();
  void costs();
  void modified(int);
  void newFile();
  void manual();
  void documentation();
  void setMaxO2Init(double);
  void setMaxO2Final(int);
  void setMaxHeInit(double);
  void setMaxHeFinal(int);


private:
  QAbstractButton *abstractButton;
  QMenu *fileMenu;
  QMenu *mixMenu;
  QMenu *helpMenu;
  QAction *newAct;
  QAction *quitAct;
  QAction *aboutAct;
  QAction *manualAct;
  QAction *documentationAct;
  //QAction *aboutQtAct;
  QAction *ean32Act;
  QAction *ean50Act;
  QAction *tri3525Act;
  QAction *tri3030Act;
  QAction *tri2135Act;
  QAction *tri1845Act;
  QAction *tri1555Act;
  QAction *tri1070Act;

  double newtonIterationMixing();
  double newtonIterationBestMix();
  void createMenus();
  void createActions();
  void createStatusBar();
 
  double f_Hei,f_O2i,f_N2i,f_Hef,f_O2f,f_N2f,f_O2fill;
  double P_f,P_i,nf,ni;
  static constexpr double eps = 1E-14;
};

#endif
