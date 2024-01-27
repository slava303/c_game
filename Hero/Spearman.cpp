#include  <iostream>
#include "Spearman.h"
#include "Hero.h"

Spearman::Spearman( std::string nam, int atta,int max_hel)
//:Hero(nam,atta,max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_hel;
    current_helth = max_helth;
}

inline void Spearman::get_info()
{
    std::cout <<"Spearman "<<name <<' '<< current_helth<<'/'<<max_helth<<std::endl;
}

