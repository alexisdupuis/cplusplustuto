#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string const fileName("resources/test.txt");
  ofstream fileToWrite(fileName.c_str(), ios::app); // Ouverture d'un fichier en écriture, ajout de texte à la suite.
  if (fileToWrite) {
    fileToWrite << "Ceci est une phrase écrite dans un fichier." << endl;
  } else {
    cout << "Erreur lors du chargement du fichier !" << endl;
    return -1;
  }

  ifstream fileToRead(fileName.c_str()); // Permet d'ouvrir un fichier en lecture.
  if (fileToRead) {
    string line, word;
    fileToRead >> word; // Lecture d'un mot.
    fileToRead.ignore();
    getline(fileToRead, line); // Lecture d'une ligne.
    // fileToRead.get(char) // Lecture d'un caractère.
    cout << word << endl << line << endl;
    fileToRead.close(); // Permet de fermer manuellement le flux.
  } else {
    cout << "Erreur lors du chargement du fichier !" << endl;
    return -1;
  }
}

// Pour savoir où on est dans un fichier :
// tellg() en ifstream
// tellp() en ofstream

// Pour se déplacer dans un fichier :
// seekg(nbChar, position) en ifstream
// seekp(nbChar, position) en ofstream
// Valeurs pour position : ios::beg, ios::end, ios::cur