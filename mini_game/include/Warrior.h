#ifndef WARRIOR_H
#define WARRIOR_H

#include "Character.h"
#include "Weapon.h"
#include <string>

class Warrior : public Character {

  private:
    int manaPoints;

  public:
    Warrior();
    Warrior(int startingManapoints);
    Warrior(int startingHealthPoints, int startingManaPoints);
    virtual ~Warrior();
    int getManaPoints() const;
    void information(std::ostream& flux) const;
    virtual void type() const;
    void bloodThirst();

};

std::ostream& operator<<(std::ostream& flux, Warrior const& Warrior);

#endif // WARRIOR_H