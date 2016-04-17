#pragma once
#include "Hand.h"

class AIPlayer
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
	void WhatToDo();
	void DetermineComb(Table table);
	AIPlayer();
	~AIPlayer();
};

