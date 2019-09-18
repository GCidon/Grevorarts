#include "Character.h"

string Character::getName() {
	return name;
}
int Character::getHP() {
	return hp;
}
int Character::getATK() {
	return atk;
}
int Character::getSPD() {
	return spd;
}

void Character::setHP(int aux) {
	hp = aux;
	if (hp < 0) hp = 0;
}

