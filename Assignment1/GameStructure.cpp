#include <iostream>

#include "GameStructure.h"
#include "Pirate.h"
#include "Ninja.h"

void GameStructure::startGame()
{
	int choice;

	while (isRunning)
	{
		// Game introduction
		std::cout << "\n";
		std::cout << "*---------------------------------------*\n";
		std::cout << "|             THE COLISSEUM             |\n";
		std::cout << "*---------------------------------------*\n\n";

		std::cout << "Welcome to the Colisseum! In this game, you will be able to pick between the Pirate and the Ninja.\n";
		std::cout << "Each character has their own unique abilities and stats. Choose wisely!\n\n";

		// Choose a character
		std::cout << "Choose your character:\n";
		std::cout << "1. Pirate\n";
		std::cout << "2. Ninja\n";
		std::cout << "3. Quit\n\n";
		std::cin >> choice;

		// Create a character based on the choice
		if (choice == 1)
		{
			Pirate pirate("Pirate", 100, 100, 0, 3);
			pirate.Display();
			pirate.Update();
			pirate.Drink();
			pirate.Update();
			pirate.Display();
		}
		else if (choice == 2)
		{
			Ninja ninja("Ninja", 100, 100, 3, 2);
			ninja.Display();
			ninja.Update();
			ninja.throwSmoke();
			ninja.Update();
			ninja.Display();
		}
		else if (choice == 3)
		{
			// Quit the game
			isRunning = false;
		}
		else
		{
			// Invalid choice
			std::cout << "Invalid choice. Please try again.\n";
		}
	}
}