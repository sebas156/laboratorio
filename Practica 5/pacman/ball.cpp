#include "ball.h"

ball::ball()
{

}

ball::ball(int r_, int x, int y)
{
    r = r_;
    posx = x;
    posy = y;
    setPos(posx,posy);
}

QRectF ball::boundingRect() const
{
    return QRectF(r,r,2*r,2*r);
}

void ball::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::white);
    painter->drawEllipse(boundingRect());
}
