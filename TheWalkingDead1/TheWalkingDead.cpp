#include <iostream>
#include <string>
#include <ctime>


enum class Weapon {
	FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX
};



class Player {
	Weapon arma;
	float precision;
	int life;

	void Attack(Zombie &) {
		Zombie::life
	}

	bool isAlive() {
		return Player::life > 0;
	}
};

class Zombie {
	int distance_player;
	float speed;
	float damage;
	int life = 100;

	void Attack(Player &) {

	}
};