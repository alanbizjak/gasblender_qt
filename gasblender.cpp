#include <QtGui>
//#include <QDesktopServices>

#include "gasblender.h"
#include "costsdialog.h"
#include "globalvar.h"
#include "gerg2004.h"

GasBlender::GasBlender(QWidget *parent)
  : QMainWindow(parent)
{
  
  setupUi(this);
  setWindowIcon(QIcon(":/images/logo.jpg"));
  
  
  // spinBox has double precision, slider has int
  connect(spinBox_Hei, SIGNAL(valueChanged(double)),
  	  this, SLOT(setHeiSlider(double)));
  connect(spinBox_O2i, SIGNAL(valueChanged(double)),
  	  this, SLOT(setO2iSlider(double)));
  connect(horizontalSlider_Hei, SIGNAL(valueChanged(int)),
    	  this, SLOT(setHeiSpinBox(int)));
  connect(horizontalSlider_O2i, SIGNAL(valueChanged(int)),
 	  this, SLOT(setO2iSpinBox(int)));
  // do not allow sum of gases higher than 100%
  connect(spinBox_Hei, SIGNAL(valueChanged(double)),
  	  this, SLOT(setMaxO2Init(double)));
  connect(spinBox_Hef, SIGNAL(valueChanged(int)),
  	  this, SLOT(setMaxO2Final(int)));
  connect(spinBox_O2i, SIGNAL(valueChanged(double)),
  	  this, SLOT(setMaxHeInit(double)));
  connect(spinBox_O2f, SIGNAL(valueChanged(int)),
  	  this, SLOT(setMaxHeFinal(int)));


  //combobox spinbox connection
  connect(spinBox_O2i, SIGNAL(valueChanged(double)),
  	  this, SLOT(changedInit(double)));
  connect(spinBox_Hei, SIGNAL(valueChanged(double)),
  	  this, SLOT(changedInit(double)));
  connect(spinBox_O2f, SIGNAL(valueChanged(int)),
  	  this, SLOT(changedFinal(int)));
  connect(spinBox_Hef, SIGNAL(valueChanged(int)),
  	  this, SLOT(changedFinal(int)));
 

  //calculate,costs and fast selector connections
  
  connect(calculateButtonBM,SIGNAL(clicked()),this,SLOT(bestmix()));    
  connect(calculateButton,SIGNAL(clicked()),this,SLOT(calculate()));    
  connect(costsButton,SIGNAL(clicked()),this,SLOT(costs()));
  connect(comboBoxInitial,SIGNAL(currentIndexChanged(int)),this,SLOT(setInitMix(int)));
  connect(comboBoxFinal,SIGNAL(currentIndexChanged(int)),this,SLOT(setFinalMix(int)));
  
  connect(tabWidget,SIGNAL(currentChanged(int)),this,SLOT(modified(int)));
  
  //clear linedit if something changed  
  connect(spinBox_Pi,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_Pf,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_O2i,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_Hei,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_O2f,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_Hef,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));
  connect(spinBox_O2fill,SIGNAL(valueChanged(const QString)),this,SLOT(change(const QString)));

  createActions();    
  createMenus();
  readSettings();
  
  spinBox_Pi->setValue(50);
  spinBox_Pf->setValue(200);
  spinBox_O2i->setValue(32.0);
  spinBox_O2f->setValue(32);
  
  
  
}

void GasBlender::modified(int){
  statusBar()->showMessage(tr(""));
}

void GasBlender::change(QString){
    statusBar()->showMessage(tr(""));
    lineEdit_Pi->clear();
    lineEdit_PHe->clear();
    lineEdit_PO2->clear();
    lineEdit_Pfill->clear();
    lineEdit_Pf->clear();
    lineEdit_PiBM->clear();
    lineEdit_PfBM->clear();
    lineEdit_HeBM->clear();
    lineEdit_O2BM->clear();
    lineEdit_N2BM->clear();

}

void GasBlender::createStatusBar(){
  statusBar()->showMessage(tr(""));
}

