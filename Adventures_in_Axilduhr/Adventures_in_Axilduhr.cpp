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
	int user_selection = 0;

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

	cout << "You awake in a musky, dim lit room, the strange fragrance of spice and coffee hang in the air." << endl;
	cout << "You spend the next few minutes to shake away the tiredness from your eyes and soreness from your back." << endl;
	cout << "It seems as if sleeping in a hard wagon rolling atop uneven roads for the past 2 weeks will take some to recover from." << endl;

	cout << "After a while there is a knock at your door." << endl;
	cout << "And a rough voice calmly says: Hey... Are you awake yet?" << endl;
	cout << "You recognize the voice as that of Elgrim Welm, the fellow travel campanion these past weeks" << endl;
	cout << "Do you respond?" << endl;
	do {
		cin >> user_selection;
	} while (!(user_selection != 1 || user_selection != 0));

	if (user_selection == 1) {
		cout << "You realize you must have overslept and reply: Yes, I'll be down shortly! Save me some coffee, huh?" << endl;
		cout << "You scramble to dress and prepare yourself for the day to come." << endl;
		cout << "As you make your way down the dining hall, you quickly find Elgrim Welm, sitting at a table full of food and drink." << endl;
		cout << "He quickly waves you over." << endl;
		cout << "In a gruff voice he says: Well, seems you have finally rejoined the living!" << endl;
		cout << "Mockingly, he adds: Did you have any sweet dreams m'lord?" << endl;
		do {
			cin >> user_selection;
		} while (!(user_selection != 1 || user_selection != 0));

		if (user_selection == 1) {
			cout << "You reply: Well, yes I did, thank you." << endl;
			cout << "As you proceed to take his beer and chug the rest before he has a chance to reach for it." << endl;
			cout << "You finish the beer and add: Strange it tasted better in my dream." << endl;
			cout << "Elgrim stares at you with a look of pain, which quickly melts to a wide grin and finally a big laugh." << endl;
			cout << "Laughing, he says: I believe I desereved that!" << endl;
		}
		else {
			cout << "Slightly annoyed, you reply: No. No, I didn't and if you want to keep that smug look on your face I would keep." << endl;
			cout << "it shut while I have my food and drink." << endl;
			cout << "There is a slight pause." << endl;
			cout << "He clears his throat he continues to eat his food in peace." << endl;
		}
	}
	else {
		cout << "You do not reply and wait until you hear footsteps leading away from the door." << endl;
	}

	return 0;
}

