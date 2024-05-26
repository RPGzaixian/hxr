#include "saving.h"
#include "ui_saving.h"
#include"widget.h"
#include"w.h"
Saving::Saving(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Saving)
{
    ui->setupUi(this);
}

Saving::~Saving()
{
    delete ui;
}

void Saving::on_pushButton_clicked()
{
    this->ret->show();
    this->close();
}


void Saving::on_pushButton_2_clicked()
{
    Game *game=new Game;
    game->ret=this;
    game->show();
    this->close();
}

