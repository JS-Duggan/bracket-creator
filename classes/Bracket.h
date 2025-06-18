#ifndef BRACKET_H
#define BRACKET_H

#include <vector>
#include "Player.h"

class Bracket {
public:
  Bracket();
  Bracket(std::vector<Player> players);
  virtual void createBracker();
private:
  std::vector<Player> players;
};

#endif
