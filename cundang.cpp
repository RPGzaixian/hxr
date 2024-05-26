#include"cundang.h"
#include"ui_cundang.h"
Cundang::Cundang(QWidget *parent)
    : QWidget(parent)
    , ui(new Uid::Cundang)
{
    ui->setupUi(this);
}

Cundang::~Cundang()
{
    delete ui;
}

void Cundang::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/11/9bee094f620cca754958bf7f32b30dae.jpg"));
}

void Cundang::on_pushButton_clicked()
{

}
