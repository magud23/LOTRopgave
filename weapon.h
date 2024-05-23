#pragma once

class Weapon{
public:
    Weapon(int damage):_damage(damage)
        {}

    int getDamage()
    {
        return _damage;
    }

    void sharpen()
    {
        _damage++;
    }
private:
    int _damage;
};
