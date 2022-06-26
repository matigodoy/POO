/********************************************************************************
** Form generated from reading UI file 'useragent.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAGENT_H
#define UI_USERAGENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserAgent
{
public:
    QLineEdit *leURL;
    QTextEdit *tedit1;
    QTextEdit *tedit2;
    QLabel *label;
    QPushButton *pb;

    void setupUi(QWidget *UserAgent)
    {
        if (UserAgent->objectName().isEmpty())
            UserAgent->setObjectName(QString::fromUtf8("UserAgent"));
        UserAgent->resize(634, 524);
        leURL = new QLineEdit(UserAgent);
        leURL->setObjectName(QString::fromUtf8("leURL"));
        leURL->setGeometry(QRect(110, 60, 421, 24));
        tedit1 = new QTextEdit(UserAgent);
        tedit1->setObjectName(QString::fromUtf8("tedit1"));
        tedit1->setGeometry(QRect(130, 160, 371, 81));
        tedit2 = new QTextEdit(UserAgent);
        tedit2->setObjectName(QString::fromUtf8("tedit2"));
        tedit2->setGeometry(QRect(130, 290, 371, 81));
        label = new QLabel(UserAgent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 440, 181, 31));
        pb = new QPushButton(UserAgent);
        pb->setObjectName(QString::fromUtf8("pb"));
        pb->setGeometry(QRect(460, 120, 80, 25));

        retranslateUi(UserAgent);

        QMetaObject::connectSlotsByName(UserAgent);
    } // setupUi

    void retranslateUi(QWidget *UserAgent)
    {
        UserAgent->setWindowTitle(QCoreApplication::translate("UserAgent", "UserAgent", nullptr));
        label->setText(QString());
        pb->setText(QCoreApplication::translate("UserAgent", "Comparar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAgent: public Ui_UserAgent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAGENT_H
