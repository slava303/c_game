#ifndef WIZARD_H
#define WIZARD_H

#include "Hero.h"
#include <string>
#include <iostream>

class Wizard : public Hero {
public:
    Wizard( std::string nam, int atta,int max_hel);
   inline void get_info();
   
};



#endif 