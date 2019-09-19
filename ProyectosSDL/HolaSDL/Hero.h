#pragma once
#include "Character.h"
#include <iostream>

using namespace std;

struct Move {
	string name;
	int str;
	int acc;
	int manacost;
};

class Hero :
	public Character
{
protected:
	string clase;
	int currentMana;
	int maxMana;
	Move moveset[4];

public:
	Hero(string n, int clase);

	void printMoves();
	
};

