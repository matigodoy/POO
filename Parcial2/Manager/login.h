#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "admindb.h"

namespace Ui {
class Login;
}

class Ingreso : public QWidget
{
    Q_OBJECT

public:
    explicit Ingreso(QWidget *parent = nullptr);
    ~Ingreso();

private:
    Ui::Login *ui;
    QTimer * timer;
    AdminDB * adminDB;
    QImage imagen;


private slots:
    void slot_validar();
    void slot_ponerAsteriscos();
    void ocultarClave();

protected:
    void paintEvent( QPaintEvent * );

signals:
    void signal_usuarioLogueado();

};

#endif // LOGIN_H
