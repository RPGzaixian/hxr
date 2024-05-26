#include "reallyquit.h"
#include "ui_reallyquit.h"
#include"widget.h"
ReallyQuit::ReallyQuit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReallyQuit)
{
    ui->setupUi(this);
}

ReallyQuit::~ReallyQuit()
{
    delete ui;
}

void ReallyQuit::on_pushButton_clicked()
{
    this->parentWidget()->close();
    this->close();
}


void ReallyQuit::on_pushButton_2_clicked()
{
    this->close();
}

