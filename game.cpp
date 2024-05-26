#include "game.h"
#include "npc.h"
#include <QTimer>

Game::Game(QWidget *parent)
    : QGraphicsView(parent), scene(new QGraphicsScene(this))
{
    // 设置场景大小
    scene->setSceneRect(0, 0, 1280, 960);
    setScene(scene);
    setFixedSize(1280, 960);

    // 添加背景
    QGraphicsPixmapItem *background = new QGraphicsPixmapItem(QPixmap(":/images/background1.jpg"));
    scene->addItem(background);
    background->setPos(0, 0);

    // 添加角色
    character = new Character(":/images/character.png");
    character->setPos(100, 100);
    scene->addItem(character);
    character->setFlag(QGraphicsItem::ItemIsFocusable);
    character->setFocus();

    // 添加NPC
    npc = new NPC(":/images/npc_nvwu.png");
    npc->setPos(830, 275);
    scene->addItem(npc);

    connect(character, &Character::collideWithNPC, npc, &NPC::interact);
}
