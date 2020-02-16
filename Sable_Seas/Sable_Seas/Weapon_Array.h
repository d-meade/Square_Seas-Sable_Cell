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
	//no arguments equals an empty weapon slot
	weapon() 
	{
		Name = "empty";
		Size = "empty";
		Type = "empty";
		TechLv = 0;
		Damage = 0;
		Accuracy = 0;
		Magazine = 0;
		PowerUse = 0;
		Range = "empty";
		Tag = "empty";
		AmmoUse = 0;
		Durability = 0;
		Mount = 0;
		Description = "empty";
	}
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
	};
	//empty weapon = weapon("empty","empty",)
};