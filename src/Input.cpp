// Input class
// Provides functionality for recieving input

#include <iostream>
#include <string>
#include "Game.h"
#include "Input.h"

using namespace std;

string Input::promptUser(string promptText)
{
	string i;	// Temporary storage for user input
	cout << ">> " << promptText << endl;	// Print a nice prompt
	cin >> i;	// Recieve and return the user input
	return i;	// TODO: Some sort of bounds-checking?
}
