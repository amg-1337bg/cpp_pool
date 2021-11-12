#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const	Cat &c)
{
	std::cout << "Cat Copy Operator Called" << std::endl;
	type = c.type;
	brain = new Brain(*c.brain);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
}

Cat	&Cat::operator= (const Cat &c)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	type = c.type;
	delete brain;
	brain = new Brain(*c.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}