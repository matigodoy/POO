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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QFormLayout *formLayout;
    QLabel *lUsuario;
    QPushButton *pbAgregar;
    QPushButton *pbEliminar;
    QLineEdit *leUsuario;
    QLabel *Nombre;
    QLabel *lClave;
    QLabel *lApellido;
    QLabel *lMail;
    QLineEdit *leClave;
    QLineEdit *leNombre;
    QLineEdit *leApellido;
    QLineEdit *leMail;
    QTableWidget *tDatos;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(520, 432);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../../../../Desktop/ubp.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ventana->setWindowIcon(icon);
        formLayout = new QFormLayout(Ventana);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lUsuario = new QLabel(Ventana);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lUsuario);

        pbAgregar = new QPushButton(Ventana);
        pbAgregar->setObjectName(QString::fromUtf8("pbAgregar"));
        pbAgregar->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../../../../../Desktop/add-list-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAgregar->setIcon(icon1);
        pbAgregar->setCheckable(false);

        formLayout->setWidget(11, QFormLayout::FieldRole, pbAgregar);

        pbEliminar = new QPushButton(Ventana);
        pbEliminar->setObjectName(QString::fromUtf8("pbEliminar"));
        pbEliminar->setFocusPolicy(Qt::NoFocus);
        pbEliminar->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../../../../../Desktop/delete-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbEliminar->setIcon(icon2);
        pbEliminar->setCheckable(false);

        formLayout->setWidget(12, QFormLayout::FieldRole, pbEliminar);

        leUsuario = new QLineEdit(Ventana);
        leUsuario->setObjectName(QString::fromUtf8("leUsuario"));

        formLayout->setWidget(1, QFormLayout::FieldRole, leUsuario);

        Nombre = new QLabel(Ventana);
        Nombre->setObjectName(QString::fromUtf8("Nombre"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Nombre);

        lClave = new QLabel(Ventana);
        lClave->setObjectName(QString::fromUtf8("lClave"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lClave);

        lApellido = new QLabel(Ventana);
        lApellido->setObjectName(QString::fromUtf8("lApellido"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lApellido);

        lMail = new QLabel(Ventana);
        lMail->setObjectName(QString::fromUtf8("lMail"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lMail);

        leClave = new QLineEdit(Ventana);
        leClave->setObjectName(QString::fromUtf8("leClave"));

        formLayout->setWidget(3, QFormLayout::FieldRole, leClave);

        leNombre = new QLineEdit(Ventana);
        leNombre->setObjectName(QString::fromUtf8("leNombre"));

        formLayout->setWidget(4, QFormLayout::FieldRole, leNombre);

        leApellido = new QLineEdit(Ventana);
        leApellido->setObjectName(QString::fromUtf8("leApellido"));

        formLayout->setWidget(5, QFormLayout::FieldRole, leApellido);

        leMail = new QLineEdit(Ventana);
        leMail->setObjectName(QString::fromUtf8("leMail"));

        formLayout->setWidget(6, QFormLayout::FieldRole, leMail);

        tDatos = new QTableWidget(Ventana);
        if (tDatos->columnCount() < 5)
            tDatos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tDatos->setObjectName(QString::fromUtf8("tDatos"));
        tDatos->setFocusPolicy(Qt::NoFocus);

        formLayout->setWidget(0, QFormLayout::SpanningRole, tDatos);

        QWidget::setTabOrder(leUsuario, leClave);
        QWidget::setTabOrder(leClave, leNombre);
        QWidget::setTabOrder(leNombre, leApellido);
        QWidget::setTabOrder(leApellido, leMail);
        QWidget::setTabOrder(leMail, tDatos);
        QWidget::setTabOrder(tDatos, pbAgregar);
        QWidget::setTabOrder(pbAgregar, pbEliminar);

        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Consulta de base de datos", nullptr));
        lUsuario->setText(QCoreApplication::translate("Ventana", "Usuario", nullptr));
        pbAgregar->setText(QCoreApplication::translate("Ventana", " Agregar usuario", nullptr));
        pbEliminar->setText(QCoreApplication::translate("Ventana", " Eliminar Usuario", nullptr));
        leUsuario->setText(QString());
        Nombre->setText(QCoreApplication::translate("Ventana", "Nombre", nullptr));
        lClave->setText(QCoreApplication::translate("Ventana", "Clave", nullptr));
        lApellido->setText(QCoreApplication::translate("Ventana", "Apellido", nullptr));
        lMail->setText(QCoreApplication::translate("Ventana", "Mail", nullptr));
        leClave->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Ventana", "Usuario", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Ventana", "Clave", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Ventana", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Ventana", "Apellido", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tDatos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Ventana", "Mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
