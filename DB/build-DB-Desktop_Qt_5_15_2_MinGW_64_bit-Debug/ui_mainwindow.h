/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *leNombre;
    QLineEdit *leApellido;
    QLineEdit *leEdad;
    QPushButton *pbAgregar;
    QLineEdit *leClave;
    QLabel *lNombre;
    QLabel *lApellido;
    QLabel *lEdad;
    QLabel *lClase;
    QTableWidget *tDatos;
    QPushButton *pbEliminar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        leNombre = new QLineEdit(centralwidget);
        leNombre->setObjectName(QString::fromUtf8("leNombre"));
        leNombre->setGeometry(QRect(10, 520, 113, 21));
        leApellido = new QLineEdit(centralwidget);
        leApellido->setObjectName(QString::fromUtf8("leApellido"));
        leApellido->setGeometry(QRect(150, 520, 113, 21));
        leEdad = new QLineEdit(centralwidget);
        leEdad->setObjectName(QString::fromUtf8("leEdad"));
        leEdad->setGeometry(QRect(290, 520, 113, 21));
        pbAgregar = new QPushButton(centralwidget);
        pbAgregar->setObjectName(QString::fromUtf8("pbAgregar"));
        pbAgregar->setGeometry(QRect(550, 520, 111, 21));
        leClave = new QLineEdit(centralwidget);
        leClave->setObjectName(QString::fromUtf8("leClave"));
        leClave->setGeometry(QRect(430, 520, 113, 21));
        lNombre = new QLabel(centralwidget);
        lNombre->setObjectName(QString::fromUtf8("lNombre"));
        lNombre->setGeometry(QRect(10, 490, 47, 13));
        lApellido = new QLabel(centralwidget);
        lApellido->setObjectName(QString::fromUtf8("lApellido"));
        lApellido->setGeometry(QRect(150, 490, 47, 13));
        lEdad = new QLabel(centralwidget);
        lEdad->setObjectName(QString::fromUtf8("lEdad"));
        lEdad->setGeometry(QRect(290, 490, 47, 13));
        lClase = new QLabel(centralwidget);
        lClase->setObjectName(QString::fromUtf8("lClase"));
        lClase->setGeometry(QRect(430, 490, 47, 13));
        tDatos = new QTableWidget(centralwidget);
        if (tDatos->columnCount() < 4)
            tDatos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tDatos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tDatos->setObjectName(QString::fromUtf8("tDatos"));
        tDatos->setGeometry(QRect(10, 30, 401, 431));
        pbEliminar = new QPushButton(centralwidget);
        pbEliminar->setObjectName(QString::fromUtf8("pbEliminar"));
        pbEliminar->setGeometry(QRect(670, 520, 111, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar Usuario", nullptr));
        lNombre->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        lApellido->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        lEdad->setText(QCoreApplication::translate("MainWindow", "Edad", nullptr));
        lClase->setText(QCoreApplication::translate("MainWindow", "Clave", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tDatos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tDatos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tDatos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tDatos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Clave", nullptr));
        pbEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
