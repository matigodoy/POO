#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QPainter>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QImage>

class Ventana : public QWidget {
    Q_OBJECT

public:
    Ventana ( QWidget * parent = nullptr);

private:
    QNetworkAccessManager * manager;
    QImage image;

protected:
    void paintEvent( QPaintEvent *);

private slots:
    void slot_descargaFinalizada( QNetworkReply * reply );

};

#endif // VENTANA_H
