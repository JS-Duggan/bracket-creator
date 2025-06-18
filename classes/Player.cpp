#include "Player.h"

int Player::identifier = 1;

Player::Player() : wins(0), losses(0), draws(0), name("Player" + std::to_string(Player::identifier++)){};

Player::Player(std::string name) : wins(0), losses(0), draws(0), name(name){};

void Player::addWin() { wins++; }

void Player::addLoss() { losses++; }

void Player::addDraw() { draws++; }

int* Player::getRecord() {
  int* record = new int[3]{ wins, losses, draws };
  return record;
}

std::string Player::getName() { return name; }
