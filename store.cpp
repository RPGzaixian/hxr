#include "store.h"
#include "ui_store.h"
#include"trade.h"
#include"buy_false.h"
#include"buy_true.h"
#include"init.h"
#include"the_init_for_store.h"

extern hero*main_hero;
extern std::vector<std::pair<goods,int>> items_backage;

store::store(QWidget *parent)
    : QWidget(parent),
     ui(new Ui::store)
{
    ui->setupUi(this);
    this->ui->label_6->setText(QString::fromStdString(std::to_string(main_hero->money)));
}

store::~store()
{
    delete ui;
}

void store::on_pushButton_1_clicked()
{
    if(main_hero->money>=init::goodshp_price){
        main_hero->money-=init::goodshp_price;
        bool isfun=false;
        for(auto i=items_backage.begin();i!=items_backage.end();i++){
            if(i->first.name=="heal fruit"){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                items_backage.insert(i,p);
                items_backage.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            items_backage.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(main_hero->money)));
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
    if(main_hero->money>=init::goodsap_price){
        main_hero->money-=init::goodsap_price;
        bool isfun=false;
        for(auto i=items_backage.begin();i!=items_backage.end();i++){
            if(i->first.name==init::goodsap_name){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                items_backage.insert(i,p);
                items_backage.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            items_backage.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(main_hero->money)));
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
    if(main_hero->money>=init::goodsexp_price){
        main_hero->money-=init::goodsexp_price;
        bool isfun=false;
        for(auto i=items_backage.begin();i!=items_backage.end();i++){
            if(i->first.name==init::goodsex_name){
                std::pair<goods,int> p=std::make_pair(i->first,i->second+1);
                items_backage.insert(i,p);
                items_backage.erase(i+1);
                isfun=true;
                break;
            }
        }
        if(!isfun){
            goods_hp good;
            items_backage.push_back(std::make_pair(good,1));
        }
        this->ui->label_6->setText(QString::fromStdString(std::to_string(main_hero->money)));
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

