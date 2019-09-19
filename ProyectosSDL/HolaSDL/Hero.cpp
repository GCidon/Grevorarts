#include "Hero.h"

Hero::Hero(string n, int cl): Character(n, 0, 0, 0) {
	switch (cl) {
	case 1:
		maxHP = 20;
		hp = 20;
		atk = 5;
		spd = 2;
		clase = "Guerrero";
		maxMana = 5;
		currentMana = 5;
		break;
	case 2: default:
		maxHP = 15;
		hp = 15;
		atk = 4;
		spd = 3;
		clase = "Caballero";
		maxMana = 7;
		currentMana = 7;
		break;
	case 3:
		maxHP = 10;
		hp = 10;
		atk = 3;
		spd = 4;
		clase = "Ladron";
		maxMana = 5;
		currentMana = 5;
		break;
	case 4:
		maxHP = 10;
		hp = 10;
		atk = 3;
		spd = 3;
		clase = "Mago";
		maxMana = 20;
		currentMana = 20;
		break;
	}
}

void Hero::printMoves() {
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << moveset[i].name << ".\n";
	}
}