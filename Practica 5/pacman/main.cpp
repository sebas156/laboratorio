#include "mainwindow.h"
#include <QApplication>
#include "game.h"
game * Game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game= new game;
    Game->show();
    return a.exec();
}
