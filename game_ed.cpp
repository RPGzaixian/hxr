#include "game_ed.h"
#include "ui_game_ed.h"

game_ed::game_ed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game_ed)
{
    ui->setupUi(this);
}

game_ed::~game_ed()
{
    delete ui;
}
