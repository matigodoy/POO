#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include "admindb.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Ventana; }
QT_END_NAMESPACE

class Ventana : public QWidget
{
    Q_OBJECT

public:
    Ventana(QWidget *parent = nullptr);
    ~Ventana();

private:
    Ui::Ventana *ui;

    AdminDB * adminDB;

private slots:
    void slot_conectarDB();
    void slot_ejecutarSQL();
};
#endif // VENTANA_H
