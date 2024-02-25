#pragma once

#include "Combatant.h"

class Pirate : public Combatant
{
public:
	Pirate(std::string name, int current, int max, int rum, int threshold);

	void Display();
	void Display(bool drunk);
	void Update();
	void Drink();

	bool getDrunkStatus() { return isDrunk; }

private:
	int rumAmount, drinkThreshold;
	bool isDrunk = false;
};