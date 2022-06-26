#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>

class Formulario : public QWidget {
    Q_OBJECT

public:
    Formulario();
    ~Formulario();

private:
    QLabel * lNombre;
    QLineEdit * leNombre;
    QLabel * lApellido;
    QLineEdit * leApellido;
    QLabel * lLegajo;
    QLineEdit * leLegajo;
    QPushButton * boton;

    QGroupBox * grupo;
    QLabel * l_TitleCaptcha;
    QLabel * lCaptcha;
    QLineEdit * leCaptcha;
    QGridLayout * layout_captha;

    QGridLayout * layout_formulario;

    void numeroCaptcha();

private slots:
    void slot_validar_alta();
};

#endif // FORMULARIO_H
