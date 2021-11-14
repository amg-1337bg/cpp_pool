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

<<<<<<< HEAD
void Cat::makeSound(void) const
=======
void Cat::makeSound() const
>>>>>>> 9b7d6976413841d6c8f8db99ea90c8772def9116
{
	std::cout << "Cat Sound" << std::endl;
}