/********************************************************************************
** Form generated from reading UI file 'formulario2.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIO2_H
#define UI_FORMULARIO2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formulario2
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *leNombre;
    QLabel *label_3;
    QLineEdit *leLegajo;
    QLabel *label;
    QLineEdit *leApellido;
    QPushButton *pbAlta;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *captcha;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Formulario2)
    {
        if (Formulario2->objectName().isEmpty())
            Formulario2->setObjectName(QString::fromUtf8("Formulario2"));
        Formulario2->resize(497, 429);
        formLayoutWidget = new QWidget(Formulario2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 20, 331, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        leNombre = new QLineEdit(formLayoutWidget);
        leNombre->setObjectName(QString::fromUtf8("leNombre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leNombre);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        leLegajo = new QLineEdit(formLayoutWidget);
        leLegajo->setObjectName(QString::fromUtf8("leLegajo"));

        formLayout->setWidget(2, QFormLayout::FieldRole, leLegajo);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        leApellido = new QLineEdit(formLayoutWidget);
        leApellido->setObjectName(QString::fromUtf8("leApellido"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leApellido);

        pbAlta = new QPushButton(Formulario2);
        pbAlta->setObjectName(QString::fromUtf8("pbAlta"));
        pbAlta->setGeometry(QRect(360, 370, 111, 41));
        gridLayoutWidget = new QWidget(Formulario2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 180, 331, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        captcha = new QLabel(gridLayoutWidget);
        captcha->setObjectName(QString::fromUtf8("captcha"));

        gridLayout->addWidget(captcha, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);


        retranslateUi(Formulario2);

        QMetaObject::connectSlotsByName(Formulario2);
    } // setupUi

    void retranslateUi(QDialog *Formulario2)
    {
        Formulario2->setWindowTitle(QCoreApplication::translate("Formulario2", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Formulario2", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("Formulario2", "Apellido", nullptr));
        label->setText(QCoreApplication::translate("Formulario2", "Legajo:", nullptr));
        pbAlta->setText(QCoreApplication::translate("Formulario2", "Alta", nullptr));
        label_4->setText(QCoreApplication::translate("Formulario2", "<html><head/><body><p><span style=\" font-weight:600; text-decoration: underline;\">CAPTCHA:</span></p></body></html>", nullptr));
        captcha->setText(QCoreApplication::translate("Formulario2", "capchaaaaaa", nullptr));
        lineEdit->setText(QCoreApplication::translate("Formulario2", "Ingrese el texto del captcha", nullptr));
        lineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Formulario2: public Ui_Formulario2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO2_H
