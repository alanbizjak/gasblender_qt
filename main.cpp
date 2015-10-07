/*
  Do you have suggestion or comment? Do not hesistate to contact me. 
  alan.bizjak@gmail.com
 */

#include <QApplication>
//#include <QPlastiqueStyle>

#include "gasblender.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("plastique");
    //app.setStyle(QPlastiqueStyle);
    //    Ui::GasBlender ui;
    GasBlender *mainWin = new GasBlender;
    // ui.setupUi(mainWin);
    mainWin->show();
    return app.exec();
}
