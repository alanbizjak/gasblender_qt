#include <QtGui>

#include "costsdialog.h"
#include "gasblender.h"
#include "globalvar.h"

CostsDialog::CostsDialog(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);


    openXMLcosts();
    // regular expression allow only float to write into lineEdit
    QRegExp regExp("^[+]?[0-9]+([.][0-9]+)?$"); //positive float 
    //^[+]?([.][0-9]+|[0-9]+([.][0-9]+)?)$
    lineEditO2Price->setValidator(new QRegExpValidator(regExp,this));
    lineEditHePrice->setValidator(new QRegExpValidator(regExp,this));
    lineEditMixPrice->setValidator(new QRegExpValidator(regExp,this));
    lineEditTankVolume->setValidator(new QRegExpValidator(regExp,this));

    connect( calcCostsButton, SIGNAL(clicked()), this, SLOT( calculatecosts() ));
    connect(closeButton,SIGNAL(clicked()),this,SLOT(saveXMLcosts()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(accept()));

    
}
void CostsDialog::saveXMLcosts(){
   filename = "costsdata.xml";
   QFile file(filename);
   file.open(QIODevice::WriteOnly);
   
   QXmlStreamWriter xmlWriter(&file);
   xmlWriter.setAutoFormatting(true);
   xmlWriter.writeStartDocument();
   xmlWriter.writeStartElement("COSTSDATA");
   xmlWriter.writeTextElement("OxygenPricePerLiter",lineEditO2Price->text());
   xmlWriter.writeTextElement("HeliumPricePerLiter",lineEditHePrice->text());
   xmlWriter.writeTextElement("TopOffMixPrice",lineEditMixPrice->text());
   xmlWriter.writeTextElement("TankVolume",lineEditTankVolume->text());
   xmlWriter.writeEndElement();
   xmlWriter.writeEndDocument();
   file.close();
  
}

void CostsDialog::openXMLcosts(){
 
  filename = "costsdata.xml";
   QFile file(filename);
   if (file.open(QFile::ReadOnly | QFile::Text)){
     Rxml.setDevice(&file);
     Rxml.readNext();
	
     while(!Rxml.atEnd()){

	 if (Rxml.name() == "OxygenPricePerLiter")
	   {
	     lineEditO2Price->setText(Rxml.readElementText());
	   }
	 else if(Rxml.name() == "HeliumPricePerLiter")
	   {
	     lineEditHePrice->setText(Rxml.readElementText());
	   }
	 else if(Rxml.name() == "TopOffMixPrice")
	   {
	     lineEditMixPrice->setText(Rxml.readElementText());
	     }
	 else if(Rxml.name() == "TankVolume"){
	   lineEditTankVolume->setText(Rxml.readElementText());
	 }

       	 Rxml.readNext();
     }

     file.close();
   }
}



void CostsDialog::calculatecosts(){
  
  float priceO2, priceHe,priceMix,tankVolume;
  QString string=lineEditO2Price->text();
  priceO2=string.toFloat();
  string=lineEditHePrice->text();
  priceHe=string.toFloat();
  string=lineEditHePrice->text();
  priceHe=string.toFloat();
  string=lineEditMixPrice->text();
  priceMix=string.toFloat();
  string=lineEditTankVolume->text();
  tankVolume=string.toFloat();

  //extern float PHe,PO2;
  priceHe*=PHe*tankVolume;
  priceO2*=PO2*tankVolume;
  // priceMix*=Pfill*tankVolume;
  float totalPrice= priceO2+priceHe+priceMix;
  priceHe=roundf(100*priceHe)/100.0;
  priceO2=roundf(100*priceO2)/100.0;
  priceMix=roundf(100*priceMix)/100.0;
  totalPrice=roundf(100*totalPrice)/100.0;
  //QString string;
  textEditCosts->clear();
  textEditCosts->append("<b>Fill costs:</b>\n\n");
  textEditCosts->append("He costs: ");
  textEditCosts->append(string.sprintf("%.2f",   priceHe));
  textEditCosts->append("O2 costs: ");
  textEditCosts->append(string.sprintf("%.2f",   priceO2));
  textEditCosts->append("Mix costs: ");
  textEditCosts->append(string.sprintf("%.2f",   priceMix));
  textEditCosts->append("<b>Total costs: </b>");
  textEditCosts->append(string.sprintf("%.2f",   totalPrice));
  
}

