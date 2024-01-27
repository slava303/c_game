#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "Hero.h"
#include <string>
#include <iostream>

class Swordsman : public Hero {
public:
    Swordsman( std::string nam, int atta,int max_hel);
   inline void get_info();
   
};



#endif 