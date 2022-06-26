#ifndef LOGIN_HPP
#define LOGIN_HPP

#include <QWidget>
#include <QLineEdit>
#include <QPalette>
#include <QResizeEvent>

#include "datamanager.hpp"

class Question;

namespace Ui
{
    class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login( QWidget *parent = NULL );
    ~Login();

private:
    Ui::Login *ui;

    Question * question;

protected:
    void resizeEvent( QResizeEvent* );

private slots:
    void lineEditChanged( QString );
    void start();
    bool validateFields();
    void showLogin(QString id_usuario, QString usuario, QString nombre, QString apellido, QString mail );
    void slot_mostrarInstrucciones();
};

#endif // LOGIN_HPP
