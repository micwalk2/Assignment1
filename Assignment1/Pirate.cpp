#include <iostream>
#include <string>

#include "Combatant.h"
#include "Pirate.h"

Pirate::Pirate(std::string name, int current, int max, int rum, int threshold) : Combatant(name, current, max)
{
	// Set the rum amount and drink threshold
	if (rum <= 2 && rum >= 0)
	{
		rumAmount = rum;
	}
	else
	{
		std::cout << "Rum amount must be between 0-2. Setting to 0." << std::endl;
		rumAmount = 0;
	}

	if (threshold >= (rumAmount + 2))
	{
		drinkThreshold = threshold;
	}
	else
	{
		drinkThreshold = rumAmount + 2;
		std::cout << "Drink threshold must be 2 greater than rum amount. Setting to " << drinkThreshold << std::endl;
	}
}

void Pirate::Display()
{
	// Call the base class Display method and display the rum amount
	Combatant::Display();
	std::cout << "Rum: " << rumAmount << std::endl;
}

void Pirate::Display(bool drunk)
{
	// Call the base class Display method and display drunk status
	Combatant::Display();
	if (drunk)
	{
		std::cout << "Drunk: " << isDrunk << std::endl;
	}
	else
	{
		std::cout << "Drunk: " << isDrunk << std::endl;
	}
	
}

void Pirate::Update()
{
	std::cout << "*---------------------------------------*\n";
}

void Pirate::Drink()
{
	// Increment rum amount and display a message
	rumAmount++;
	std::cout << "You drink some rum!" << std::endl;
}