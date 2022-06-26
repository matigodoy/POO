/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "barra.h"

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    Barra *barra;
    QLabel *lValor;
    QLineEdit *leUrl;
    QPushButton *pb;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(400, 254);
        barra = new Barra(Ventana);
        barra->setObjectName(QString::fromUtf8("barra"));
        barra->setGeometry(QRect(10, 190, 371, 41));
        lValor = new QLabel(barra);
        lValor->setObjectName(QString::fromUtf8("lValor"));
        lValor->setGeometry(QRect(336, 20, 31, 20));
        leUrl = new QLineEdit(Ventana);
        leUrl->setObjectName(QString::fromUtf8("leUrl"));
        leUrl->setGeometry(QRect(40, 50, 301, 21));
        pb = new QPushButton(Ventana);
        pb->setObjectName(QString::fromUtf8("pb"));
        pb->setGeometry(QRect(250, 90, 80, 21));

        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Form", nullptr));
        lValor->setText(QString());
        pb->setText(QCoreApplication::translate("Ventana", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
