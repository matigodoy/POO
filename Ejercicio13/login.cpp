#include <QPainter>
#include <QResizeEvent>
#include "login.h"
#include "ui_login.h"

Login::Login(QWidget * parent) : QWidget(parent), ui(new Ui::Login), manager(new QNetworkAccessManager(this)) {
    ui->setupUi(this);

    ui->leUsuario->setFocus();

    connect( manager, SIGNAL( finished( QNetworkReply *)), this, SLOT( slot_descargaFinalizada( QNetworkReply * ) ) );
    //QUrl url( "file:///C:/Users/Mati_/Desktop/bg.png");
    //QNetworkRequest request ( url );

    //manager->get(request);
}

Login::~Login() {
    delete ui;
}

void Login::paintEvent(QPaintEvent *) {
QPainter painter( this );
painter.drawImage( 0, 0, this->image);
}

void Login::resizeEvent(QResizeEvent * e)
{

}

void Login::slot_descargaFinalizada(QNetworkReply *reply) {
//image = QImage::fromData( reply->readAll() );
//this->repaint();
}
