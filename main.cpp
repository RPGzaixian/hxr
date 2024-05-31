#include "widget.h"
#include"store.h"
#include <QApplication>
#include"package.h"


extern std::vector<std::pair<goods,int>> items_backage;


int main(int argc, char *argv[])
{


    items_backage.push_back(std::make_pair(goods_hp(),0));
    items_backage.push_back(std::make_pair(goods_ap(),0));
    items_backage.push_back(std::make_pair(goods_ex(),0));
    QApplication a(argc,argv);
    Widget* w=new Widget;
    w->show();
    // worr o(1090);
    // store q(o);
    // q.show();
    // package opo;
    // opo.show();

    return a.exec();
}
