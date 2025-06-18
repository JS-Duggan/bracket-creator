#include <cmath>
#include <algorithm>
#include <random>

#include "SingleElim.h"
#include "Pairing.h"

SingleElim::SingleElim(std::vector<Player> players): Bracket(players) {}

void SingleElim::createBracket() {
  int participants = players.size();
  std::random_device rd;
  std::mt19937 rng(rd());
  std::shuffle(players.begin(), players.end(), rng);
  std::vector<Pairing> newRound;

  for (int i = 0; i < participants; i+=2) {
    newRound.push_back(Pairing(&players[i], &players[i+1]));
  }
  rounds.push_back(newRound);

  for (int round = 1; round < static_cast<int>(std::ceil(participants / 2.0)); round++) {
    std::vector<Pairing> currRound;
    for (int i = 0; i < rounds[round-1].size(); i+=2) {
      currRound.push_back(Pairing(rounds[round-1][i].winner, rounds[round-1][i+1].winner));
    }
    rounds.push_back(currRound);
  }
}
  

