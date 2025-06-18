#ifndef BRACKET_H
#define BRACKET_H

#include <vector>
#include "Player.h"
#include "Pairing.h"

class Bracket {
public:
  Bracket();
  Bracket(std::vector<Player> players);
  virtual void createBracket();
  virtual void nextRound();
private:
  std::vector<Player> players;
  std::vector<std::vector<Pairing>> rounds;
  int roundsComplete = 0;
};

#endif
