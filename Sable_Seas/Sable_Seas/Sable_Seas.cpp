// Sable_Seas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Ship_Array.h"
int main()
{
	//ship(string n, string sc, int tl, int hHP, int aHP, int jf, int Eng, int Eva, int Det, int stealth)
	//weapon(string n, string s, string t, int tl, int dmg,int acc, int mag, int pwr, string r, string tag, int amm, int dur, int mount)
	ship tyson = ship("tyson", "M", 2, 500, 500, 6, 20, 3, 60, 1200);
	tyson.AddWeapon(0, weapon("180mm", "M", "physical", 1, 100, 20, 30, 50, "M", "GFD", 30, 50, 3));
	ship byson = ship("byson", "M", 2, 500, 500, 6, 20, 3, 60, 1200);
	tyson.AddWeapon(0, weapon("180mm", "M", "physical", 1, 100, 20, 30, 50, "M", "GFD", 30, 50, 3));
	//tyson.Attack(0, &byson);
    std::cout << tyson.Attack(0, &byson) << "\nHello World!\n";
	std::cout <<"byson health is at "<< byson.HullHp;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
