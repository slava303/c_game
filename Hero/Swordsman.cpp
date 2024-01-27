#include  <iostream>
#include "Swordsman.h"
#include "Hero.h"

Swordsman::Swordsman( std::string nam, int atta,int max_hel)
//:Hero(nam,atta,max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_hel;
    current_helth = max_helth;
}

inline void Swordsman::get_info()
{
    std::cout <<"Swordsman "<<name <<' '<< current_helth<<'/'<<max_helth<<std::endl;
}

