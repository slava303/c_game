#ifndef SPEARMAN_H
#define SPEARMAN_H

#include "Hero.h"
#include <string>
#include <iostream>

class Spearman : public Hero{
public:
    Spearman( std::string nam, int atta,int max_hel);
   inline void get_info();
};


#endif