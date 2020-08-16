#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include <QWidget>
#include "pacman.h"
#include "wall.h"
#include "ball.h"
#include "score.h"
#include <QList>
#include <QMediaPlayer>
class game: public QGraphicsView
{
public:
    game(QWidget *parents = 0);
    QGraphicsScene * scene;
    pacman * player;
    wall * wall1,*wall2,*wall3,*wall4,*wall5,*wall6,*wall7,*wall8,*wall9,*wall10,*wall11,*wall12,*wall13;
    wall * wall14,*wall15,*wall16,*wall17,*wall18,*wall19,*wall20,*wall21,*wall22,*wall23,*wall24,*wall25,*wall26;
    wall *wall27,*wall28,*wall29,*wall30,*wall31,*wall32,*wall33,*wall34,*wall35,*wall36,*wall37;
    QList<ball *> cocos;
    ball * aux;
    Score *score;
    QMediaPlayer *music;
public slots:
    void sound();
};

#endif // GAME_H
