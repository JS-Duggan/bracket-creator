#ifndef BRACKET_H
#define BRACKET_H

#include <vector>
#include "Player.h"
#include "Pairing.h"

class Bracket {
public:
  Bracket();
  Bracket(std::vector<Player> players);
  void displayBracket();
  virtual void createBracket()=0;
  virtual void runBracket()=0;
  virtual void nextRound()=0;
  
protected:
  std::vector<Player> players;
  std::vector<std::vector<Pairing>> rounds;
  int roundsComplete = 0;
};

#endif
