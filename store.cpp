#include "store.h"
#include "ui_store.h"
#include"trade.h"
#include"buy_false.h"
#include"buy_true.h"
#include"init.h"
store::store(worr&a,QWidget *parent)
    : QWidget(parent),
    costomer(a)
    , ui(new Ui::store)
{
    ui->setupUi(this);
    this->ui->label_6->setText(QString::fromStdString(std::to_string(a.money)));
}

store::~store()
{
    delete ui;
}

void store::on_pushButton_1_clicked()
{
    if(this->costomer.money>=init::goodshp_price){
        costomer.money-=init::goodshp_price;
        bool isfun=false;
        for(auto i=backage::a.begin();i!=backage::a.end();i++){
            if(i->first.name=="heal fruit"){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                backage::a.insert(i,p);
                backage::a.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            backage::a.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(costomer.money)));
        buy_true*sonwid=new buy_true;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
    else{
        buy_false*sonwid=new buy_false;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
}

void store::on_pushButton_2_clicked()
{
    if(this->costomer.money>=init::goodsap_price){
        costomer.money-=init::goodsap_price;
        bool isfun=false;
        for(auto i=backage::a.begin();i!=backage::a.end();i++){
            if(i->first.name==init::goodsap_name){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                backage::a.insert(i,p);
                backage::a.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            backage::a.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(costomer.money)));
        buy_true*sonwid=new buy_true;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
    else{
        buy_false*sonwid=new buy_false;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
}


void store::on_pushButton_3_clicked()
{
    if(this->costomer.money>=init::goodsexp_price){
        costomer.money-=init::goodsexp_price;
        bool isfun=false;
        for(auto i=backage::a.begin();i!=backage::a.end();i++){
            if(i->first.name==init::goodshp_name){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                backage::a.insert(i,p);
                backage::a.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            backage::a.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(costomer.money)));
        buy_true*sonwid=new buy_true;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
    else{
        buy_false*sonwid=new buy_false;
        sonwid->now_store=this;
        sonwid->setModal(true);
        sonwid->show();
    }
}

