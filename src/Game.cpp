// Main Game class
// Also provides main()

#include <string>
#include "Game.h"
#include "Input.h"
#include "Output.h"

int main() {
	// Setup our Input/Output objects here
	Input in;
	Output out;
	
	// Begin menu loop. Should be in own function
	// We also need to print the actual menu
	string choice;
	choice = in.promptUser("What is your selection?");
	
	// If we made it this far, let's call it a success!
	return 0;
}
