#ifndef EDITOR_H
#define EDITOR_H

#include<QWidget>
#include<QLabel>
#include<QTextEdit>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>

class Editor : public QWidget  {
    Q_OBJECT

private:
    QTextEdit * texto;
    QLabel * etiqueta;
    QPushButton * boton;
    QLineEdit * le;
    QPushButton * pbBorrar;

    QGridLayout * layout_Editor;

public:
    Editor();

private slots:
    void slot_cantidad_letras();
    void slot_borrarCadena();
};

#endif // EDITOR_H
