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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leArchivoDB;
    QSpacerItem *horizontalSpacer;
    QTextEdit *te;
    QPushButton *pbConectar;
    QLineEdit *leComandoSQL;
    QPushButton *pbEjecutar;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(445, 350);
        gridLayout = new QGridLayout(Ventana);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leArchivoDB = new QLineEdit(Ventana);
        leArchivoDB->setObjectName(QString::fromUtf8("leArchivoDB"));

        gridLayout->addWidget(leArchivoDB, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        te = new QTextEdit(Ventana);
        te->setObjectName(QString::fromUtf8("te"));

        gridLayout->addWidget(te, 2, 0, 1, 3);

        pbConectar = new QPushButton(Ventana);
        pbConectar->setObjectName(QString::fromUtf8("pbConectar"));
        pbConectar->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbConectar, 1, 0, 1, 1);

        leComandoSQL = new QLineEdit(Ventana);
        leComandoSQL->setObjectName(QString::fromUtf8("leComandoSQL"));

        gridLayout->addWidget(leComandoSQL, 3, 0, 1, 1);

        pbEjecutar = new QPushButton(Ventana);
        pbEjecutar->setObjectName(QString::fromUtf8("pbEjecutar"));
        pbEjecutar->setEnabled(false);

        gridLayout->addWidget(pbEjecutar, 3, 1, 1, 2);


        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Ventana", nullptr));
        leArchivoDB->setText(QCoreApplication::translate("Ventana", "../db/db_usuarios.sqlite", nullptr));
        pbConectar->setText(QCoreApplication::translate("Ventana", "Conectar", nullptr));
        leComandoSQL->setText(QCoreApplication::translate("Ventana", "SELECT * FROM usuarios;", nullptr));
        pbEjecutar->setText(QCoreApplication::translate("Ventana", "Ejecutar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
