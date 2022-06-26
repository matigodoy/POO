#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include "mainwindow.h"
#include "admindb.h"


class Login : public QWidget  {
    Q_OBJECT

public:
    Login();
    ~Login();
    QStringList validarUsuario( QString tabla, QString nombre, QString clave );

private:
    QLabel * lUsuario;
    QLabel * lClave;
    QLineEdit * leUsuario;
    QLineEdit * leClave;
    QPushButton * pb;
    QGridLayout * layout;
    MainWindow * mainWindow;
    AdminDB * adminDB;

private slots:
    void slot_validar();
};


#endif // LOGIN_H
