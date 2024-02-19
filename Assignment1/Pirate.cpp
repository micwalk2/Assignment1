#include <iostream>
#include <string>

#include "Combatant.h"
#include "Pirate.h"

Pirate::Pirate(std::string name, int current, int max, int rum, int threshold) : Combatant(name, current, max)
{
	rumAmount = rum;
	drinkThreshold = threshold;
}

void Pirate::Display()
{
	// Call the base class Display method and display the rum amount
	Combatant::Display();
	std::cout << "Rum: " << rumAmount << std::endl;
}

void Pirate::Update()
{
	// Check if the pirate is drunk
	if (rumAmount >= drinkThreshold)
	{
		isDrunk = true;
		std::cout << "You're drunk!" << std::endl;
	}
	else
	{
		isDrunk = false;
	}
}

void Pirate::Drink()
{
	// Increment rum amount and display a message
	rumAmount++;
	std::cout << "You drink some rum!" << std::endl;
}