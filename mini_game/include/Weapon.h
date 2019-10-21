#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {

  private:
    static int weaponCounter;
    std::string weaponName;
    int weaponDamages;

  public:
    Weapon();
    Weapon(std::string startingWeaponName, int startingWeaponDamages);
    ~Weapon(); // Destructeur
    int getDamages() const;
    void showStats() const;
    static int numberOfWeapons();

};

#endif // WEAPON_H