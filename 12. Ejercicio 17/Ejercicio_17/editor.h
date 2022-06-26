#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class Editor : public QWidget {
    Q_OBJECT

private:
    QTextEdit * texto;
    QLabel * etiqueta;
    QPushButton * boton;
    QLineEdit * le_borrar;
    QPushButton * boton_borrar;

    QGridLayout * layout_Editor;

public:
    Editor();

private slots:
    void slot_cantidad_letras();
    void slot_borrar_cadena();
};

#endif // EDITOR_H
