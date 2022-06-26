#ifndef BOTON_H
#define BOTON_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

class Boton:public QWidget{
    Q_OBJECT


public:
    Boton();
    ~Boton();
    void Primer();


private:
    QPushButton * primer_boton;
    QPushButton * segundo_boton;
    QPushButton * tercer_boton;
    QLabel * segundo_label;

    QGridLayout * layout;

private slots:
    void Segunda();
    void Tercera();
};
#endif // BOTON_H
