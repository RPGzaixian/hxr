#include "npc.h"
#include <QRandomGenerator>

NPC::NPC(const QString &imagePath, QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent), npcImage(imagePath), stepSize(5)
{

    QPixmap scaledPixmap = npcImage.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    setPixmap(scaledPixmap);

    // 设置一个定时器来处理随机移动
    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &NPC::move);
    moveTimer->start(1000); // 每1000毫秒移动一次
}

void NPC::startMoving()
{
    moveTimer->start();
}

void NPC::stopMoving()
{
    moveTimer->stop();
}

void NPC::moveRandomly()
{
    int direction = QRandomGenerator::global()->bounded(4);
    switch (direction)
    {
    case 0:
        setPos(x() - stepSize, y()); // 向左移动
        break;
    case 1:
        setPos(x() + stepSize, y()); // 向右移动
        break;
    case 2:
        setPos(x(), y() - stepSize); // 向上移动
        break;
    case 3:
        setPos(x(), y() + stepSize); // 向下移动
        break;
    }
}

void NPC::move()
{
    moveRandomly();
}

void NPC::interact()
{
    // 交互逻辑
    qDebug() << "NPC interacted!";
    //
}
