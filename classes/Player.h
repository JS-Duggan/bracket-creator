#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
  Player();
  Player(std::string name);
  void addWin();
  void addLoss();
  void addDraw();
  int* getRecord();
  std::string getName();

private:
  int wins;
  int losses;
  int draws;
  std::string name;
};

#endif
