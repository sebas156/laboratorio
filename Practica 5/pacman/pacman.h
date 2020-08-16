#ifndef PACMAN_H
#define PACMAN_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QPixmap>
#include <QMediaPlayer>

class pacman: public QObject, public QGraphicsPixmapItem//, public QGraphicsItem
{
    Q_OBJECT
public:
    pacman(QObject *parent = nullptr);
    void keyPressEvent(QKeyEvent * event);

    float filas, columnas;
    float ancho, alto;
    QTimer *timer_anim;
    QMediaPlayer *EatMusic = new QMediaPlayer();

public slots:
    void move();
    void actualizar();
};

#endif // PACMAN_H
