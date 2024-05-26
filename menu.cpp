#include "menu.h"
#include "ui_menu.h"
#include"widget.h"
Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    /*QPushButton *a=findChild<QPushButton*>("pushButton_2");
    QString op=QString::fromStdString(Key_turn_to_string(init::move_down));
    if(a)a->setText(op);*/
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked()
{
    this->ret->show();
    this->close();
}


void Menu::on_pushButton_2_clicked()
{

}

