#pragma once
#include <fstream>
#include <string>
#include <time.h>
#include <ctime>
#include <vector>
using namespace std;

class Logger
{
public:
	static string Parser(int Card) const;
	static void WriteCardsToFile(char* FileName, vector <int> cards, char *Message) const;
	static void WriteMessageToFile(char* FileName, char* Message) const;
	Logger();
	~Logger();
};