void GasBlender::setO2iSlider(double value){
  //  int value_int = (int) value;
  horizontalSlider_O2i->setValue((int)(value));
}
void GasBlender::setHeiSlider(double value){
  horizontalSlider_Hei->setValue((int)(value));
}


void GasBlender::changedInit(double){
  //  printf("%lf %lf\n",spinBox_O2i->value() ,spinBox_Hei->value()); 
  if (spinBox_O2i->value() == 32.0 && spinBox_Hei->value() == 0.0)
    comboBoxInitial->setCurrentIndex(1);
  else if (spinBox_O2i->value() == 50.0 && spinBox_Hei->value() == 0.0)
    comboBoxInitial->setCurrentIndex(2);
  else if (spinBox_O2i->value() == 25.0 && spinBox_Hei->value() == 25.0)
    comboBoxInitial->setCurrentIndex(3);
  else if (spinBox_O2i->value() == 35.0 && spinBox_Hei->value() == 25.0)
    comboBoxInitial->setCurrentIndex(4);
  else if (spinBox_O2i->value() == 30.0 && spinBox_Hei->value() == 30.0)
    comboBoxInitial->setCurrentIndex(5);
  else if (spinBox_O2i->value() == 21.0 && spinBox_Hei->value() == 35.0)
    comboBoxInitial->setCurrentIndex(6);
  else if (spinBox_O2i->value() == 18.0 && spinBox_Hei->value() == 45.0)
    comboBoxInitial->setCurrentIndex(7);
  else if (spinBox_O2i->value() == 15.0 && spinBox_Hei->value() == 55.0)
    comboBoxInitial->setCurrentIndex(8);
  else if ((spinBox_O2i->value() == 10.0) && (spinBox_Hei->value() == 70.0))
    comboBoxInitial->setCurrentIndex(9);
  else
    comboBoxInitial->setCurrentIndex(0);
  
}


void GasBlender::changedFinal(int){
  if (spinBox_O2f->value() == 32 && spinBox_Hef->value() == 0)
    comboBoxFinal->setCurrentIndex(1);
  else if (spinBox_O2f->value() == 50 && spinBox_Hef->value() == 0)
    comboBoxFinal->setCurrentIndex(2);
  else if (spinBox_O2f->value() == 25 && spinBox_Hef->value() == 25)
    comboBoxFinal->setCurrentIndex(3);
  else if (spinBox_O2f->value() == 35 && spinBox_Hef->value() == 25)
    comboBoxFinal->setCurrentIndex(4);
  else if (spinBox_O2f->value() == 30 && spinBox_Hef->value() == 30)
    comboBoxFinal->setCurrentIndex(5);
  else if (spinBox_O2f->value() == 21 && spinBox_Hef->value() == 35)
    comboBoxFinal->setCurrentIndex(6);
  else if (spinBox_O2f->value() == 18 && spinBox_Hef->value() == 45)
    comboBoxFinal->setCurrentIndex(7);
  else if (spinBox_O2f->value() == 15 && spinBox_Hef->value() == 55)
    comboBoxFinal->setCurrentIndex(8);
  else if ((spinBox_O2f->value() == 10) && (spinBox_Hef->value() == 70))
    comboBoxFinal->setCurrentIndex(9);
  else
    comboBoxFinal->setCurrentIndex(0);
  
}


