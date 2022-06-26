#include <QPainter>
#include <QResizeEvent>
#include "login.h"
#include "ui_login.h"

Login::Login(QWidget * parent) : QWidget(parent), ui(new Ui::Login), manager(new QNetworkAccessManager(this)) {
    ui->setupUi(this);

    ui->leUsuario->setFocus();

    connect( manager, SIGNAL( finished( QNetworkReply *)), this, SLOT( slot_descargaFinalizada( QNetworkReply * ) ) );

    QUrl url( "https://coecadiz.com/wp-content/uploads/2018/06/fondo-login-web.jpg");
    QNetworkRequest request ( url );

    manager->get(request);
}

Login::~Login() {
    delete ui;
}

void Login::paintEvent(QPaintEvent *) {
    QPainter painter( this );
    painter.drawImage( 0, 0, this->imageEscalada);
}

void Login::resizeEvent(QResizeEvent * e) {
    this->imageEscalada = this->imageOriginal.scaled(this->width(), this->height());
}

void Login::slot_descargaFinalizada(QNetworkReply *reply) {
    this->imageOriginal = QImage::fromData( reply->readAll() );

    this->imageEscalada = this->imageOriginal.scaled(this->width(), this->height());

    this->repaint();
}
