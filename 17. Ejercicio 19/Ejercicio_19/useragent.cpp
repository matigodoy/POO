#include "useragent.h"
#include "ui_useragent.h"
#include <QDebug>

UserAgent::UserAgent(QWidget *parent) : QWidget(parent), ui(new Ui::UserAgent) {
    ui->setupUi(this);

    ui->leURL->setFocus();

    connect(ui->pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
}

UserAgent::~UserAgent() {
    delete ui;
}

void UserAgent::slot_validar() {
    connect( manager, SIGNAL( finished( QNetworkReply *)), this, SLOT( slot_descargaFinalizada( QNetworkReply * ) ) );

    QUrl url(ui->leURL->text());
    QNetworkRequest request ( url );

    manager->get(request);
}

void UserAgent::slot_descargaFinalizada(QNetworkReply *reply) {

}
