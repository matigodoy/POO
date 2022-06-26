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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "image.hpp"

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    Image *background;
    QGridLayout *gridLayout_3;
    QPushButton *startButton;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    Image *logo;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *leUsuario;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *leCelular;
    QPushButton *pbInstrucciones;
    QFrame *separator;
    QLabel *errorLabel;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(343, 453);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        background = new Image(Login);
        background->setObjectName(QString::fromUtf8("background"));
        gridLayout_3 = new QGridLayout(background);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(10);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(background);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        gridLayout_3->addWidget(startButton, 8, 1, 1, 1);

        label = new QLabel(background);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 5, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 4, 0, 1, 3);

        logo = new Image(background);
        logo->setObjectName(QString::fromUtf8("logo"));
        gridLayout_2 = new QGridLayout(logo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);


        gridLayout_3->addWidget(logo, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 8, 0, 1, 1);

        leUsuario = new QLineEdit(background);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));
        leUsuario->setMaxLength(50);

        gridLayout_3->addWidget(leUsuario, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 8, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 10, 0, 1, 3);

        leCelular = new QLineEdit(background);
        leCelular->setObjectName(QString::fromUtf8("leCelular"));
        leCelular->setMaxLength(50);
        leCelular->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(leCelular, 7, 1, 1, 1);

        pbInstrucciones = new QPushButton(background);
        pbInstrucciones->setObjectName(QString::fromUtf8("pbInstrucciones"));

        gridLayout_3->addWidget(pbInstrucciones, 12, 1, 1, 1);

        separator = new QFrame(background);
        separator->setObjectName(QString::fromUtf8("separator"));
        separator->setEnabled(false);
        separator->setFrameShape(QFrame::HLine);
        separator->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(separator, 3, 0, 1, 3);

        errorLabel = new QLabel(background);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        errorLabel->setWordWrap(true);

        gridLayout_3->addWidget(errorLabel, 11, 0, 1, 3);

        label_2 = new QLabel(background);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 6, 2, 1, 1);

        label_3 = new QLabel(background);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 7, 0, 1, 1);


        gridLayout->addWidget(background, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        startButton->setText(QCoreApplication::translate("Login", "Inicia sesi\303\263n", nullptr));
        label->setText(QCoreApplication::translate("Login", "Inicia sesi\303\263n", nullptr));
        leUsuario->setText(QString());
        leUsuario->setPlaceholderText(QCoreApplication::translate("Login", "Mail UBP", nullptr));
        leCelular->setText(QString());
        leCelular->setPlaceholderText(QCoreApplication::translate("Login", "Celular", nullptr));
        pbInstrucciones->setText(QCoreApplication::translate("Login", "Info", nullptr));
        errorLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Login", "@ubp.edu.ar", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "+54 9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
