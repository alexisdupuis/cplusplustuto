#include <iostream>
#include <string>
#include "../include/operations.h"

using namespace std;

int main() {
  int firstValue, secondValue;
  do { // La boucle while sera effectuée toujours au moins une fois si on utilise do.
    string operation;
    cout << "Veuillez choisir le premier nombre." << endl;
    cin >> firstValue;
    cout << "Veuillez choisir le deuxième nombre." << endl;
    cin >> secondValue;
    cin.ignore();
    cout << "Quelle opération souhaitez-vous effectuer ? (mul, div, add, sou)" << endl;
    getline(cin, operation);

    if (operation == "mul") {
      cout << "Le résultat du calcul est " << mul(firstValue, secondValue) << endl;
    } else if (operation == "div") {
      cout << "Le résultat du calcul est " << div(firstValue, secondValue) << endl;
    } else if (operation == "add") {
      cout << "Le résultat du calcul est " << add(firstValue, secondValue) << endl;
    } else if (operation == "sou") {
      cout << "Le résultat du calcul est " << sou(firstValue, secondValue) << endl;
    } else {
      cout << "Cette opération n'existe pas. Veuillez recommencer" << endl;
    }
  } while (true);
}