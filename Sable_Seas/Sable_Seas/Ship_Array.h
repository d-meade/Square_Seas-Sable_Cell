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
	//TODO: add slots for weapons
	//Size/Type/Mounts/Reloads
	weapon slot[4]; // weapons will be put on with function
	int Evasion;	//between 1-99
	int Detection;	//between 1-20
	int Stealh;		//between 1-5
	string Description; //Description will be blank, but can be added with function. TODO
	// build ship with variables above. TODO
	// Maybe a gear score for balance? - Killa
	// Should ther be shields for the ships? -Killa
	ship(string n, string sc,int tl, int hHP, int aHP, int jf, int Eng, int Eva, int Det, int stealth) 
	{
		Name = n;
		ShipClass = sc;
		TechLv = tl;
		HullHp = hHP;
		ArmorHp = aHP;
		JumpFuel = jf;
		Energy = Eng;
		Evasion = Eva;
		Detection = Det;
		Stealh = stealth;
		Description = "empty";


	}

	/* function that should handle attacking by
		calculating damage, reducing ammo of weapon,
		and reducing ship health of target. 
		handles if attack hits.
		damage will take resistence into  account in later Version TODO*/
	string Attack(weapon slot, ship* target) {}
};