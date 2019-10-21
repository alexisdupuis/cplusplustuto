#ifndef WIZARD_H
#define WIZARD_H

#include "Character.h"
#include "Weapon.h"
#include <string>

class Wizard : public Character {

  private:
    int manaPoints;

  public:
    Wizard();
    Wizard(int startingManapoints);
    Wizard(int startingHealthPoints, int startingManaPoints);
    virtual ~Wizard();
    int getManaPoints() const;
    void information(std::ostream& flux) const;
    virtual void type() const;
    void fireBall();

};

std::ostream& operator<<(std::ostream& flux, Wizard const& wizard);

#endif // WIZARD_H