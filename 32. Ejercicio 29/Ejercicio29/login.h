#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include "admindb.h"


class Login : public QWidget  {
    Q_OBJECT

public:
    Login();
    ~Login();

private:
    QLabel * lUsuario;
    QLabel * lClave;
    QLineEdit * leUsuario;
    QLineEdit * leClave;
    QLabel * lValidar;
    //QPushButton * pb;

    QGridLayout * layout;

    AdminDB * adminDB;

private slots:
    void slot_validar();
    void slot_cerrar(QString);

signals:
    void signal_usuarioLogueado( QString );

};


#endif // LOGIN_H
