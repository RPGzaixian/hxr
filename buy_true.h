#ifndef BUY_TRUE_H
#define BUY_TRUE_H

#include <QDialog>
#include"store.h"
namespace Ui {
class buy_true;
}

class buy_true : public QDialog
{
    Q_OBJECT

public:
    explicit buy_true(QWidget *parent = nullptr);
    store*now_store;
    ~buy_true();

private slots:
    void on_pushButton_clicked();

private:
    Ui::buy_true *ui;
};

#endif // BUY_TRUE_H
