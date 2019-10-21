#include "../include/Character.h"
#include "../include/Weapon.h"
#include <iostream>
#include <string>

using namespace std;

int Character::characterCounter = 0;

Character::Character() : healthPoints(100), weapon(0) {
  ++characterCounter;
  weapon = new Weapon();
}

Character::Character(int startingHealthPoints) : healthPoints(startingHealthPoints), weapon(0) {
  ++characterCounter;
  weapon = new Weapon();
}

Character::Character(string startingWeaponName, int startingWeaponDamages) : healthPoints(100), weapon(0) {
  ++characterCounter;
  weapon = new Weapon(startingWeaponName, startingWeaponDamages);
}

Character::Character(Character const& characterToCopy) : healthPoints(characterToCopy.healthPoints), weapon(0) {
  ++characterCounter;
  weapon = new Weapon(*characterToCopy.weapon);
}

Character::~Character() {
  delete weapon;
  --characterCounter;
}

int Character::getHealthPoints() const {
  return healthPoints;
}

void Character::information(ostream& flux) const {
  flux << "This character has " << healthPoints << " health points.";
}

void Character::type() const {
  cout << "This character has no type." << endl;
}

bool Character::isAlive() const {
  return healthPoints > 0;
}

void Character::takeDamages(int nbDamages) {
  healthPoints -= nbDamages;
  if (healthPoints < 0) {
    healthPoints = 0;
  }
}

void Character::equipWeapon(string startingWeaponName, int startingWeaponDamages) {
  weapon = new Weapon(startingWeaponName, startingWeaponDamages);
}

void Character::attack(Character &target) {
  target.takeDamages(weapon->getDamages());
}

Character& Character::operator=(Character const& characterToCopy) {
  if(this != &characterToCopy) {
    healthPoints = characterToCopy.healthPoints;
	  delete weapon;
    weapon = new Weapon(*(characterToCopy.weapon));
  }
  return *this;
}

int Character::numberOfCharacters() {
  return characterCounter;
}

ostream& operator<<(ostream& flux, Character const& character) {
    character.information(flux);
    return flux;
}