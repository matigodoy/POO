#include <QApplication>
#include "login.h"

int main(int argc, char ** argv) {
    QApplication a(argc,argv);

    Login login;
    login.setWindowTitle("Login");
    login.resize(250,120);
    login.show();

    return a.exec();
}
