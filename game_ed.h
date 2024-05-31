#ifndef GAME_ED_H
#define GAME_ED_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "character.h"
#include "npc.h"
#include"saving.h"

namespace Ui {
class game_ed;
}

class game_ed : public QWidget
{
    Q_OBJECT

public:
    explicit game_ed(QWidget *parent = nullptr);
    ~game_ed();

private:
    Ui::game_ed *ui;
    QGraphicsScene *scene;
    Character *character;
    NPC *npc;
};

#endif // GAME_ED_H
