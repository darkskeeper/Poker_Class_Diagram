#pragma once
#include "Player.h"
#include "AIPlayer.h"
#include "Table.h"
#include "Deck.h"

class Dealer
{
private:
	int bank;
	Deck deck;
	int GiveCard();
public:
	int current_bet;
	void DeckShuffle();
	int GiveBank();
	void RaiseBank(int amount);
	void FirstDeal(vector <Player> players, AIPlayer AI, Table table);
	void AddCardToTable(Table table);
	void CheckWinner(vector <Player> players, AIPlayer AI, Table table);
	Dealer();
	~Dealer();
};

