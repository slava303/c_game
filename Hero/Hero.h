#ifndef HERO_H
#define HERO_H

#include <string>
#include <iostream>

class Hero {
public:
    std::string name;
    int attack;
    int max_helth;
    int current_helth;
    Hero( std::string nam, int atta,int max_hel);
    Hero()
    {

    };
    void set_attack(int i);
    int get_attack() ;
    void set_max_helth(int i);
    int get_max_helth();
    void set_current_helth(int i);
    int get_current_helth();
   

};

#endif