#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include"widget.h"
namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    Widget* ret;
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
