#include "Game_Biboev.h"

#include <iostream>

int main()
{
	Game_Biboev game(1);

	// проверка конструктора копирования
	//game.gamers[0].buildings.push_back("saray"); 
	//Game_Biboev g2 = game;
	//std::cout << g2.gamers[0].buildings[0]; // выводит сарай, всё копируется

	game.phase1();
}