#include "mainwindow.h"
#include <QApplication>
#include "flipbutton.h"
#include "gridboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    
    return a.exec();
}
