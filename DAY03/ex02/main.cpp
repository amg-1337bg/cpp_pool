
#include "FragTrap.hpp"

int main()
{
	FragTrap s ("brahim");
	s.attack("someone");
	s.takeDamage(12);
	s.beRepaired(10);

	FragTrap gg (s);
	s.beRepaired(10);
	gg.highFivesGuys();

	return (0);
}