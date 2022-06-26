#include "formulario2.h"
#include "ui_formulario2.h"
#include <QMessageBox>
#include <QString>
Formulario2::Formulario2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Formulario2)
{

    ui->setupUi(this);
    QString randomm = QString::number(rand()%(10000-0+1)+0);
    ui->captcha->text() = randomm;
}

Formulario2::~Formulario2()
{
    delete ui;
}


void Formulario2::on_pushButton_clicked()
{
    //if(ui->leNombre->text().isEmpty() == false && ui->leLegajo->text().isEmpty() == false && ui->leApellido->text().isEmpty() == false){
    //    QMessageBox::information(this,"Formulario","Los datos son correctos.");
    //   hide();
    //}
}


void Formulario2::on_pbAlta_clicked()
{
    ui->captcha->text() = QString::number(rand()%(10000-0+1)+0);
    if(ui->leNombre->text().isEmpty() == false && ui->leLegajo->text().isEmpty() == false && ui->leApellido->text().isEmpty() == false){
        QMessageBox::information(this,"Formulario","Los datos son correctos.");
       hide();
    }
}

void Formulario2::on_captcha_linkActivated(const QString &link)
{
    ui->label_3->text() = QString::number(rand()%(10000-0+1)+0);
}