void GasBlender::setInitMix(int idx){
  if (idx == 1){
    spinBox_O2i->setValue(32.0);
    spinBox_Hei->setValue(0.0);
    
  }else if (idx ==2){
    spinBox_O2i->setValue(50.0);
    spinBox_Hei->setValue(0.0);
  }else if (idx ==3){
    spinBox_O2i->setValue(25.0);
    spinBox_Hei->setValue(25.0);
  }else if (idx ==4){
    spinBox_O2i->setValue(35.0);
    spinBox_Hei->setValue(25.0);
  }else if (idx ==5){
    spinBox_O2i->setValue(30.0);
    spinBox_Hei->setValue(30.0);
  }else if (idx ==6){
    spinBox_O2i->setValue(21.0);
    spinBox_Hei->setValue(35.0);
  }else if (idx ==7){
    spinBox_O2i->setValue(18.0);
    spinBox_Hei->setValue(45.0);
  }else if (idx ==8){
    spinBox_O2i->setValue(15.0);
    spinBox_Hei->setValue(55.0);
  }else if (idx ==9){
    spinBox_O2i->setValue(10.0);
    spinBox_Hei->setValue(70.0);
    
  }
  //  comboBoxInitial->setCurrentIndex(0);
}
void GasBlender::setFinalMix(int idx){
  if (idx == 1){
    spinBox_O2f->setValue(32);
    spinBox_Hef->setValue(0);
  }else if (idx ==2){
    spinBox_O2f->setValue(50);
    spinBox_Hef->setValue(0);
  }else if (idx ==3){
    spinBox_O2f->setValue(25);
    spinBox_Hef->setValue(25);
  }else if (idx ==4){
    spinBox_O2f->setValue(35);
    spinBox_Hef->setValue(25);
  }else if (idx ==5){
    spinBox_O2f->setValue(30);
    spinBox_Hef->setValue(30);
  }else if (idx ==6){
    spinBox_O2f->setValue(21);
    spinBox_Hef->setValue(35);
  }else if (idx ==7){
    spinBox_O2f->setValue(18);
    spinBox_Hef->setValue(45);
  }else if (idx ==8){
    spinBox_O2f->setValue(15);
    spinBox_Hef->setValue(55);
  }else if (idx ==9){
    spinBox_O2f->setValue(10);
    spinBox_Hef->setValue(70);
  }
  //comboBoxFinal->setCurrentIndex(0);
}

void GasBlender::costs(){
  CostsDialog dialog(this);
  dialog.exec();
}

void GasBlender::readSettings(){
  QSettings settings("OpenSource", "Gas Blender");
  QPoint pos = settings.value("pos", QPoint(100,100)).toPoint();
  move(pos);
 
}
void GasBlender::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addSeparator();
    fileMenu->addAction(quitAct);
    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(manualAct);
    helpMenu->addAction(documentationAct);
    helpMenu->addSeparator();
    helpMenu->addAction(aboutAct);
}


 void GasBlender::closeEvent(QCloseEvent *event)
 {
  
   event->accept();
   
 }
void GasBlender::manual(){
  QString path=QApplication::applicationDirPath()+"/documentation/manual.pdf";
  QDesktopServices::openUrl(QUrl::fromLocalFile(path));

}
void GasBlender::documentation(){
  QString path=QApplication::applicationDirPath()+"/documentation/gerg2004.pdf";
  QDesktopServices::openUrl(QUrl::fromLocalFile(path));
}


 void GasBlender::newFile()
 {
   spinBox_Pi->setValue(50);
   spinBox_Pf->setValue(200);
   spinBox_O2i->setValue(32.0);
   spinBox_O2f->setValue(32);
   spinBox_Hei->setValue(0.0);
   spinBox_Hef->setValue(0);
   spinBox_O2fill->setValue(21);
   lineEdit_Pi->clear();
   lineEdit_Pf->clear();
   lineEdit_PHe->clear();
   lineEdit_PO2->clear();
   lineEdit_Pfill->clear();
   costsButton->setEnabled(false);
   //best mix
   lineEdit_PiBM->clear();
   lineEdit_PfBM->clear();
   lineEdit_HeBM->clear();
   lineEdit_O2BM->clear();
   lineEdit_N2BM->clear();
   
}


 void GasBlender::createActions()
 {
     newAct = new QAction(tr("&New"), this);
     //     newAct->setIcon(QIcon(":/images/new.png"));     
     newAct->setShortcuts(QKeySequence::New);
     //newAct->setStatusTip(tr("Create a new file"));
     connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));

     aboutAct = new QAction(tr("&About"),this);
     // aboutAct->setStatusTip(tr("Show the application's About box"));
     connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

     manualAct = new QAction(tr("&Manual"),this);
     // aboutAct->setStatusTip(tr("Show the application's About box"));
     connect(manualAct, SIGNAL(triggered()), this, SLOT(manual()));

     documentationAct = new QAction(tr("&Documentation"),this);
     // aboutAct->setStatusTip(tr("Show the application's About box"));
     connect(documentationAct, SIGNAL(triggered()), this, SLOT(documentation()));


     //     aboutQtAct = new QAction(tr("About &Qt"), this);
     //aboutQtAct->setStatusTip(tr("Show the Qt library's About box"));
     //connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

     quitAct = new QAction(tr("&Quit"), this);
     quitAct->setShortcuts(QKeySequence::Quit);
     //     quitAct->setStatusTip(tr("Exit the application"));
     connect(quitAct, SIGNAL(triggered()), this, SLOT(close()));
 }
  
