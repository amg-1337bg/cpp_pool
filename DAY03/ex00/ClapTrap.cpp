#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor Called" << std::endl;
	Name = "None";
	HitPoints = 10;
	EnergyPoints = 10;
	Attackdamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "parameterized Constructor Called" << std::endl;
	this->Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	Attackdamage = 0;
}
ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy Constructor Called" << std::endl;
	Name = clap.Name;
	HitPoints = clap.HitPoints;
	EnergyPoints = clap.EnergyPoints;
	Attackdamage = clap.Attackdamage;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &clap)
{
	std::cout << "Assignation Operator Called" << std::endl;
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