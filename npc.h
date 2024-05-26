#ifndef NPC_H
#define NPC_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QKeyEvent>

class NPC : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    NPC(const QString &imagePath, QGraphicsItem *parent = nullptr);

    void startMoving();
    void stopMoving();
    void interact();

private:
    QPixmap npcImage;
    int stepSize;
    QTimer *moveTimer;

    void moveRandomly();

private slots:
    void move();
};

#endif // NPC_H
