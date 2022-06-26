#include "login.h"

#include <QApplication>
#include <QBrush>
#include <QHBoxLayout>
#include <QPalette>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Login login;
    login.show();

    return a.exec();
}
