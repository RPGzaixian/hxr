#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "character.h"
#include "npc.h"
#include"saving.h"
class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    Saving *ret;
private:

    QGraphicsScene *scene;
    Character *character;
    NPC *npc;

};


#endif // GAME_H
