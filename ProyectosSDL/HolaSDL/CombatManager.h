#pragma once

#include "Character.h"
#include <iostream>

using namespace std;

class CombatManager
{
protected:
	Character* first;
	Character* second;

public:
	CombatManager(Character* f, Character* s) : first(f), second(s) {}

	void start();
	void turn(int ch);
	bool end();

	void ataque(int a, Character* attacker, Character* victim);
};

