#include  <iostream>
#include "Wizard.h"
#include "Hero.h"

Wizard::Wizard( std::string nam, int atta,int max_hel)
//:Hero(nam,atta,max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_hel;
    current_helth = max_helth;
}

inline void Wizard::get_info()
{
    std::cout <<"Wizard "<<name <<' '<< current_helth<<'/'<<max_helth<<std::endl;
}

