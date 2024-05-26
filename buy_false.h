#ifndef BUY_FALSE_H
#define BUY_FALSE_H

#include <QDialog>
#include"store.h"
namespace Ui {
class buy_false;
}

class buy_false : public QDialog
{
    Q_OBJECT

public:
    store* now_store;
    explicit buy_false(QWidget *parent = nullptr);
    ~buy_false();

private slots:
    void on_pushButton_clicked();

private:
    Ui::buy_false *ui;
};

#endif // BUY_FALSE_H
