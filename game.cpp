#include "game.h"
#include "npc.h"
#include <QTimer>
// #include"the_init_for_expresion.h"
#include"store.h"
#include"package.h"
#include"the_init_for_game.h"
extern hero*game_hero;
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

    //添加
    ret_button=new QPushButton("返回",this);
    ret_button->setGeometry(QRect(10,10,50,50));
    connect(ret_button,&QPushButton::clicked, this, &Game::button_return);

    sav_button=new QPushButton("保存",this);
    sav_button->setGeometry(QRect(10,70,50,50));
    connect(sav_button,&QPushButton::clicked, this, &Game::button_save);


    bag_button=new QPushButton("背包",this);
    bag_button->setGeometry(QRect(10,130,50,50));
    connect(bag_button,&QPushButton::clicked, this, &Game::button_bag);

    store_button=new QPushButton("商店",this);
    store_button->setGeometry(QRect(10,200,50,50));
    connect(store_button,&QPushButton::clicked, this, &Game::button_store);

    std::string op="金钱"+std::to_string(game_hero->money);
    // std::string op="金钱"+std::to_string(2345);
    money_label=new QLabel(QString::fromStdString(op),this);
    money_label->setGeometry(QRect(200,10,200,30));


    connect(character, &Character::collideWithNPC, npc, &NPC::interact);
}

void Game::button_return(){
    this->close();
    this->ret->show();
}

void Game::button_bag(){
    package* bag=new package;
    bag->show();
}

void Game::button_save(){

}

void Game::button_store(){
    store *sto=new store;
    sto->show();

}
