#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <admindb.h>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    void IUser(); //INGRESAR DATABSE

    void borrarTodo(); // Limpia los campos

    QSqlDatabase getDB();


private:
    Ui::Form *ui;
    AdminDB * adminDB;

private slots:
    void darAlta();

signals:
    void signal_volver();
};

#endif // FORM_H
