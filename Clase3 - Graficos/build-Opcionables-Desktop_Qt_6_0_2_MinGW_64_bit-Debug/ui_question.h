/********************************************************************************
** Form generated from reading UI file 'question.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_H
#define UI_QUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "image.hpp"

QT_BEGIN_NAMESPACE

class Ui_Question
{
public:
    QGridLayout *gridLayout_2;
    QWidget *background;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    Image *scrollAreaWidgetContents;
    QGridLayout *scrollAreaLayout;
    QLabel *questionLabel;
    QLabel *counterLabel;
    QFrame *line;
    QLabel *lUsuario;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *scoreLabel;
    QFrame *line_2;
    QLabel *rankingLabel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName(QString::fromUtf8("Question"));
        Question->resize(219, 300);
        gridLayout_2 = new QGridLayout(Question);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        background = new QWidget(Question);
        background->setObjectName(QString::fromUtf8("background"));
        gridLayout = new QGridLayout(background);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(background);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new Image();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 199, 197));
        scrollAreaLayout = new QGridLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        questionLabel = new QLabel(scrollAreaWidgetContents);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        QFont font;
        font.setPointSize(9);
        questionLabel->setFont(font);
        questionLabel->setAlignment(Qt::AlignCenter);
        questionLabel->setWordWrap(true);

        scrollAreaLayout->addWidget(questionLabel, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 5, 0, 1, 1);

        counterLabel = new QLabel(background);
        counterLabel->setObjectName(QString::fromUtf8("counterLabel"));
        counterLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(counterLabel, 1, 0, 1, 1);

        line = new QFrame(background);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        lUsuario = new QLabel(background);
        lUsuario->setObjectName(QString::fromUtf8("lUsuario"));
        lUsuario->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        scoreLabel = new QLabel(background);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(scoreLabel);

        line_2 = new QFrame(background);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        rankingLabel = new QLabel(background);
        rankingLabel->setObjectName(QString::fromUtf8("rankingLabel"));
        rankingLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(rankingLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        gridLayout_2->addWidget(background, 0, 0, 1, 1);


        retranslateUi(Question);

        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QWidget *Question)
    {
        Question->setWindowTitle(QCoreApplication::translate("Question", "Opcionables", nullptr));
        questionLabel->setText(QCoreApplication::translate("Question", "Pregunta", nullptr));
        counterLabel->setText(QCoreApplication::translate("Question", "Contador", nullptr));
        lUsuario->setText(QCoreApplication::translate("Question", "Usuario:", nullptr));
        scoreLabel->setText(QCoreApplication::translate("Question", "Puntaje:", nullptr));
        rankingLabel->setText(QCoreApplication::translate("Question", "Ranking:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_H
