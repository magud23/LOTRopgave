#pragma once

#include<iostream>
#include<string>
#include"weapon.h"


class Character{
public:
    Character(std::string name, int strength, int maxHP):
        _name(name), _strength(strength), _maxHP(maxHP), _currentHP(maxHP),_weapon(nullptr)
    {}

    std::string getName()
    {
        return _name;
    }

    void giveWeapon(Weapon *w)
    {
        _weapon = w;  // sets pointer _weapon to point to a same weapon being pointed to by w
    }

    int computeAttackDamage()
    {
        if(_weapon) //is pointer not null?
        {
            return _weapon->getDamage() + _strength;
        }
        return 0;
    }


    void takeDamage(int damage)
    {
        _currentHP -= damage;

        if(_currentHP < 1)
        {
            std::cout << _name << " IS DEAD! \n";
            return;
        }
        std::cout << _name << " has " << _currentHP << " HP left \n";

    }

    void attack(Character * anotherChar)
    {

        std::cout << _name << " attacks " << anotherChar->getName() << " >>> ";
        anotherChar->takeDamage(computeAttackDamage());

    }

private:
    std::string _name;
    int _strength;
    int _maxHP;
    int _currentHP;
    Weapon * _weapon;
};
