#include "pacman.h"
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "game.h"
#include "wall.h"
#include <QDebug>
#include "ball.h"

extern game * Game;
int i=0;

pacman::pacman(QObject * parent): QObject(), QGraphicsPixmapItem()
{
    //draw pacman
    setPixmap(QPixmap(":/imagenes/Arcade - Pac-Man - General Sprites (1) (1).jpg"));
    timer_anim = new QTimer();
    filas = 0;
    columnas = 0;
    ancho = 25;
    alto = 22;
    connect(timer_anim,&QTimer::timeout,this,&pacman::actualizar);
    timer_anim->start(80);
    EatMusic->setMedia(QUrl("qrc:/sounds/comer.mp3"));
}

void pacman::keyPressEvent(QKeyEvent *event)
{
    int const v=8;
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(v);
    qDebug("Estoy aqui alv, hay que solucionar esto");
    if (event->key() == Qt::Key_Left){
        if(pos().x() > 0)
        {
            i=0;
            disconnect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->stop();
        }
    }

    else if (event->key() == Qt::Key_Right){
        if(pos().x() + 30 < 600)
        {
            i=1;
            disconnect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->stop();
        }
    }

    else if (event->key() == Qt::Key_Up){
        if(pos().y() > 0)
        {
            i=2;
            disconnect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->stop();
        }
    }

    else if (event->key() == Qt::Key_Down){
        if(pos().y() > 0)
        {
            i=3;
            disconnect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->stop();
        }
    }

}

void pacman::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int r = 0, n = colliding_items.size(); r < n; r++){
        if(typeid(*(colliding_items[r])) == typeid (wall)){
            setPos(x(),y());
            qDebug("detectado");
            if(i==0)
                setPos(x()+4,y());
            else if(i==1)
                setPos(x()-4,y());
            else if(i==2)
                setPos(x(),y()+4);
            else if(i==3)
                setPos(x(),y()-4);
            i=4;
        }
        else if (typeid(*(colliding_items[r])) == typeid (ball)) {
            scene()->removeItem(colliding_items[r]);
            delete colliding_items[r];
            if (EatMusic->state() == QMediaPlayer::PlayingState){
                EatMusic->setPosition(0);
            }
            else if(EatMusic->state() == QMediaPlayer::StoppedState){
                EatMusic->play();
            }
            Game->score->increase();
        }
    }

    if(i==1)
    {
        if(pos().x() + 30 < 580)
            setPos(x()+1,y());
        else if (pos().y()>=288 and pos().y() <=336)
            setPos(x()-550,y());
    }
    else if(i==0)
        {
            if(pos().x() > 10)
                setPos(x()-1,y());
            else if (pos().y()>=288 and pos().y() <=336)
                setPos(x()+550,y());
        }
    else if(i==2)
        {
           if(pos().y()>10)
                setPos(x(),y()-1);
        }
    else if(i==3)
        {
            if(pos().y()<620)
           setPos(x(),y()+1);
        }

}

void pacman::actualizar()
{
    QRect rect (columnas,filas,ancho,alto);
    columnas+=25;
    if(columnas>=75)
        columnas=0;
    this->update(-ancho/2,-alto/2,ancho,alto);
    QPixmap image(":/imagenes/Arcade - Pac-Man - General Sprites (1) (1).jpg");
    QPixmap cropped = image.copy(columnas,filas,25,22);
    qDebug("entrando a 'actualizar'");
    setPixmap(QPixmap(cropped));
}
