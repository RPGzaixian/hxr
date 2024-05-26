#include "character.h"
#include "w.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>

Character::Character(const QString &imagePath, QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent), characterImage(imagePath), stepSize(5),
    movingLeft(false), movingRight(false), movingUp(false), movingDown(false)
{
    // 加载并缩小图片
    QPixmap scaledPixmap = characterImage.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    setPixmap(scaledPixmap);

    // 设置一个定时器来处理连续移动
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Character::move);
    timer->start(50); // 每50毫秒移动一次

    // 设置形状模式
    setShapeMode(QGraphicsPixmapItem::BoundingRectShape);
}

void Character::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_W:
        movingUp = true;
        break;
    case Qt::Key_A:
        movingLeft = true;
        break;
    case Qt::Key_S:
        movingDown = true;
        break;
    case Qt::Key_D:
        movingRight = true;
        break;
    default:
        QGraphicsPixmapItem::keyPressEvent(event);
    }
}

void Character::keyReleaseEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_W:
        movingUp = false;
        break;
    case Qt::Key_A:
        movingLeft = false;
        break;
    case Qt::Key_S:
        movingDown = false;
        break;
    case Qt::Key_D:
        movingRight = false;
        break;
    default:
        QGraphicsPixmapItem::keyReleaseEvent(event);
    }
}

void Character::moveLeft()
{
    setPos(x() - stepSize, y());
}

void Character::moveRight()
{
    setPos(x() + stepSize, y());
}

void Character::moveUp()
{
    setPos(x(), y() - stepSize);
}

void Character::moveDown()
{
    setPos(x(), y() + stepSize);
}

void Character::move()
{
    if (movingLeft) {
        moveLeft();
    }
    if (movingRight) {
        moveRight();
    }
    if (movingUp) {
        moveUp();
    }
    if (movingDown) {
        moveDown();
    }
}


void Character::checkCollision()
{
    QList<QGraphicsItem *> collidingItems = this->collidingItems();
    for (QGraphicsItem *item : collidingItems) {
        if (dynamic_cast<NPC *>(item)) {
            emit collideWithNPC();
            break;
        }
    }
}
