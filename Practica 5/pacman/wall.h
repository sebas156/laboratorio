#ifndef WALL_H
#define WALL_H
#include <QGraphicsItem>
#include <QPainter>

class wall:public QGraphicsItem
{
    int posx,posy,w,h;
public:
    wall();
    wall(int x,int y, int ancho, int alto);
    int getW();
    void setW(int ancho);
    int getH();
    void setH(int altura);
    int getPosx();
    void setPosx(int px);
    int getPosy();
    void setPosy(int py);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=nullptr);
};

#endif // WALL_H
