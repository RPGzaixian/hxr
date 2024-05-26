#include "keyswitch.h"
#include "ui_keyswitch.h"

Keyswitch::Keyswitch(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Keyswitch)
{
    ui->setupUi(this);
}

Keyswitch::~Keyswitch()
{
    delete ui;
}

void Keyswitch::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}

