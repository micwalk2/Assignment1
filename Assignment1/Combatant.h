#pragma once

#include <string>

class Combatant
{
public:
	Combatant();
	Combatant(std::string name, int current, int max);

protected:
	std::string combatantName;
	int currentHealth, maxHealth;

	void Display();
	void Attack();
	int takeDamage(int amount);
};