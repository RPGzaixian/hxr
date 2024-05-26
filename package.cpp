#include "package.h"
#include "ui_package.h"
#include"trade.h"
#include"qstring.h"
#include<vector>
package::package(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::package)
{
    ui->setupUi(this);
    auto ptr=backage::a.begin();
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
    auto ptr=backage::a.begin();
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
