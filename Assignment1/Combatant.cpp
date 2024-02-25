#include <iostream>
#include <string>

#include "Combatant.h"

Combatant::Combatant() {}

Combatant::Combatant(std::string name, int current, int max)
{
	combatantName = name;

	// Check if the current health is 0 or less
	if (current <= 0)
	{
		currentHealth = 0;
		std::cout << "Character has expired..." << std::endl;
	}
	else
	{
		currentHealth = current;
	}

	maxHealth = max;
}

// Display the combatant's name and health
void Combatant::Display()
{
	std::cout << "Name: " << combatantName << std::endl;
	std::cout << "Health: " << currentHealth << "/" << maxHealth << std::endl;
}

// Not implemented yet
void Combatant::Attack()
{
	// TODO: Implement attack method
	std::cout << "Attacking!" << std::endl;
}

// Not implemented yet
int Combatant::takeDamage(int amount)
{
	currentHealth -= amount;
	if (currentHealth < 0)
	{
		currentHealth = 0;
	}
	return currentHealth;
}