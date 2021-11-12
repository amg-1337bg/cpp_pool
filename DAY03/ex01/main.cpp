#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c;
	c.attack("youssef");
	c.takeDamage(1);
	c.beRepaired (10);

	ScavTrap scav;
	scav.attack("someone");
	scav.takeDamage(7);
	scav.beRepaired(8);

	ScavTrap brahim ("brahim");
	brahim.attack("youssef");
	brahim.beRepaired(4);
	brahim.takeDamage(15);
	brahim.guardGate();
	return (0);
}