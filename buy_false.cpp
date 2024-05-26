#include "buy_false.h"
#include "ui_buy_false.h"

buy_false::buy_false(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::buy_false)
{
    ui->setupUi(this);
}

buy_false::~buy_false()
{
    delete ui;
}

void buy_false::on_pushButton_clicked()
{
    this->close();
    this->now_store->show();
}

