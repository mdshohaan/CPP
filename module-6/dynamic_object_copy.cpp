#include <iostream>
using namespace std;

class Player {
public:
  string name;
  int jersey;

  Player(string name, int jersey) {
    this->name = name;
    this->jersey = jersey;
  }
};

int main() {

  Player *Dhoni = new Player("Dhoni", 10);
  Player *Kholi = new Player("Kholi", 20);
  // Kholi = Dhoni; // this way copy of address but this not good approach

  // Kholi->jersey = Dhoni->jersey;
  // Kholi->name = Dhoni->name;
  //* direffrence the whole object
  *Kholi = *Dhoni; // shortCut

  delete Dhoni;
  cout << Kholi->jersey;

  return 0;
}