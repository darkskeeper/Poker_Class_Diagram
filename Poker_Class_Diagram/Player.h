#pragma once
#include "Hand.h"

class Player
{
public:
	bool in_game = true;
	vector <int> current_comb;
	int comb_rank;
	Hand hand;
	int bank;
	void Call();
	void Raise();
	void Fold();
	void ShowHand() const;
	void DetermineComb(Table table);
	Player();
	~Player();
};

