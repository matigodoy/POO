/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "boton.h"

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLabel *lUsuario;
    QLabel *lClave;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leClave;
    QLineEdit *leUsuario;
    Boton *pbLabel;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(377, 171);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lUsuario = new QLabel(Login);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        lClave = new QLabel(Login);
        lClave->setObjectName(QString::fromUtf8("lClave"));

        gridLayout->addWidget(lClave, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        leClave = new QLineEdit(Login);
        leClave->setObjectName(QString::fromUtf8("leClave"));
        leClave->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leClave, 1, 2, 1, 2);

        leUsuario = new QLineEdit(Login);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));
        leUsuario->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(leUsuario, 0, 2, 1, 2);

        pbLabel = new Boton(Login);
        pbLabel->setObjectName(QString::fromUtf8("pbLabel"));
        pbLabel->setMaximumSize(QSize(50, 25));

        gridLayout->addWidget(pbLabel, 2, 0, 1, 1);

        QWidget::setTabOrder(leUsuario, leClave);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        lUsuario->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        lClave->setText(QCoreApplication::translate("Login", "Clave", nullptr));
        leClave->setText(QCoreApplication::translate("Login", "1234", nullptr));
        leUsuario->setText(QCoreApplication::translate("Login", "fede", nullptr));
        pbLabel->setText(QCoreApplication::translate("Login", "Validar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
