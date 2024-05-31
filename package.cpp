#include "package.h"
#include "ui_package.h"
#include"trade.h"
#include"qstring.h"
#include<vector>
extern std::vector<std::pair<goods,int>> items_backage;
package::package(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::package)
{
    ui->setupUi(this);
    auto ptr=items_backage.begin();
    this->ui->label_2->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_2->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));
    ptr++;
    this->ui->label_4->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_3->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));
    ptr++;
    this->ui->label_6->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_4->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));

}
void package::flash(){
    auto ptr=items_backage.begin();
    this->ui->label_2->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_2->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));
    ptr++;
    this->ui->label_4->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_3->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));
    ptr++;
    this->ui->label_6->setText(QString::fromStdString(ptr->first.effect));
    this->ui->pushButton_4->setText(QString::fromStdString(ptr->first.name+'\n'+"还有"+std::to_string(ptr->second)+"个"));
}

package::~package()
{
    delete ui;
}

void package::on_pushButton_clicked()
{
    this->close();
}

