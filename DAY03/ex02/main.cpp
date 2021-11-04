#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap s ("test");

	FragTrap gg = s;

	s.beRepaired(10);

	return (0);
}