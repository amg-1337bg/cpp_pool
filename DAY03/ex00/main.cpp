#include "ClapTrap.hpp"

int main()
{
	ClapTrap c;
	c.attack("youssef");
	c.takeDamage(10);
	c.beRepaired(11);
	ClapTrap a ("Brahim");

	a.takeDamage(10);
	a.beRepaired(110);
	a.attack("someone");
	return (0);
}