void GasBlender::bestmix(){
 
  QPalette pal;
  pal.setColor(QPalette::Text,Qt::black);
  lineEdit_PiBM->setPalette(pal);
  lineEdit_HeBM->setPalette(pal);
  lineEdit_O2BM->setPalette(pal);
  lineEdit_N2BM->setPalette(pal);
  lineEdit_PfBM->setPalette(pal);
  
  f_Hei=(double)(spinBox_Hei->value())/100.0;
  f_O2i=(double)(spinBox_O2i->value())/100.0;
  f_N2i=fabs(1.0-f_Hei-f_O2i);//must be Qt bug, in mixtures
  // that contains He and O2 you might get the value -0.00000 for N2 
  // try without fabs He=89% and O2=11%
  f_Hef=((double)spinBox_Hef->value())/100.0;
  f_O2f=((double)spinBox_O2f->value())/100.0;
  f_N2f=fabs(1.0-f_Hef-f_O2f); //must be Qt bug
  //double f_O2fill=(double)spinBox_O2fill->value()/100.0;;

  P_f = (double)spinBox_Pf->value();
  P_i = (double)spinBox_Pi->value();
  //eps=1E-14;
  // printf("eps %.15lf\n",eps);
  double Ptemp=P_i;
  double f_HeBM,f_O2BM,f_N2BM;
  QString string;

  
  if (radioButtonIdealBM->isChecked()){
    statusBar()->showMessage(tr("Ideal gas"));
    //idealgas calculation
    ni = P_i; // for ideal gas does not matter if you calculate in moles or in pressure, function newtonIteration takes moles
    nf = P_f;
    P_i = newtonIterationBestMix(); // this routine calculates new P_i in case you need to reduce the pressure

    if (Ptemp != P_i){
      pal.setColor(QPalette::Text,Qt::red);
      lineEdit_PiBM->setPalette(pal);
    } 
  
    
    if (P_i <=0.0){
      P_i=0.0;
      f_HeBM = f_Hef;
      f_O2BM = f_O2f;
      f_N2BM = f_N2f;

    }else{
      double deltaP = P_f-P_i;
      f_HeBM = (P_f*f_Hef-P_i*f_Hei)/deltaP;
      f_O2BM = (P_f*f_O2f-P_i*f_O2i)/deltaP;
      f_N2BM = 1.0-f_HeBM-f_O2BM;
    }


      
  }else{
    statusBar()->showMessage(tr("Real gas"));
    //real gas calculation

    double R= 0.08314472;;
    double T=(double)spinBoxTBM->value()+273.15;    
    
    Gerg2004 z;
    
    ni=P_i/(z.z_GERG2004(f_O2i,f_Hei,P_i,T)*R*T);
    nf=P_f/(z.z_GERG2004(f_O2f,f_Hef,P_f,T)*R*T);
    double  nfO2 = nf*f_O2f;
    double  nfHe = nf*f_Hef;
    double  nfN2 = nf*f_N2f;
    double dnHe,dnO2,dnN2;
    double ntemp=ni;
   
    ni = newtonIterationBestMix();

    if (ntemp != ni){
      pal.setColor(QPalette::Text,Qt::red);
      lineEdit_PiBM->setPalette(pal);
  } 
    
    if (ni <=0){
      P_i=0.0;
      f_HeBM = f_Hef;
      f_O2BM = f_O2f;
      f_N2BM = f_N2f;
    }else{
      double niO2 = ni*f_O2i;
      double niHe = ni*f_Hei;
      double niN2 = ni*f_N2i;
      double zold,znew=1.0;
      P_i =ni*znew*R*T; 
      do{ 
	zold=znew;
	znew=z.z_GERG2004(f_O2i,f_Hei,P_i,T);
	P_i=ni*znew*R*T;
      }while(fabs(znew-zold)>=eps);

      dnHe=nfHe-niHe;
      dnO2=nfO2-niO2;
      dnN2=nfN2-niN2;
      double ntotBM = dnHe+dnO2+dnN2;
      f_HeBM = dnHe/ntotBM;
      f_O2BM = dnO2/ntotBM;
      f_N2BM = 1.0-f_HeBM-f_O2BM;
    }
    
  }
  //    printf("P_i %lf\n",P_i);
  lineEdit_PiBM->setText(string.sprintf("%.0f",  P_i));
  lineEdit_HeBM->setText(string.sprintf("%.0f",  fabs(f_HeBM*100.0)));
  lineEdit_O2BM->setText(string.sprintf("%.0f",  fabs(f_O2BM*100.0)));
  lineEdit_N2BM->setText(string.sprintf("%.0f",  fabs(f_N2BM*100.0)));
  lineEdit_PfBM->setText(QString::number(spinBox_Pf->value()));


  }


