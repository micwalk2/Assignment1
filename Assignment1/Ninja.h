#pragma once

#include <string>

#include "Combatant.h"

class Ninja : public Combatant
{
public:
	Ninja(std::string name, int current, int max, int smoke, int reduction);

	void Display();
	void Update();
	void throwSmoke();

private:
	int smokeAmount, damageReduction;
	bool isHidden = false;
};