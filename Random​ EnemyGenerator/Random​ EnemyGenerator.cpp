// Random​ EnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>



enum class EnemyType { zombie, vampire, ghost, witch };

struct Enemy{
		EnemyType type;
		std::string name;
		int health;
};

Enemy CreateRandomEnemy() {
	srand(time(NULL));//funcion que altera la seed 
	Enemy mal;
	mal.type = EnemyType(rand() % 4);
	mal.health = (rand() % 100) + 100;
	switch (rand() % 8)
	{
	case 0:
		mal.name = "Hipolit";
		break;
	case 1:
		mal.name = "WoloWizard";
		break;
	case 2:
		mal.name = "benq";
		break;
	case 3:
		mal.name = "Mouse";
		break;
	case 4:
		mal.name = "Covenant";
		break;
	case 5:
		mal.name = "Hipolit";
		break;
	case 6:
		mal.name = "WillyRex";
		break;
	case 7:
		mal.name = "Wizard";
		break;
	}
}

Enemy GetEnemyTypeString() {
	

}


int main()
{
    return 0;
}