double GasBlender::newtonIterationMixing(){
  double minimum,temp;
  double dnHe,dnfill,dnO2;
  do{
    minimum=0.0;
    dnHe=nf*f_Hef-ni*f_Hei;
    if (f_Hei !=0.0)
      temp=dnHe/f_Hei;
    else temp =0.0;
    if (temp < minimum) minimum = temp;
    dnfill = (nf*f_N2f - ni*f_N2i)/(1.0-f_O2fill);
    if (f_N2i != 0.0) 
      temp=dnfill*(1.0-f_O2fill)/f_N2i;    
    else temp=0.0;
    if (temp < minimum) minimum = temp;
    dnO2 = (nf*(f_O2f-f_O2fill)+ni*(f_O2fill-f_O2i)+f_O2fill*dnHe)/(1.0-f_O2fill);
    if (f_O2i != 0.0) 
      temp=dnO2/f_O2i;
    else temp =0.0;
    if ( temp<minimum ) minimum = temp;
    ni+=minimum;
  }while (minimum < -1E-4 && ni > 0.0 );

  return ni;
}

double GasBlender::newtonIterationBestMix(){

  double dnHe,dnN2,dnO2;
  double minimum,temp;
  do{
    minimum=0.0;
    dnHe=nf*f_Hef-ni*f_Hei;
    if (f_Hei !=0.0)
      temp=dnHe/f_Hei;
    else temp =0.0;
    if (temp < minimum) minimum = temp;
    dnN2 = (nf*f_N2f - ni*f_N2i);
    if (f_N2i != 0.0) 
      temp=dnN2/f_N2i;    
    else temp=0.0;
    if (temp < minimum) minimum = temp;
    dnO2 = nf*f_O2f-ni*f_O2i;
    if (f_O2i != 0.0) 
      temp=dnO2/f_O2i;
    else temp =0.0;
    if ( temp<minimum ) minimum = temp;
    ni+=minimum;
  }while (minimum < -eps && ni > 0.0 );
  
  return ni;
}


