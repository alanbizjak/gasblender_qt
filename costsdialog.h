#ifndef COSTSDIALOG_H
#define COSTSDIALOG_H

#include <QDialog>
#include<QXmlStreamReader>

#include "ui_costsdialog.h"


class CostsDialog : public QDialog, public Ui::CostsDialog
{
    Q_OBJECT

public:
    CostsDialog(QWidget *parent = 0);
    private slots:
    void calculatecosts();
    void saveXMLcosts();

 private:
    void openXMLcosts();
    QXmlStreamReader Rxml;
    QString filename;
};

#endif
