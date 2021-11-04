#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	Name = "None";
	HitPoints = 100;
	EnergyPoints = 100;
	Attackdamage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap Parameterized Constructor Called" << std::endl;
	Name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	Attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &frag)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	Name = frag.Name;
	HitPoints = frag.HitPoints;
	EnergyPoints = frag.EnergyPoints;
	Attackdamage = frag.Attackdamage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destrcutor Called" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &frag)
{
	std::cout << "FragTrap Assignation Operator Called" << std::endl;
	Name = frag.Name;
	HitPoints = frag.HitPoints;
	EnergyPoints = frag.EnergyPoints;
	Attackdamage = frag.Attackdamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap Said HIGH FIVES GUYS" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << Name << " attack " << target << ", causing " << Attackdamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << Name << " Taken Damage of " << amount << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FrapTrap " << Name << " Gets repaired by " << amount << std::endl;
}