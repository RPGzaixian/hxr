#include "jiemian.h"
#include "ui_jiemian.h"

jiemian::jiemian(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::jiemian)
{
    ui->setupUi(this);
}

jiemian::~jiemian()
{
    delete ui;
}
