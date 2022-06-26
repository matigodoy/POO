#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QNetworkReply>
#include <QNetworkAccessManager>

namespace Ui {
class Ventana;
}

class Ventana : public QWidget {
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = nullptr);
    ~Ventana();

private:
    QNetworkAccessManager * manager;
    Ui::Ventana *ui;

private slots:
    void slot_validar();
    void slot_progreso(qint64, qint64);
};

#endif // VENTANA_H
