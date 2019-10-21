#include "../include/Weapon.h"
#include <iostream>
#include <string>

using namespace std;

int Weapon::weaponCounter = 0;

Weapon::Weapon() : weaponName("Club"), weaponDamages(10) {
  ++weaponCounter;
}

Weapon::Weapon(string newWeaponName, int newWeaponDamages) : weaponName(newWeaponName), weaponDamages(newWeaponDamages) {
  ++weaponCounter;
}

Weapon::~Weapon() {
  --weaponCounter;
}

int Weapon::getDamages() const {
  return weaponDamages;
}

void Weapon::showStats() const {
  cout << "This weapon is called " << weaponName << " and can deal " << weaponDamages << " damages per hit." << endl;
}

int Weapon::numberOfWeapons() {
  return weaponCounter;
}