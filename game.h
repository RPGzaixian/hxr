#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "character.h"
#include "npc.h"
#include"saving.h"
#include"QPushButton"
#include"QLabel"
class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    Saving *ret;
public slots:
    void button_return();
    void button_save();
    void button_bag();
    void button_store();

private:
    QGraphicsScene *scene;
    Character *character;
    NPC *npc;
    QPushButton *ret_button;
    QPushButton *sav_button;
    QPushButton *bag_button;
    QPushButton *store_button;
    QLabel *money_label;
    QLabel *exp_label;
    // QLabel *money_label;
    // QLabel *money_label;
    // QPushButton *ret_button;
};


#endif // GAME_H
