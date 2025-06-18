#ifndef PAIRING_H
#define PAIRING_H

#include "Player.h"

struct Pairing {
  Pairing();
  Pairing(Player* p1, Player* p2);

  Player* Player1;
  Player* Player2;
  Player* winner = nullptr;
  Player* loser = nullptr;
  bool draw = false;
};

#endif
