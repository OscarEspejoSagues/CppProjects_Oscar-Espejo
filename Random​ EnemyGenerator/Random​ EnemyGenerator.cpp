// Random​ EnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>



enum class EnemyType { zombie, vampire, ghost, witch, max };
//puedes poner un max al final para saber el numero de elementos para en el random no poner 4 puedes poner max

struct Enemy{
		EnemyType type;
		std::string name;
		int health;

		std::string getenemyTypeString() {
			switch (type)
			{
			case EnemyType::zombie: return "zombie";
			case EnemyType::vampire: return "vampire";
			case EnemyType::ghost: return "ghost";
			case EnemyType::witch: return "witch";
			default: return "";

			}
		}
};

bool operator==(const Enemy &a, const Enemy &b) {//operador == sobrecargado
	return a.name == b.name && a.type == b.type;
}

static Enemy CreateRandomEnemy() {
	srand(time(NULL));//funcion que altera la seed 
	Enemy mal;
	mal.type = EnemyType(rand() % EnemyType::max);
	mal.health = 500;
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
		mal.name = "Hipolit el tt";
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

