#pragma once
#include <string>

using namespace std;
class weapon
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
	int Mount; //how many of the same weapon

	// Build Weapon Constructor TODO
	weapon(string n, string s, string t, int tl, int dmg, 
		int acc, int mag, int pwr, string r, string tag, int amm, int dur, int mount) 
	{
		Name = n;
		Size = s;
		Type = t;
		TechLv = tl;
		Damage = dmg;
		Accuracy = acc;
		Magazine = mag;
		PowerUse = pwr;
		Range = r;
		Tag = tag;
		AmmoUse = amm;
		Durability = dur;
		Mount = mount;
		Description = "Empty";
	}
};