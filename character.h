#ifndef CHARACTER_H
#define CHARACTER_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QObject>

class Character : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Character(const QString &imagePath, QGraphicsItem *parent = nullptr);
signals:
    void collideWithNPC();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

private:
    QPixmap characterImage;
    int stepSize;
    bool movingLeft;
    bool movingRight;
    bool movingUp;
    bool movingDown;

    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

private slots:
    void move();
    void checkCollision();

};

#endif // CHARACTER_H
