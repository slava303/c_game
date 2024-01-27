#include  <iostream>
#include "Crossbowman.h"
#include "Hero.h"

Crossbowman::Crossbowman( std::string nam, int atta,int max_hel)
//:Hero(nam,atta,max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_hel;
    current_helth = max_helth;
}

inline void Crossbowman::get_info()
{
    std::cout <<"Wizard "<<name <<' '<< current_helth<<'/'<<max_helth<<std::endl;
}

