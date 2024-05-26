// a.h
#ifndef A_H
#define A_H

#include <QWidget>
#include "ui_cundang.h" // 注意这里通常是 "ui_文件名.h"，Qt Designer会自动为你生成

class A : public QWidget
{
    Q_OBJECT

public:
    explicit A(QWidget *parent = nullptr);
    ~A();

private:
    Ui::Form *ui; // Ui::A 是Qt Designer为你生成的命名空间下的类
};

#endif // A_H
