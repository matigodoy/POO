#ifndef BARRA_H
#define BARRA_H

#include <QWidget>
#include <QLabel>
#include <QDebug>

class Barra : public QWidget {
    Q_OBJECT

public:
    explicit Barra(QWidget *parent = nullptr);

    void setValor(int);

protected:
    void paintEvent(QPaintEvent * e);

private:
    int valor;
};

#endif // BARRA_H
