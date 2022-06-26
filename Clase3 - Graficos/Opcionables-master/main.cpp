#include "login.hpp"
#include <QApplication>
#include <QNetworkProxyFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QNetworkProxyFactory::setUseSystemConfiguration( true );

    Login w;
    w.show();

    return a.exec();
}
