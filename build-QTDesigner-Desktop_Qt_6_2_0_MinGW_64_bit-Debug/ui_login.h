/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leUsuario;
    QLineEdit *leClave;
    QLabel *lUsuario;
    QLabel *lClave;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_login;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1196, 595);
        QIcon icon;
        icon.addFile(QString::fromUtf8("UBP.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        leUsuario = new QLineEdit(Login);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));

        gridLayout->addWidget(leUsuario, 0, 1, 1, 3);

        leClave = new QLineEdit(Login);
        leClave->setObjectName(QString::fromUtf8("leClave"));
        leClave->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(leClave, 1, 1, 1, 3);

        lUsuario = new QLabel(Login);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(12);
        lUsuario->setFont(font);
        lUsuario->setTextFormat(Qt::AutoText);
        lUsuario->setMargin(10);
        lUsuario->setIndent(-1);

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        lClave = new QLabel(Login);
        lClave->setObjectName(QString::fromUtf8("lClave"));
        lClave->setFont(font);
        lClave->setMargin(10);

        gridLayout->addWidget(lClave, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        pb_login = new QPushButton(Login);
        pb_login->setObjectName(QString::fromUtf8("pb_login"));
        pb_login->setMinimumSize(QSize(100, 0));
        pb_login->setFont(font);
        pb_login->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(pb_login, 2, 2, 1, 1);

        QWidget::setTabOrder(leUsuario, leClave);
        QWidget::setTabOrder(leClave, pb_login);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        lUsuario->setText(QCoreApplication::translate("Login", "Usuario", nullptr));
        lClave->setText(QCoreApplication::translate("Login", "Clave", nullptr));
        pb_login->setText(QCoreApplication::translate("Login", "Validar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
