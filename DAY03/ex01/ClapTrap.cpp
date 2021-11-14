#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	Name = "None";
	HitPoints = 10;
	EnergyPoints = 10;
	Attackdamage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap Parameterized Constructor Called" << std::endl;
	this->Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	Attackdamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	Name = clap.Name;
	HitPoints = clap.HitPoints;
	EnergyPoints = clap.EnergyPoints;
	Attackdamage = clap.Attackdamage;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &clap)
{
	std::cout << "ClapTrap Assignation Operator Called" << std::endl;
	Name = clap.Name;
	HitPoints = clap.HitPoints;
	EnergyPoints = clap.EnergyPoints;
	Attackdamage = clap.Attackdamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << Attackdamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " Taken Damage of " << amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " Gets repaired by " << amount << std::endl;
}