# include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << this->name << " has been Destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie *zombieHorde(int N, std::string name)
{
	int i;
	Zombie *zombie = new Zombie[N];

	i = -1;
	while (++i < N)
		zombie[i].setName(name);
	return (zombie);
}