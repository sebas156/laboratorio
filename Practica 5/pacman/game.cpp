#include "game.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QObject>
#include <QGraphicsTextItem>
#include <QMediaPlayer>
#include <unistd.h>

game::game(QWidget *parent)
{
    int posxball=40,posyball=24;
    //create scene
    scene = new QGraphicsScene;
    scene->setSceneRect(0,0,600,664);
    setBackgroundBrush(QBrush(QImage(":/imagenes/maze.jpg")));
    setScene(scene);

    //create an item to put into the scene
    player= new pacman();

    // create food
    for(int c=0;c<=25;c+=5){
        aux=new ball(5,posxball+20*c,posyball);
        cocos.push_back(aux);
    }
    posyball=110;
    for(int c=0;c<=25;c+=5){
        aux=new ball(5,posxball+20*c,posyball);
        cocos.push_back(aux);
    }
    posxball=130;
    posyball=170;
    for(int c=0;c<=5;c+=1){
        aux=new ball(5,posxball,posyball+52*c);
        cocos.push_back(aux);
        aux=new ball(5,posxball+322,posyball+52*c);
        cocos.push_back(aux);
    }
    posxball=15;
    posyball=620;
    for(int c=0;c<=11;c+=1){
        aux=new ball(5,posxball+50*c,posyball);
        cocos.push_back(aux);
    }

    aux=new ball(5,20,67);
    cocos.push_back(aux);
    aux=new ball(5,130,67);
    cocos.push_back(aux);
    aux=new ball(5,260,67);
    cocos.push_back(aux);
    aux=new ball(5,320,67);
    cocos.push_back(aux);
    aux=new ball(5,450,67);
    cocos.push_back(aux);
    aux=new ball(5,555,67);
    cocos.push_back(aux);
    aux=new ball(5,20,170);
    cocos.push_back(aux);
    aux=new ball(5,75,170);
    cocos.push_back(aux);
    aux=new ball(5,507,170);
    cocos.push_back(aux);
    aux=new ball(5,555,170);
    cocos.push_back(aux);
    aux=new ball(5,20,430);
    cocos.push_back(aux);
    aux=new ball(5,75,430);
    cocos.push_back(aux);
    aux=new ball(5,507,430);
    cocos.push_back(aux);
    aux=new ball(5,555,430);
    cocos.push_back(aux);
    aux=new ball(5,185,430);
    cocos.push_back(aux);
    aux=new ball(5,240,430);
    cocos.push_back(aux);
    aux=new ball(5,397,430);
    cocos.push_back(aux);
    aux=new ball(5,342,430);
    cocos.push_back(aux);
    // create wall
    wall1 = new wall(59,60,57,35);
    wall2 = new wall(165,60,78,35);
    wall3 = new wall(293,10,15,85);
    wall4=new wall(358,60,78,35);
    wall5= new wall(486,60,57,35);
    wall6=new wall(59,144,56,15);
    wall7=new wall(165,144,15,143);
    wall8 = new wall(10,209,105,78);
    wall9= new wall(10,337,105,78);
    wall10=new wall(180,208,63,15);
    wall11=new wall(230,144,141,15);
    wall12=new wall(293,159,15,63);
    wall13=new wall(486,144,56,15);
    wall14=new wall(421,144,15,143);
    wall15=new wall(358,208,63,15);
    wall16=new wall(486,209,105,78);
    wall17=new wall(486,337,105,78);
    wall18=new wall(165,337,15,78);
    wall19=new wall(421,337,15,78);
   wall20=new wall(230,273,141,78);
   wall21= new wall(230,400,141,15);
   wall22= new wall(230,400,141,15);
   wall23=new wall(293,416,15,63);
   wall24=new wall(58,464,58,15);
   wall25=new wall(166,464,77,15);
   wall26=new wall(358,464,77,15);
   wall27= new wall(485,464,57,15);
   wall28= new wall(101,479,15,64);
   wall29= new wall(485,479,15,64);
   wall30= new wall(10,528,42,15);
   wall31=new wall(550,528,42,15);
   wall32=new wall(230,528,141,15);
   wall33=new wall(293,543,15,65);
   wall34=new wall(58,592,185,15);
   wall35=new wall(357,592,185,15);
   wall36=new wall(421,529,15,63);
   wall37=new wall(165,529,15,63);

    //add the item to the scene
    scene->addItem(player);
    scene->addItem(wall1);
    scene->addItem(wall2);
    scene->addItem(wall3);
    scene->addItem(wall4);
    scene->addItem(wall5);
    scene->addItem(wall6);
    scene->addItem(wall7);
    scene->addItem(wall8);
    scene->addItem(wall9);
    scene->addItem(wall10);
    scene->addItem(wall11);
    scene->addItem(wall12);
    scene->addItem(wall13);
    scene->addItem(wall14);
    scene->addItem(wall15);
    scene->addItem(wall16);
    scene->addItem(wall17);
    scene->addItem(wall18);
    scene->addItem(wall19);
    scene->addItem(wall20);
    scene->addItem(wall21);
    scene->addItem(wall23);
    scene->addItem(wall24);
    scene->addItem(wall25);
    scene->addItem(wall26);
    scene->addItem(wall27);
    scene->addItem(wall28);
    scene->addItem(wall29);
    scene->addItem(wall30);
    scene->addItem(wall31);
    scene->addItem(wall32);
    scene->addItem(wall33);
    scene->addItem(wall34);
    scene->addItem(wall35);
    scene->addItem(wall36);
    scene->addItem(wall37);
    //Add food.
     for(int r = 0, n = cocos.size(); r < n; r++){
         scene->addItem(cocos[r]);
     }

    //make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    player->setPos(290,488);
    //Create score
      score=new Score();
      score->setPos(0,0);
      scene->addItem(score);
      music = new QMediaPlayer;
      music->setMedia(QUrl("qrc:/sounds/inicio.mp3")); // Direccion del archivo mp3, puede ser una ruta absoluta o relativa.
      music->play();
      usleep(30000);

    show();
}

