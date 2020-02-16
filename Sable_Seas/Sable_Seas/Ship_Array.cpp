#include "Ship_Array.h"
#include <cstdlib>
#include <ctime>

void ship::AddWeapon(int slot, weapon wep) {
	this->slot[slot] = wep;
}

string ship::Attack(int slot, ship* target)
{
	//std::srand(std::time(NULL));
	//int rnd;
	//calculate if weapon hits (compare accuracy to evasion)
	// formula((target.Eva) > (Acc + Rnd(1-80)) ) 
	//rnd = (std::rand() % 80) + 1;

	//simplified version
	int enemyHp = target->HullHp - this->slot[slot].Damage;
	if ((enemyHp) > 0)
		target->HullHp = enemyHp;
	else
		target->HullHp = 0;
	string report = "Damage dealt: " + to_string(this->slot[slot].Damage) + " Enemy health: " + to_string(enemyHp);
	return report;
}