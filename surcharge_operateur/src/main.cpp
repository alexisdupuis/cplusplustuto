#include <iostream>
#include "../include/Fraction.h"
#include "../include/Duration.h"

using namespace std;

int main() {
  Fraction a(3, 4);      //Déclare une fraction valant 4/5
  Fraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
  Fraction c,d;         //Déclare deux fractions valant 0

  Duration duration(1, 30, 55);

  c = a / b;
  cout << duration << endl;
    // c = a+b;               //Calcule 4/5 + 2/1 = 14/5

    // d = a*b;               //Calcule 4/5 * 2/1 = 8/5

    // cout << a << " + " << b << " = " << c << endl;

    // cout << a << " * " << b << " = " << d << endl;

    // if(a > b)
    //     cout << "a est plus grand que b." << endl;
    // else if(a==b)
    //     cout << "a est egal a b." << endl;
    // else
    //     cout << "a est plus petit que b." << endl;

    return 0;
}