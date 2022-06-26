#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include "admindb.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

QT_BEGIN_NAMESPACE
namespace Ui { class Ventana; }
QT_END_NAMESPACE

class Ventana : public QWidget
{
    Q_OBJECT

public:
    Ventana(QWidget *parent = nullptr);
    ~Ventana();

    void CTU(); //CREAR TABLA DATABASE


    void MD(); //MOSTRAR DATOS


    QSqlDatabase getDB();


private:
    Ui::Ventana *ui;
    QSqlDatabase db2;

};
#endif // VENTANA_H
