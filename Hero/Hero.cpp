#include "Hero.h"
#include <iostream>
#include <string>

Hero::Hero(  std::string nam, int atta,int max_hel)
{
    name = nam;
    attack = atta;
    max_helth = max_helth;
    current_helth = max_hel;
}
void Hero::set_attack(int i)
{
    attack = i;
}

int Hero::get_attack()
{
    return attack;
}

void Hero::set_max_helth(int i)
{
    max_helth = i;
}

int Hero::get_max_helth()
{
    return max_helth;
}


void Hero::set_current_helth(int i)
{
    current_helth = i;
}

int Hero::get_current_helth()
{
    return current_helth;
}