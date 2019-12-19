#pragma once
#include <string>
#include "Weapon_Array.h"
using namespace std;
class ship
{
public:
	string Name;
	string ShipClass;
	int SizeClass;	// between 1-10
	int TechLv;		// between 1-3
	int HullHp;		// between 1k - 100k
	int ArmorHp;	// between 500 - 50k
	int JumpFuel;	// between 3-8
	int Energy;		
	//TODO: add slots
	int Evasion;	//between 1-99
	int Detection;	//between 1-20
	int Stealh;		//between 1-5
	string Description;
};