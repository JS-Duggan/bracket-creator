#include "Pairing.h"

Pairing::Pairing() : Player1(nullptr), Player2(nullptr){};

Pairing::Pairing(Player* p1, Player* p2) : Player1(p1), Player2(p2){};

void Pairing::setWinner(int index) {
  if (index == 1) {
    winner = Player1;
    loser = Player2;
  } else {
    winner = Player2;
    loser = Player1;
  }
  winner->addWin();
  loser->addLoss();
}
