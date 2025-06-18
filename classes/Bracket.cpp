#include <iostream>

#include "Bracket.h"

Bracket::Bracket() {}; 

Bracket::Bracket(std::vector<Player> players) : players(players){};

void Bracket::displayBracket() {
  for (int i = 0; i < roundsComplete + 1; i++) {
    std::cout << "Round " << i + 1 << ":" << std::endl;
    for (int j = 0; j < rounds[i].size(); j++) {
      std::cout << "  " << "Game " << j + 1 << ":";
      std::cout << "  " << rounds[i][j].Player1->getName() << " vs. " << rounds[i][j].Player2->getName() << std::endl;
    }
  }
}
