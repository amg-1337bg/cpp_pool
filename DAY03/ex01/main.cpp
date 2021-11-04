#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c;
	c.attack("youssef");
	ClapTrap a ("Brahim");

	a.takeDamage(10);
	c.attack("brahim");

	ScavTrap scav;
	ScavTrap brahim ("brahim");

	scav = brahim;

	brahim.attack("youssef");
	brahim.guardGate();
	return (0);
}