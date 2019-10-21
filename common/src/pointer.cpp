#include <iostream>
#include <string>

using namespace std;

int main() {
  int test(15);
  int *pointer(0);
  int *pointerTwo(0);
  pointerTwo = new int;
  *pointerTwo = 7;
  pointer = &test;
  cout << "La valeur de la variable est " << *pointerTwo << " et son adresse est " << pointerTwo << endl;
  delete pointerTwo;
  pointerTwo = 0;
  return 0;
}