#include "../include/Warrior.h"
#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior() : Character(), manaPoints(100) {}

Warrior::Warrior(int startingManaPoints) : Character(), manaPoints(startingManaPoints) {}

Warrior::Warrior(int startingHealthPoints, int startingManaPoints) : Character(startingHealthPoints), manaPoints(startingManaPoints) {}

Warrior::~Warrior() {}

int Warrior::getManaPoints() const {
  return manaPoints;
}

void Warrior::information(ostream& flux) const {
  Character::information(flux);
  flux << " It also has " << manaPoints << " mana points.";
}

void Warrior::type() const {
  cout << "This character is a warrior." << endl;
}

ostream& operator<<(ostream& flux, Warrior const& warrior) {
  warrior.information(flux);
  return flux;
}
