#include  <iostream>
#include "Archer.h"
#include "Hero.h"

Archer::Archer( std::string nam, int atta,int max_hel)
//:Hero(nam,  atta, max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_hel;
    current_helth = max_helth;
}

inline void Archer::get_info()
{
    std::cout <<"Archer "<<name <<' '<< current_helth<<'/'<<max_helth<<std::endl;
}

