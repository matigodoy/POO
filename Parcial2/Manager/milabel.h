#ifndef MILABEL_H
#define MILABEL_H

#include <QLabel>
#include <QWidget>

class MiLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MiLabel(QWidget *parent = nullptr);

protected:
    void mousePressEvent( QMouseEvent * e );

private:
    QLabel marta;

signals:
    void signal_click();

};

#endif // MILABEL_H
