#include "Weapon.hpp"

HumaneA::HumaneA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void	HumaneA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon;
}