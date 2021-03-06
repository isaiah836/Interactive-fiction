/* Interactive_Fiction.cpp : Defines the entry point for the console application.*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

string getFarmName(string prompt);
void AddAnimaltoFarm(string animal);
string GetInputFromUser(string prompt);
int GetNumber(string prompt);
void ListofAnimals(); 

//List of animals in farm
vector<string>Farm;

int main()
{
	char again = 'n';
	cout << "Welcome to Farm Creator.\n\n";
	cout << "Press enter to continue\n\n";
	system("Pause");
	system("cls");

	do
	{
		Farm.clear();
		string farmName = getFarmName("What is the name of your farm?: ");

		int Animals = GetNumber("How many different animals do you want in your farm?(Max 11): ");
		for (int i = 0; i < Animals; ++i)
		{
			string chosenAnimal = "";

			ListofAnimals();

			//Get animal choice
			chosenAnimal = GetInputFromUser("Select an animal to add to your farm: ");

			// add the choice to the farm list
			AddAnimaltoFarm(chosenAnimal);

			cout << "\n\n";

		}
		cout << "Your Farm has been created. Here's what your farm looks like:\n\n~~~~~~~~~~~~~\n\n";

		//Prints out farm list
		cout << farmName << endl;
		for (unsigned int i = 0; i < Farm.size(); ++i)
		{
			cout << Farm[i] << endl;
		}

		//ask if they would like to play again
		cout << "\nWould you like to play again?: ";
		cin >> again;
	} while (again == 'y');
	
	cout << "\n\nGoodbye\n\n";
	system("pause");
	return 0;
}

//Function definitions

// gets the farm name from the user
string getFarmName(string prompt)
{
	string farmName;
	cout << prompt << endl;
	cin >> farmName;
	system("cls");
	return farmName;
}

// gets the number of animals the user wants
int GetNumber(string prompt)
{
	int numberofAnimals;
	cout << prompt << endl;
	cin >> numberofAnimals;
	cout << endl;
	system("cls");
	return numberofAnimals;
}

//List of animals that the user can add
void ListofAnimals()
{
	cout << "the animals you have to choose from are:\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "cows" << endl;
	cout << "sheeps" << endl;
	cout << "pigs" << endl;
	cout << "chickens" << endl;
	cout << "horses" << endl;
	cout << "donkeys" << endl;
	cout << "alpacas" << endl;
	cout << "llamas" << endl;
	cout << "buffalo" << endl;
	cout << "dogs" << endl;
	cout << "emus" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	return;
}

//Gets the animal the user wants to add
string GetInputFromUser(string prompt)
{
	string userInput;
	cout << prompt << endl;
	cin >> userInput;
	system("cls");
	return userInput;
}

//adds the animal the user choses to their farm
void AddAnimaltoFarm(string animal)
{
	Farm.push_back(animal);
	cout << animal << " Added.\n";
	return;
}
