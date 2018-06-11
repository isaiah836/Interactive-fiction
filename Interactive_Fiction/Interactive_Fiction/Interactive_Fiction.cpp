/* Interactive_Fiction.cpp : Defines the entry point for the console application.
http://textadventures.co.uk/games/view/qajnffeeye28fpecuuhwjq/a-hobbit-trek*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

string GetActionFromUser(string prompt);
int GetNumber(string pormpt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
	vector<string>inventory;
	char win = 'n';
	char dead = 'n';
	cout << "Welcome to A Hobbits Trek.\n\n";
	cout << "Press enter to begin your journey\n\n";
	system("Pause");

	cout << " A giant flood has ravaged the countryside, sweeping aside villages and destroying homes. You were caught up in the raging waters and carried away to a strange land. The flood drops you off in the branches of an overhanging tree where you wisely stay until the water goes down. You are relatively unharmed, however, because you are a hobbit and hardy. Try to survive and find your way home to Bree.\nYou are in a Tree.\nYou can go down.\nYou are balanced precariously in a tree overhanging the raging river.Luckily for you, this tree has very close together branches so your short little hobbit legs can easily reach them.Most trees cannot be climbed around here.\n\n";

	while ((win != y) || (dead != 'y'))
	{
		string userAction = GetActionFromUser("What do you want to do?: ");
		int number = GetNumber("Please enter a number: ");
		string bodyPart = askText("Please enter a body part: ");
		string verb = askText("Please enter a verb: ");

		tellStory(userAction);

	}
    return 0;
}
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}
void tellStory(string userAction)

