#include "CombatManager.h"

void CombatManager::start() {
	while (!end()) {
		if (first->getSPD() >= second->getSPD()) {
			turn(1);
			if(!end())
				turn(2);
		}
		else {
			turn(2);
			if(!end())
				turn(1);
		}
	}
	cout << "Fin de combate.\n";
	system("Pause");
}

void CombatManager::turn(int ch) {
	Character* player;
	Character* enemy;
	if (ch == 1)	{ player = first;	enemy = second; }
	else			{ player = second;	enemy = first; }

	cout << "Turno de " << player->getName() << ", que quieres hacer?\n";
	cout << "1. Atacar  2. Ataque arriesgado\n";

	int op = 0;
	while (op != 1 && op != 2) {
		cin >> op;
		system("CLS");
		switch (op) {
		case 1: case 2:
			ataque(op, player, enemy);
			break;
		default: 
			cout << "No existe esa opcion.\n";
			system("Pause");
			system("CLS");
			cout << "Turno de " << player->getName() << ", que quieres hacer?\n";
			cout << "1. Atacar  2. Ataque arriesgado\n";
			break;
		}
	}

	cout << "Fin de turno.\n";
	system("Pause");
	system("CLS");
}

bool CombatManager::end() {
	if (first->getHP() == 0 || second->getHP() == 0) return true;
	else return false;
}

void CombatManager::ataque(int a, Character* attacker, Character* victim) {
	if (a == 1) {
		victim->setHP(victim->getHP() - attacker->getATK());
		cout << victim->getName() << " pierde " << attacker->getATK() << " puntos de vida y se queda a " << victim->getHP() << " HP.\n";
	}
	else if (a == 2) {
		int aux = rand();
		if (aux % 2 == 1) {
			victim->setHP(victim->getHP() - (attacker->getATK() * 2));
			cout << victim->getName() << " pierde " << attacker->getATK()*2 << " puntos de vida y se queda a " << victim->getHP() << " HP.\n";
		}
		else {
			attacker->setHP(attacker->getHP() - attacker->getATK());
			cout << attacker->getName() << " tropieza y pierde " << attacker->getATK() << " puntos de vida.\n";
		}
	}
}


