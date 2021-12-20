#include "mainwindow.h"
#include "maincore.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    main_core();
    MainWindow w;
    w.show();
    return a.exec();
}
