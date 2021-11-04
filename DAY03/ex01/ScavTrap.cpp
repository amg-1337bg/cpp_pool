#include	"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	Name = "None";
	HitPoints = 100;
	EnergyPoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap (const std::string &name)
{
	std::cout << "ScavTrap Parameterized Constructor Called" << std::endl;
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	Name = scav.Name;
	HitPoints = scav.HitPoints;
	EnergyPoints = scav.EnergyPoints;
	Attackdamage = scav.Attackdamage;
}

ScavTrap &ScavTrap::operator= (const ScavTrap& scav)
{
	std::cout << "ScavTrap Assignation Operator Called" << std::endl;
	Name = scav.Name;
	HitPoints = scav.HitPoints;
	EnergyPoints = scav.EnergyPoints;
	Attackdamage = scav.Attackdamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap Enterred in Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << Attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << Name << " Taken Damage of " << amount << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << Name << " Gets repaired by " << amount << std::endl;
}