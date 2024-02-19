#pragma once

#include "Combatant.h"

class Pirate : public Combatant
{
public:
	Pirate(std::string name, int current, int max, int rum, int threshold);

	void Display();
	void Update();
	void Drink();

private:
	int rumAmount, drinkThreshold;
	bool isDrunk = false;
};