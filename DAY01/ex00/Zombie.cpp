# include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been Destroyed" << std::endl;
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}

void	randomChump(std::string name)
{
	Zombie Zombie(name);

	Zombie.announce();
}