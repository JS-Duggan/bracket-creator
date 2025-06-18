#include <iostream>
#include <iomanip>

#include "Bracket.h"

Bracket::Bracket() {}; 

Bracket::Bracket(std::vector<Player> players) : players(players){};

void Bracket::displayBracket() {
  for (int i = 0; i < roundsComplete + 1; i++) {
    std::cout << "Round " << i + 1 << ":" << std::endl;
    for (int j = 0; j < rounds[i].size(); j++) {
      std::cout << "  Game " << j + 1 << ":  "
                << std::left << std::setw(10) << rounds[i][j].Player1->getName() 
                << " vs.   " 
                << std::left << rounds[i][j].Player2->getName() 
                << std::endl;
    }
  }
}
