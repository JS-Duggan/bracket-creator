#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
  Player();
  Player(std::string name);

private:
  int wins;
  int losses;
  int draws;
  std::string name;
};

#endif
