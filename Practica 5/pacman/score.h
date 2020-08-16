#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
#include <QMediaPlayer>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0); // Ventana que vamos a poner donde va estar nuestro texto.
    void increase();
    int getScore();
private:
    QMediaPlayer *VictorySounds;
    int score;
};


#endif // SCORE_H
