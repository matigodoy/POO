#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include "login.h"
#include "form.h"

class Manager : public QObject  {
    Q_OBJECT

public:
    Manager( QObject * parent = nullptr );
    ~Manager();

    void iniciar();


private:
    Ingreso * login;
    Form * form;

private slots:
    void slot_usuarioLoguedo();

};

#endif // MANAGER_H
