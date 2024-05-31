#include "widget.h"
#include "ui_widget.h"
#include"saving.h"
#include"menu.h"
#include"reallyquit.h"
#include"qstring.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/11/9bee094f620cca754958bf7f32b30dae.jpg"));
}

// void Widget::on_pushButton_clicked()
// {
//     Form *form=new Form();
//     form->show();
//     this->close();
// }


void Widget::on_pushButton_2_clicked()
{
    Menu*menu=new Menu();
    menu->show();
    menu->ret=this;
    this->close();
}


void Widget::on_pushButton_clicked()
{
    Saving *saving=new Saving();
    saving->show();
    saving->ret=this;
    this->close();
}


void Widget::on_pushButton_3_clicked()
{
    ReallyQuit *reallyquit=new ReallyQuit(this);
    reallyquit->setModal(true);
    reallyquit->show();
}
