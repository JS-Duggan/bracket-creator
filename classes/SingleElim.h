#ifndef SINGLE_ELIM_H
#define SINGLE_ELIM_H

#include "Bracket.h"

class SingleElim : public Bracket {
public:
  SingleElim(std::vector<Player> players);
  void createBracket();
  void runBracket();
};

#endif
