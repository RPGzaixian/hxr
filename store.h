#ifndef STORE_H
#define STORE_H

#include <QWidget>
#include"trade.h"

namespace Ui {
class store;
}

class store : public QWidget
{
    Q_OBJECT

public:


    explicit store(QWidget *parent = nullptr);

    ~store();


private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::store *ui;
};

#endif // STORE_H
