// Adventures_in_Axilduhr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	string your_name = "";

	cout << "Welcome to the shattered realm of Axildurh" << endl;
	cout << "In this world there are heroes, terrible beasts, and even worse villians..." << endl;
	cout << "To live bravely in Axildurh, is to take every step with a risk..." << endl;
	cout << "Be careful where you tread young adventurer..." << endl;
	cout << "A single step can lead you to glory or death." << endl;
	cout << "" << endl;

	cout << "Now... Young adventurer, what is your name?" << endl;
	getline(cin, your_name);
	cout << "" << endl;

	cout << "Well, " << your_name << " I wish you wealth and fortune in your adventures to come" << endl;
	cout << "...and a swift and painless death in your misfortunes..." << endl;
	cout << "" << endl;

	cout << "You awake in a musky, dim lit room, the strange fragrance of spice and coffee hang in the air" << endl;

	return 0;
}

