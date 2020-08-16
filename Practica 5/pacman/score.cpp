#include "score.h"
#include <QFont>
#include <QMessageBox>
#include "game.h"
#include <unistd.h>
extern game * Game;
Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent) // Está heredando.
{
    VictorySounds=new QMediaPlayer();
    VictorySounds->setMedia(QUrl("qrc:/sounds/ganar.mp3"));
    //inicializar score en 0
    score = 0;
    //draw the text
    setPlainText(QString("Score: ")+QString::number(score)); // setPlainText -> funcion es de QGraphicsTextItem
    setDefaultTextColor(Qt::white); // Le da color al texto.
    setFont(QFont("boink let",20)); // Selecciono el tipo de letra. Tipo de letra, tamaño de la misma.
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score: ")+QString::number(score));
    if(score >=54){
        VictorySounds->play();
        usleep(300000);
        QMessageBox msgBox;
        msgBox . setText( "Felicidades, su pais se encuentra orgulloso. " );
        msgBox . exec();
        Game->close();
    }
}

int Score::getScore()
{
    return score;
}
