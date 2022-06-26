#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent) : QWidget(parent), manager(new QNetworkAccessManager(this)), ui(new Ui::Ventana) {
    ui->setupUi(this);

    ui->leUrl->setText("https://autogestion.metrotel.com.ar/speedtest/archivo50MB.zip");
    connect(ui->pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
}

Ventana::~Ventana() {
    delete ui;
}

void Ventana::slot_validar(){
    QUrl url( ui->leUrl->text() );
    QNetworkRequest request ( url );
    QNetworkReply *reply = manager->get(request);
    connect(reply, SIGNAL(downloadProgress(qint64,qint64)) , this , SLOT(slot_progreso(qint64,qint64)));
}

void Ventana::slot_progreso(qint64 bytesRecibidos, qint64 bytesTotal){
    qDebug() << "Recibidos: " << bytesRecibidos << " | Totales: "<<bytesTotal;
    int valorint = bytesRecibidos*100/bytesTotal;
    QString valor = QString::number( valorint );
    ui->lValor->setText(valor+"%");
    ui->barra->setValor(valorint);

}
