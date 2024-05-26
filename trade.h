#ifndef TRADE_H
#define TRADE_H
#include<vector>
class backage;


class worr{
public:
    int now_hp;
    int now_ap;
    int hp,ap;
    int exp;
    int money;
    worr(int mon);
};
#include<iostream>
class goods{
public:
    std::string name;
    int price;
    std::string effect;
    void use();
};

class goods_hp:public goods{
public:
    goods_hp();
    void use(worr&a);
};
class goods_ex:public goods{
public:
    goods_ex();
    void use(worr&a);
};
class goods_ap:public goods{
public:
    goods_ap();
    void use(worr&a);
};


class backage{
public:
    static std::vector<std::pair<goods,int>> a;
};


#endif // TRADE_H
