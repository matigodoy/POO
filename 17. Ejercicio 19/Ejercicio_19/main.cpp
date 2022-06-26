#include "useragent.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    UserAgent w;
    w.show();
    return a.exec();
}
