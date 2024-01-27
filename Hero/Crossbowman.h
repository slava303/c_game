#ifndef CROSSBOWMAN_H
#define CROSSBOWMAN_H

#include "Hero.h"
#include <string>
#include <iostream>

class Crossbowman : public Hero {
public:
    Crossbowman( std::string nam, int atta,int max_hel);
   inline void get_info();
   
};



#endif 

