#include	"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Constructor Called" << std::endl;
	Name = "None";
	HitPoints = 100;
	EnergyPoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap (std::string name)
{
	std::cout << "Parameterized Constructor Called" << std::endl;
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	std::cout << "Copy Constructor Called" << std::endl;
	Name = scav.Name;
	HitPoints = scav.HitPoints;
	EnergyPoints = scav.EnergyPoints;
	Attackdamage = scav.Attackdamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

void ScavTrap