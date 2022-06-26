/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLineEdit *leUsuario;
    QLineEdit *leClave;
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
        Login->setStyleSheet(QString::fromUtf8("background-image: url(C:/Users/Mati_/Desktop/bg.png)"));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        leUsuario = new QLineEdit(Login);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));

        gridLayout_2->addWidget(leUsuario, 0, 0, 1, 1);

        leClave = new QLineEdit(Login);
        leClave->setObjectName(QString::fromUtf8("leClave"));
        leClave->setAcceptDrops(true);
        leClave->setFrame(false);
        leClave->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(leClave, 1, 0, 1, 1);

        pb_login = new QPushButton(Login);
        pb_login->setObjectName(QString::fromUtf8("pb_login"));
        pb_login->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(12);
        pb_login->setFont(font);
        pb_login->setFocusPolicy(Qt::NoFocus);
        pb_login->setFlat(true);

        gridLayout_2->addWidget(pb_login, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        pb_login->setText(QCoreApplication::translate("Login", "Validar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
