#include "widget.h"
#include"store.h"
#include <QApplication>
#include"package.h"


std::vector<std::pair<goods,int>> backage::a;


int main(int argc, char *argv[])
{
    backage::a.push_back(std::make_pair(goods_hp(),0));
    backage::a.push_back(std::make_pair(goods_ap(),0));
    backage::a.push_back(std::make_pair(goods_ex(),0));
    QApplication a(argc, argv);
    Widget w;
    w.show();
    // worr o(1090);
    // store q(o);
    // q.show();
    // package opo;
    // opo.show();

    return a.exec();
}
