#ifndef BOTON_H
#define BOTON_H

#include<QWidget>
#include<QPushButton>
#include<QLabel>
#include<QGridLayout>

class Boton : public QWidget{
    Q_OBJECT

public:
    Boton();
    ~Boton();

private:
    QPushButton * primer_bt;
    QPushButton * segundo_bt;
    QLabel * segundo_label;
    QPushButton * tercer_bt;

    QGridLayout * layout;

private slots:
    void segunda_instancia();
    void tercera_instancia();
};

#endif // BOTON_H
