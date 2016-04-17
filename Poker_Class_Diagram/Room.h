#pragma once
#include "Dealer.h"

class Room
{
private:
	vector <Player> players;
	AIPlayer AI;
	Dealer dealer;
	vector <int> bets;
	Table table;
	bool can_continue = false;
public:
	void AddPlayer();
	void StartGame();
	void PlayerTurn();
	void AITurn();
	void ContinueGame();
	void FinishGame();
	Room();
	~Room();
};