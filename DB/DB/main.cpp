#include <QApplication>

#include "mainwindow.h"
#include "login.h"
#include "admindb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login Login;
    Login.show();
    MainWindow w;
    w.hide();
    w.show();
    return a.exec();
}
