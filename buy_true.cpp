#include "buy_true.h"
#include "ui_buy_true.h"

buy_true::buy_true(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::buy_true)
{
    ui->setupUi(this);
}

buy_true::~buy_true()
{
    delete ui;
}

void buy_true::on_pushButton_clicked()
{
    this->close();
    this->now_store->show();
}

