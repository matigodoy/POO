#ifndef FORMULARIO2_H
#define FORMULARIO2_H

#include <QDialog>

namespace Ui {
class Formulario2;
}

class Formulario2 : public QDialog
{
    Q_OBJECT

public:
    explicit Formulario2(QWidget *parent = nullptr);
    ~Formulario2();

private:
    Ui::Formulario2 *ui;

private slots:
    void on_pushButton_clicked();
    void on_pbAlta_clicked();
    void on_captcha_linkActivated(const QString &link);
};

#endif // FORMULARIO2_H
