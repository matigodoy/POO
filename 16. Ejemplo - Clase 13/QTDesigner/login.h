#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QImage>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget {
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private:
    QNetworkAccessManager * manager;
    QImage imageOriginal;
    QImage imageEscalada;
    Ui::Login * ui;

protected:
    void paintEvent( QPaintEvent * );
    void resizeEvent(QResizeEvent * e);

private slots:
    void slot_descargaFinalizada( QNetworkReply * reply );

};

#endif // LOGIN_H
