#include <iostream>

using namespace std;

int main() {
  int counter, max;
  cout << "Veuillez choisir jusqu'à quel nombre le programme doit compter." << endl;
  cin >> max;
  for (counter = 0; counter <= max; counter++) {
    cout << counter << " ";
  }
  return 0;
}