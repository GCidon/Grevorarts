#pragma once
#include <string>

using namespace std;

class Character
{
protected:
	string name;
	int maxHP;
	int hp;
	int atk;
	int spd;

public:
	Character() {}
	Character(string n, int vida, int ataque, int vel) : name(n), maxHP(vida), hp(vida), atk(ataque), spd(vel) {}

	string getName();
	int getHP();
	int getATK();
	int getSPD();

	void setHP(int aux);
};

