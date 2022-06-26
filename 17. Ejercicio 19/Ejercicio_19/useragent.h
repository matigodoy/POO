#ifndef USERAGENT_H
#define USERAGENT_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

QT_BEGIN_NAMESPACE
namespace Ui { class UserAgent; }
QT_END_NAMESPACE

class UserAgent : public QWidget {
    Q_OBJECT

public:
    UserAgent(QWidget *parent = nullptr);
    ~UserAgent();

private:
    QNetworkAccessManager * manager;
    Ui::UserAgent *ui;

private slots:
    void slot_descargaFinalizada( QNetworkReply * reply );
    void slot_validar();
};
#endif // USERAGENT_H
