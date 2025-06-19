#include <cmath>
#include <algorithm>
#include <random>
#include <iomanip>
#include <cstdlib>

#include <iostream>

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
    if (i+1 >= participants) {
      newRound.push_back(Pairing(&players[i], new Player("Bye")));
    } else {
      newRound.push_back(Pairing(&players[i], &players[i+1]));
    }
  }
  rounds.push_back(newRound);

}

void SingleElim::runBracket() {
  for (int i = 0; i < rounds[roundsComplete].size(); i++) {
    if (rounds[roundsComplete][i].Player2->getName() == "Bye") {
      rounds[roundsComplete][i].setWinner(1);
      continue;
    }
    system("clear");
    displayBracket();
    int winner;
    std::cout << std::endl;
    std::cout << "Winner for Game " << i + 1 << " [ 1 / 2 ]: ";
    std::cin >> winner;
    if (winner < 0 || winner > 2) i--;
    rounds[roundsComplete][i].setWinner(winner);
  }
  roundsComplete++;
  nextRound();
}

void SingleElim::nextRound() {
  std::vector<Pairing> newRound;
  int participants = rounds[roundsComplete - 1].size();
  for (int i = 0; i < participants; i+=2) {
    if (i+1 >= participants) {
      newRound.push_back(Pairing(rounds[roundsComplete-1][i].winner, new Player("Bye")));
    } else {
      newRound.push_back(Pairing(rounds[roundsComplete-1][i].winner, rounds[roundsComplete-1][i+1].winner));
    }
  }
  rounds.push_back(newRound);
}
