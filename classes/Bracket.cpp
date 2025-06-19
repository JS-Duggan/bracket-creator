#include <iostream>
#include <iomanip>

#include "Bracket.h"

#define BASE  "\033[0m"
#define GREEN "\033[32m"
#define RED   "\033[31m"

Bracket::Bracket() {}; 

Bracket::Bracket(std::vector<Player> players) : players(players){};

void Bracket::displayBracket() {
  system("clear");
  for (int i = 0; i < roundsComplete + 1; i++) {
    std::cout << "Round " << i + 1 << ":" << std::endl;
    for (int j = 0; j < rounds[i].size(); j++) {
      std::cout << "  Game " << j + 1 << ":  ";
      if (rounds[i][j].winner) {
        std::cout << GREEN << std::left << std::setw(10) << rounds[i][j].winner->getName() 
                  << BASE << " vs.   " 
                  << std::left << rounds[i][j].loser->getName() 
                  << std::endl;
      } else {
        std::cout << std::left << std::setw(10) << rounds[i][j].Player1->getName() 
                  << " vs.   " 
                  << std::left << rounds[i][j].Player2->getName() 
                  << std::endl;
      }
    }
  }
}
