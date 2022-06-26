#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Ventana; }
QT_END_NAMESPACE

class Ventana : public QWidget
{
    Q_OBJECT

public:
    Ventana(QWidget *parent = nullptr);
    ~Ventana();

private:
    Ui::Ventana *ui;
    QLabel marta;
};
#endif // VENTANA_H
