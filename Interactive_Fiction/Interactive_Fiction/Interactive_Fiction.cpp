/* Interactive_Fiction.cpp : Defines the entry point for the console application.
http://textadventures.co.uk/games/view/qajnffeeye28fpecuuhwjq/a-hobbit-trek*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

string GetTextFromUser(string prompt);
int GetNumber(string pormpt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
	cout << "Welcome to MadLib.\n\n";
	cout << "Answer the following questions to help create a new story.\n";

	string name = GetTextFromUser("Please enter a name: ");
	string noun = GetTextFromUser("Please enter a plural noun: ");
	int number = GetNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	
    return 0;
}
string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}


