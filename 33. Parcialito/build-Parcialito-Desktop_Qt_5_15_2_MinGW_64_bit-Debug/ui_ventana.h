/********************************************************************************
** Form generated from reading UI file 'ventana.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_H
#define UI_VENTANA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QGridLayout *gridLayout;
    QLabel *lMostrar;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(400, 183);
        gridLayout = new QGridLayout(Ventana);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lMostrar = new QLabel(Ventana);
        lMostrar->setObjectName(QString::fromUtf8("lMostrar"));
        lMostrar->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lMostrar, 0, 0, 1, 1);


        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Ventana", nullptr));
        lMostrar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
