#include "../include/Wizard.h"
#include <iostream>
#include <string>

using namespace std;

Wizard::Wizard() : Character(), manaPoints(100) {}

Wizard::Wizard(int startingManaPoints) : Character(), manaPoints(startingManaPoints) {}

Wizard::Wizard(int startingHealthPoints, int startingManaPoints) : Character(startingHealthPoints), manaPoints(startingManaPoints) {}

Wizard::~Wizard() {}

int Wizard::getManaPoints() const {
  return manaPoints;
}

void Wizard::information(ostream& flux) const {
  Character::information(flux);
  flux << " It also has " << manaPoints << " mana points.";
}

void Wizard::type() const {
  cout << "This character is a wizard." << endl;
}

ostream& operator<<(ostream& flux, Wizard const& wizard) {
  wizard.information(flux);
  return flux;
}
