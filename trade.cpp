#include "trade.h"



//:name("heal fruit"),price(100),effect("it's very useful!")

goods_hp::goods_hp(){
    this->name="heal fruit";
    this->price=100;
    this->effect="useful!";
}
goods_ap::goods_ap(){
    this->name="ap fruit";
    this->price=200;
    this->effect="ok!";
}
goods_ex::goods_ex(){
    this->name="exp fruit";
    this->price=150;
    this->effect="good!";
}
// void goods_ap::use(worr&a){
//     a.now_ap+=10;
// }
// void goods_ex::use(worr &a){
//     a.exp+=100;
// }
// void goods_hp::use(worr &a){
//     a.now_hp=std::min(a.now_hp+100,a.hp);
// }

