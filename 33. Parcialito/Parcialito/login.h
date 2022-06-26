#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "admindb.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Ingreso : public QWidget
{
    Q_OBJECT

public:
    Ingreso(QWidget *parent = nullptr);
    ~Ingreso();

private:
    Ui::Login *ui;
    AdminDB * adminDB;

private slots:
    void slot_validar();

signals:
    void signal_usuario( QString );
};
#endif // LOGIN_H