void GasBlender::calculate(){
  QPalette pal;
  pal.setColor(QPalette::Text,Qt::black);
  lineEdit_Pi->setPalette(pal);
  lineEdit_PHe->setPalette(pal);
  lineEdit_PO2->setPalette(pal);
  lineEdit_Pfill->setPalette(pal);
  lineEdit_Pf->setPalette(pal);
  
   f_Hei=(double)(spinBox_Hei->value())/100.0;
   f_O2i=(double)(spinBox_O2i->value())/100.0;
   f_N2i=fabs(1.0-f_Hei-f_O2i);//must be Qt bug, in mixtures
  // that contains He and O2 you might get the value -0.00000 for N2 
  // try without fabs He=89% and O2=11%
   f_Hef=((double)spinBox_Hef->value())/100.0;
   f_O2f=((double)spinBox_O2f->value())/100.0;
   f_N2f=fabs(1.0-f_Hef-f_O2f); //must be Qt bug
   f_O2fill=(double)spinBox_O2fill->value()/100.0;;

  P_f = (double)spinBox_Pf->value();
  P_i = (double)spinBox_Pi->value();
  //  eps=1E-14;
  
  if (radioButtonIdeal->isChecked()){
    statusBar()->showMessage(tr("Ideal gas"));
    //idealgas calculation
    double Ptemp=P_i;
    ni=P_i;
    nf=P_f;
    P_i = newtonIterationMixing();
    if (Ptemp != P_i){
      pal.setColor(QPalette::Text,Qt::red);
      lineEdit_Pi->setPalette(pal);
    } 
    
    if (P_i < -0.001){
      costsButton->setEnabled(false);
      lineEdit_Pi->clear();
      lineEdit_PHe->clear();
      lineEdit_PO2->clear();
      lineEdit_Pfill->clear();
      lineEdit_Pf->clear();
      QMessageBox warningBox;
      warningBox.setWindowTitle("Information:");
      warningBox.setText("You can not create final mixture from initial conditions using selected O2/N2 mix as a fill mixture. Change O2/N2 mixture.");
      warningBox.exec();
    }else{
      costsButton->setEnabled(true);
      PHe = f_Hef*P_f-f_Hei*P_i;
      PO2 = (P_f*(f_O2f-f_O2fill) + P_i*(f_O2fill-f_O2i) + f_O2fill*PHe) /
	(1.0-f_O2fill);
      Pfill = P_f-PHe-PO2-P_i;

      P_i=roundf(100.0*fabs(P_i))/100.0;
      PHe=roundf(100.0*fabs(PHe))/100.0;
      PO2=roundf(100.0*fabs(PO2))/100.0;
      Pfill=roundf(100.0*fabs(Pfill))/100.0;
      QString string;
      lineEdit_Pi->setText(string.sprintf("%.2f",   P_i));
      lineEdit_PHe->setText(string.sprintf("%.2f",  PHe));
      lineEdit_PO2->setText(string.sprintf("%.2f",  PO2));
      lineEdit_Pfill->setText(string.sprintf("%.2f",Pfill));
      lineEdit_Pf->setText(QString::number(spinBox_Pf->value()));
    }
  }else{
    //real gas calculation
   
    
  double R= 0.08314472;;
  double T=(double)spinBox_T->value()+273.15;    
  
  Gerg2004 z;
            
  ni=P_i/(z.z_GERG2004(f_O2i,f_Hei,P_i,T)*R*T);
  nf=P_f/(z.z_GERG2004(f_O2f,f_Hef,P_f,T)*R*T);
  double  nfO2 = nf*f_O2f;
  double  nfHe = nf*f_Hef;
  double  nfN2 = nf*f_N2f;
  double dnHe,dnO2,dnN2;
  double ntemp=ni;

  ni=newtonIterationMixing();
  if (ntemp != ni){
    pal.setColor(QPalette::Text,Qt::red);
    lineEdit_Pi->setPalette(pal);
  } 
  
  if (ni < -1E-4){
    costsButton->setEnabled(false);
    lineEdit_Pi->clear();
    lineEdit_PHe->clear();
    lineEdit_PO2->clear();
    lineEdit_Pfill->clear();
    lineEdit_Pf->clear();
    QMessageBox warningBox;
    warningBox.setWindowTitle(tr("Information:"));
    warningBox.setText(tr("You can not create final mixture from initial conditions using selected O2/N2 mix as a fill mixture. Change O2/N2 mixture."));
    warningBox.exec();
  }else{
    costsButton->setEnabled(true);
    double niO2 = ni*f_O2i;
    double niHe = ni*f_Hei;
    double niN2 = ni*f_N2i;
    double zold,znew=1.0;
    double P_i =ni*znew*R*T; 
    do{ 
      zold=znew;
      znew=z.z_GERG2004(f_O2i,f_Hei,P_i,T);
      P_i=ni*znew*R*T;
    }while(fabs(znew-zold)>=eps);
    
    dnHe=nfHe-niHe;
    dnO2=nfO2-niO2;
    dnN2=nfN2-niN2;
    double Ptemp=P_i;
    double fO2,fHe;
    if (checkBoxHe->isChecked()){
      statusBar()->showMessage(tr("Real gas: Fill gases in the following order:    He, O2, O2/N2 mix"));
      //firstly fill He
      double n1=ni+dnHe;
      if (n1!=0.0){
      fO2=niO2/n1;
      fHe=(niHe+dnHe)/n1;
      }else{
	fO2=0.0;
	fHe=0.0;
      }
	//      printf("new n1 %lf ni %lf dnHe %lf fO2 %lf fHe %lf\n",n1,ni,dnHe,fO2,fHe);
      double zold,znew=1.0;
      
      double P =n1*znew*R*T; 
      do{ 
	zold=znew;
	znew=z.z_GERG2004(fO2,fHe,P,T);
	P=n1*znew*R*T;
      }while(fabs(znew-zold)>=eps);
      //      printf("fHe %lf z %lf\n",fHe,z.z_GERG2004(fO2,fHe,P,T));
      //printf("P %lf n1 %1.14lf z %lf fHe %lf fO2 %lf\n",P,n1, znew,fHe,fO2); 
      
      Ptemp=P;
      PHe =Ptemp-P_i;
      
      
      //then fill O2
      double dnfill = dnN2 / (1.0-f_O2fill);
      double dnO2_from_fill = dnfill*f_O2fill;
      double dnO2_from_O2bank = dnO2-dnO2_from_fill;
      
      double n2 = n1+dnO2_from_O2bank;
      fO2=(niO2+dnO2_from_O2bank)/n2;
      fHe=(niHe+dnHe)/n2;
      znew=1.0;
      P =znew*n2*R*T; 
      do{ 
	zold=znew;
	znew=z.z_GERG2004(fO2,fHe,P,T);
	P=n2*znew*R*T;
      }while(fabs(znew-zold)>=eps);
      PO2=P-Ptemp;
      //the rest is N2/O2 mix
      Pfill=P_f-P;
    }else{
      statusBar()->showMessage(tr("Real gas: Fill gases in the following order:    O2, He, O2/N2 mix"));
      //firstly fill oxygen
      double dnfill = dnN2 / (1.0-f_O2fill);
      double dnO2_from_fill = dnfill*f_O2fill;
      double dnO2_from_O2bank = dnO2-dnO2_from_fill;
      
      double n1=ni+dnO2_from_O2bank;
      if (n1!=0.0){
      fO2=(niO2+dnO2_from_O2bank)/n1;
      fHe=niHe/n1;
      }else{
	fO2=0.0;
	fHe=0.0;
      }
      double zold,znew=1.0;
      double P =n1*znew*R*T; 
      do{ 
	zold=znew;
	znew=z.z_GERG2004(fO2,fHe,P,T);
	P=n1*znew*R*T;
      }while(fabs(znew-zold)>=eps);
      //      printf("fHe %lf z %lf\n",fHe,z.z_GERG2004(fO2,fHe,P,T));
      //printf("P %lf n1 %lf T %lf\n",P,n1, T); 
      Ptemp=P;
      PO2 =Ptemp-P_i;
      //then fill He
      
      double n2 = n1+dnHe;
      fO2=(niO2+dnO2_from_O2bank)/n2;
      fHe=(niHe+dnHe)/n2;
      znew=1.0;
      P =znew*n2*R*T; 
      do{ 
	zold=znew;
	znew=z.z_GERG2004(fO2,fHe,P,T);
	P=n2*znew*R*T;
      }while(fabs(znew-zold)>=eps);
      PHe=P-Ptemp;
      //the rest is N2/O2 mix
      Pfill=P_f-P;
    }
  
    P_i=roundf(100.0*fabs(P_i))/100.0;
    PHe=roundf(100.0*fabs(PHe))/100.0;
    PO2=roundf(100.0*fabs(PO2))/100.0;
    Pfill=roundf(100.0*fabs(Pfill))/100.0;
    QString string;
    lineEdit_Pi->setText(string.sprintf("%.2f",   P_i));
    lineEdit_PHe->setText(string.sprintf("%.2f",  PHe));
    lineEdit_PO2->setText(string.sprintf("%.2f",  PO2));
    lineEdit_Pfill->setText(string.sprintf("%.2f",Pfill));
    lineEdit_Pf->setText(QString::number(spinBox_Pf->value()));
    
  }
  
  }
  
}

