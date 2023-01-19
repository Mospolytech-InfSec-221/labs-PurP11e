#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Характеристики игрока
typedef struct Gamer {
	string name;
	int gold;
	int wood;
	int stone;
	int cube_1;
	int cube_2;
	int cube_3;
	int additional_cude; // доп. кубик
	bool has_adviser; // советник
	int military_register; // значение воинского реестра
	int victory_points; // победные очки
	vector<string> buildings; // вектор построек

} Gamer;

// советник и занявший его игрок
typedef struct Adviser {
	string adviser_name;
	string gamer_name;
	Adviser(string a_name, string g_name)
	{
		this->adviser_name = a_name;
		this->gamer_name = g_name;
	}
} Adviser;

class Game_Biboev
{
	//private:
public:
	vector<Gamer> gamers;
	vector<Adviser> advisers;
	int year;
	int phase;
	string enemy;
public:
	Game();
	~Game();
	Game(int gamers_count);
	Game(const Game&);

};