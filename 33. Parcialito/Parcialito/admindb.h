#ifndef ADMINDB_H
#define ADMINDB_H

#include <QSqlDatabase>
#include <QString>
#include <QObject>

class AdminDB : public QObject
{
    Q_OBJECT
public:
    explicit AdminDB(QObject *parent = nullptr);

    bool conectar( QString archivoSqlite );

    QSqlDatabase getDB();

    QStringList validarUsuario( QString tabla, QString usuario, QString clave );

    void mostrarTabla( QString tabla );

private:
    QSqlDatabase db;
};

#endif // ADMINDB_H