void GasBlender::about()
 {

   //   QMessageBox::about(this, tr("About Gas-Blender GUI\n"),
		   			 
  
   QMessageBox::about(this, tr("About GasBlender\n"),
		      tr(//"<table border=0><tr> "
			 //"<td>  <img src=:/images/logo.jpg></td>"
			 "<h2>GasBlender 1.0 </h2>"

			 "<p> Copyright &copy; 2011 DIR Slovenia "
			 "<p> <b>WARNING: Always analyze the final mix.</b>"
			 "<p>Program GasBlender is part of "
			 "Open Source project and was written in Qt. "
			 "The GasBlender version 1.0 is still under construction and "
			 "testing period. You can use ideal gas or real gas equation "
			 "of state. " 
			 "To our knowledge GERG 2004  is the best model " 
			 "for the thermodynamic properties calculations of gases in "
			 "the sense of the most precise result. "
			 "If you find a bug or do you have a suggestion, do not "
			 "hesistate to contact us (alan.bizjak@gmail.com). "
			 
			 
			 "<p>GERG2004 reference: Kunz, O.; Klimeck, R.; Wagner, W.;"
			 "Jaeschke, M. (2007): The GERG 2004 Wide Range Equation of "
			 "State for Natural Gases and Other Mixtures: GERG Technical "
			 "Monograph 15 (2007) and Fortschr. Ber. VDI, Reihe 6, Nr. 557,"
			 "VDI Verlag, Duesseldorf, 2007."
			 "<p>The partial GERG 2004 implementation used to "
			 "calculate the compressibility factors of oxygen, helium, "
			 "nitrogen and their mixtures in the gas phase was inspired by "
			 "open source code written by David de Marneffe in December "
			 "2007.  David can be contacted at daviddemarneffe@yahoo.com"
			 
			 "<p>  It is free software; you can redistribute it "
			 "and/or modify it under the terms of the GNU General Public "
			 "License as published by the Free Software Foundation; either "
			 "version 3 of the license, or (at your option) any later "
			 "version."
			 "<p> Authors: "
			 " source code: Alan Bizjak; "
			 " documentation and images: Gregor Trefalt" ));
		      
 }


void GasBlender::setHeiSpinBox(int value){
  spinBox_Hei->setValue((double)(value));
}
void GasBlender::setO2iSpinBox(int value){
  //double value_double = (double) value;
  spinBox_O2i->setValue((double)(value));
}



void GasBlender::setMaxO2Init(double value){
  double test = spinBox_Hei->value()+spinBox_O2i->value();
   if (test > 100.0)
    spinBox_O2i->setValue(100.0-value);
}
void GasBlender::setMaxHeInit(double value){
  double test = spinBox_Hei->value()+spinBox_O2i->value();
 
  if (test > 100.0)
    spinBox_Hei->setValue(100.0-value);
}

void GasBlender::setMaxO2Final(int value){
  int test = spinBox_Hef->value()+spinBox_O2f->value();
 
  if (test > 100)
    spinBox_O2f->setValue(100-value);
}
void GasBlender::setMaxHeFinal(int value){
  int test = spinBox_Hef->value()+spinBox_O2f->value();
 
  if (test > 100)
    spinBox_Hef->setValue(100-value);
}
