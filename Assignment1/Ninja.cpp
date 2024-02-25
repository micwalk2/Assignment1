#include <iostream>
#include <string>

#include "Combatant.h"
#include "Ninja.h"

Ninja::Ninja(std::string name, int current, int max, int smoke, int reduction) : Combatant(name, current, max)
{
	// Set the smoke amount and damage reduction
	if (smoke > 0)
	{
		smokeAmount = smoke;
	}
	else
	{
		std::cout << "Smoke amount must be greater than 0. Setting to 1." << std::endl;
		smokeAmount = 1;
	}
	
	damageReduction = reduction;
}

void Ninja::Display()
{
	// Call the base class Display method and display the smoke amount
	Combatant::Display();
	std::cout << "Smoke: " << smokeAmount << std::endl;
}

// Determine whether smoke amount is greater than 0 and therefore the ninja is hidden
void Ninja::Update()
{
	std::cout << "*---------------------------------------*\n";
	if (smokeAmount > 0)
	{
		isHidden = true;
		std::cout << "You're hidden!" << std::endl;
		std::cout << "Damage reduction: " << damageReduction << std::endl;
	}
	else
	{
		isHidden = false;
	}
}

// Decrement smoke amount and display a message
void Ninja::reduceSmoke()
{
	smokeAmount--;
	std::cout << "Your smoke starts to dissipate!" << std::endl;
}