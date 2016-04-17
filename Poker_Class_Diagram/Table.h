#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Table
{
public:
	vector <int> table_cards;
	void Show() const;
	Table();
	~Table();
};

