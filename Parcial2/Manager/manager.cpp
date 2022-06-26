#include "manager.h"


Manager::Manager( QObject * parent ) : QObject( parent ),
                                       login( new Ingreso ),
                                       form( new Form )
{
    connect( login, SIGNAL(signal_usuarioLogueado()), this, SLOT(slot_usuarioLoguedo()));

    connect( form, SIGNAL(signal_volver()), login, SLOT(show()));
    connect( form, SIGNAL(signal_volver()), form, SLOT(hide()));
}

Manager::~Manager()
{
    delete login;
    delete form;
}

void Manager::iniciar()  {
    login->show();

}

void Manager::slot_usuarioLoguedo()
{
    login->hide();
    form->show();

}
