#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include "Weapon.h"

class Character {

  protected:
    static int characterCounter; // Attribut statique, fonctionne plus ou moins comme une variable globale.
    int healthPoints;
    Weapon *weapon;

  public:
    Character();
    Character(int startingHealthPoints);
    Character(std::string startingWeaponName, int startingWeaponDamages);
    Character(Character const& characterToCopy); // Constructeur de copie.
    virtual ~Character(); // Destructeur
    int getHealthPoints() const;
    void information(std::ostream& flux) const;
    virtual void type() const;
    bool isAlive() const; // Méthode constante, elle ne fait que de la lecture, pas de modifications.
    void takeDamages(int nbDamages);
    void equipWeapon(std::string startingWeaponName, int startingWeaponDamages);
    void attack(Character &target);
    Character& operator=(Character const& characterToCopy);
    static int numberOfCharacters(); // Méthode statique, accessible sans instancier la classe.
    
};

std::ostream& operator<<(std::ostream& flux, Character const& character);

#endif // CHARACTER_H