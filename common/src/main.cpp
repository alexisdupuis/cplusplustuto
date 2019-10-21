#include <iostream>
#include <string> // Permet d'utiliser le type string
#include <cmath> // Permet d'utiliser des fonctions pour certains calculs type sqrt() pour la racine carrée.
#include <vector> // Permet d'instancier des tableaux dynamiques.

using namespace std;

int swap(int& a, int& b) {
  int tmp(a);
  a = b;
  b = tmp;
}

void printArrayElements(int array[], int arrayLength) {
  for (int i = 0; i < arrayLength; i++) {
    cout << array[i] << endl;
  }
}

void printArrayElements(vector<int> const& array) {
  for (int i = 0; i < array.size(); i++) {
    cout << array[i] << endl;
  }
}

void doNothing(string const& text) {}
// L'argument avec const permet de passer une variable par référence tout en empêchant la modification de cette dernière.

int main() {
  char a('a'); // Nécessité d'utiliser les guillemets simples pour les char, et les guillemets doubles pour les string
  int const valeurConstante(5); // Les variables "const" sont des variables qui ne changeront jamais de valeur dans l'application.
  string userInput("Coucou");
  string& refVariable(userInput); // Référence vers la variable userInput



  int firstNumber, secondNumber;
  
  cout << "Veuillez écrire un premier nombre" << endl;
  cin >> firstNumber;
  cout << "Veuillez écrire un second nombre" << endl;
  cin >> secondNumber;
  cin.ignore(); // Nécessaire si on mélange cin >> X et getline().

  // cout << "Veuillez écrire une chaîne de caractère." << endl;
  // getline(cin, userInput); // Permet de récupérer toute la ligne qu'écrira l'utilisateur.

  int const arrayLength(6);
  int array[arrayLength]; // Déclaration de tableau statique.

  array[0] = 2;
  array[1] = 3;
  array[2] = 5;
  array[3] = 8;
  array[4] = 13;
  array[5] = 21;

  printArrayElements(array, arrayLength);

  vector<int> arrayTwo(5, 3); // Tableau dynamique de 5 entiers valant tous 3.
  cout << arrayTwo.size() << endl;
  arrayTwo.push_back(7);
  cout << arrayTwo.size() << endl;

  printArrayElements(arrayTwo);

  vector<vector<int>> grid;
  grid.push_back(vector<int>(5, 0));
  grid.push_back(vector<int>(3, 4));

  // cout << "Après le swap, le premier nombre vaut " << firstNumber << " et le second nombre vaut " << secondNumber << endl;
  // cout << refVariable << endl;
  return 0;
}

/*
  Opérations rapides :
  double number(5.3);
  number += 4.2;       //'number' vaut maintenant 9.5
  number *= 2.;        //'number' vaut maintenant 19
  number -= 1.;        //'number' vaut maintenant 18
  number /= 3.;        //'number' vaut maintenant 6
  return 0;
 */