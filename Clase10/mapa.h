#ifndef MAPA_H
#define MAPA_H

#include <QWidget>
#define MANU

class Mapa : public QWidget  {
    Q_OBJECT

public:
    Mapa();

protected:
    void paintEvent( QPaintEvent * );

};

#endif // MAPA_H
