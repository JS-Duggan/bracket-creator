#include "Player.h"

Player::Player() : wins(0), losses(0), draws(0), name("Player"){};

Player::Player(std::string name) : wins(0), losses(0), draws(0), name(name){};

void Player::addWin() { Player::wins++; }

void Player::addLoss() { Player::losses++; }

void Player::addDraw() { Player::draws++; }

int* Player::getRecord() {
  int* record = new int[3]{ Player::wins, Player::losses, Player::draws };
  return record;
}

std::string Player::getName() { return Player::name; }
