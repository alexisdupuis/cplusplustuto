#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string mysteryWord, shuffledWord, proposedWord;
  bool notFoundWord(true);
  cout << "Choisissez un mot à faire deviner à l'autre joueur." << endl;
  cin >> mysteryWord;
  shuffledWord = mysteryWord;
  random_shuffle(shuffledWord.begin(), shuffledWord.end());
  while (notFoundWord) {
    cout << "Devinez ce mot : " << shuffledWord << endl;
    cin >> proposedWord;
    if (proposedWord == mysteryWord) {
      cout << "Vous avez trouvé le mot !" << endl;
      return 0;
    }
  }
}