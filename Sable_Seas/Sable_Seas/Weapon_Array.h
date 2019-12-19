#pragma once
#include <string>

using namespace std;
class Weapon
{
public:
	string Name;
	string Size;	// S/M/L
	string Type;	// S/E/M/T/B
	int TechLv;
	int Damage;
	int Accuracy;	// between 1-20
	int Magazine;
	int PowerUse;
	string Range;	// S/M/L/F
	string Tag;
	int AmmoUse;
	int Durability;
	string Description;
};