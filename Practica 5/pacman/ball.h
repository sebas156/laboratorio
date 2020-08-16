#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QPainter>

class ball:public QGraphicsItem
{
    int r;
    int posx, posy;

public:
    ball();
    ball(int r_, int x, int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // BALL_H
