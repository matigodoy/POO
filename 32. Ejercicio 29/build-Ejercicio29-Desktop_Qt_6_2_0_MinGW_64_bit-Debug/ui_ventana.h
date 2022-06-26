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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tDatos;

    void setupUi(QWidget *Ventana)
    {
        if (Ventana->objectName().isEmpty())
            Ventana->setObjectName(QString::fromUtf8("Ventana"));
        Ventana->resize(520, 432);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Ventana->sizePolicy().hasHeightForWidth());
        Ventana->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Recursos/ubp.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ventana->setWindowIcon(icon);
        gridLayout = new QGridLayout(Ventana);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tDatos = new QTableWidget(Ventana);
        if (tDatos->columnCount() < 1)
            tDatos->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignTop);
        tDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tDatos->setObjectName(QString::fromUtf8("tDatos"));
        tDatos->setFocusPolicy(Qt::NoFocus);
        tDatos->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tDatos, 0, 0, 1, 1);


        retranslateUi(Ventana);

        QMetaObject::connectSlotsByName(Ventana);
    } // setupUi

    void retranslateUi(QWidget *Ventana)
    {
        Ventana->setWindowTitle(QCoreApplication::translate("Ventana", "Eventos", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Ventana", "Eventos de accesos inv\303\241lidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana: public Ui_Ventana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_H
