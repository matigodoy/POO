#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <admindb.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void CTU(); //CREAR TABLA DATABASE

    void IUser(); //INGRESAR DATABSE

    void EUser(); //ELIMINAR DATABASE

    void MD(); //MOSTRAR DATOS

    //AdminDB( QObject * parent = nullptr );

    QSqlDatabase getDB();

private slots:
    void on_pbAgregar_clicked();

    void on_pbEliminar_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
