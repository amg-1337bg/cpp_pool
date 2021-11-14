#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	type = "Cat";
}

Cat::Cat(const	Cat &c)
{
	std::cout << "Cat Copy Operator Called" << std::endl;
	type = c.type;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat	&Cat::operator= (const Cat &c)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	type = c.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat Sound" << std::endl;
}