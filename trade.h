#ifndef TRADE_H
#define TRADE_H
#include<vector>




#include<iostream>

class backage;
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
    // void use(worr&a);
};
class goods_ex:public goods{
public:
    goods_ex();
    // void use(worr&a);
};
class goods_ap:public goods{
public:
    goods_ap();
    // void use(worr&a);
};





#endif // TRADE_H
