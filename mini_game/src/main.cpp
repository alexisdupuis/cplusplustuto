#include <iostream>
#include <string>
#include <vector>
#include "../include/Character.h"
#include "../include/Wizard.h"
#include "../include/Warrior.h"

using namespace std;

void showType(Character const& character) {
  character.type();
}
int main() {

  vector<Character*> characters;

  characters.push_back(new Warrior(150, 100));
  characters.push_back(new Wizard(125, 150));

  characters[0]->type();
  characters[1]->type();

  cout << "Number of characters: " << Character::numberOfCharacters() << endl;
  cout << "Number of weapons: " << Weapon::numberOfWeapons() << endl;

  for (int i = 0; i < characters.size(); i++) {
    delete characters[i];
    characters[i] = 0;
  }

  cout << "Number of characters: " << Character::numberOfCharacters() << endl;
  cout << "Number of weapons: " << Weapon::numberOfWeapons() << endl;

  return 0;
  
}