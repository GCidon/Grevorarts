
#include "SDL.h"
#include "SDL_image.h"
#include "checkML.h"
#include <iostream>
#include "Character.h"
#include "CombatManager.h"

using namespace std;

using uint = unsigned int;

void firstTest() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); // Check Memory Leaks
	/*SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	const uint winWidth = 800;
	const uint winHeight = 600;
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("Videoguejo", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, winWidth, winHeight, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (window == nullptr || renderer == nullptr)
		cout << "Error cargando SDL" << endl;
	else {
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(5000);
	}
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();*/

	Character* hero = new Character("Tordo", 10, 2, 3);
	Character* monster = new Character("Goblin", 5, 1, 2);

	CombatManager cm(hero, monster);

	cout << "Eres " << hero->getName() << ", y vas a enfrentarte a " << monster->getName() << ".\n";
	cout << "Que quieres hacer?\n1. Atacar  2. Huir\n";
	int op = 0;
	while (op != 1 && op != 2) {
		cin >> op;
		system("CLS");
		if (op == 1) {
			cm.start();
		}
		else if (op == 2) {
			cout << "Huyes tranquilamente.\n";
		}
		else {
			cout << "No existe esa opcion.\n";
			system("Pause");
			system("CLS");
			cout << "Eres " << hero->getName() << ", y vas a enfrentarte a " << monster->getName() << ".\n";
			cout << "Que quieres hacer?\n1. Atacar  2. Huir\n";
		}
	}
}

int main(int argc, char* argv[]){
	firstTest();
	return 0;
}