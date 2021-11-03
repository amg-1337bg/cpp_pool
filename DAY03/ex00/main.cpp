#include "ClapTrap.hpp"

int main()
{
	ClapTrap c;
	c.attack("youssef");
	ClapTrap a ("Brahim");

	a.takeDamage(10);
	c.attack("brahim");
	return (0);
}