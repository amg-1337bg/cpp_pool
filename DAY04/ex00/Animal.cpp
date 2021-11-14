#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor Called" << std::endl;
<<<<<<< HEAD
	type = "animal";
=======
	type = "Animal";
>>>>>>> 9b7d6976413841d6c8f8db99ea90c8772def9116
}

Animal::Animal (const	Animal &an)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	type = an.type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal	&Animal::operator= (const Animal &an)
{
	std::cout << "Animal Assignation Operator Called" << std::endl;
	type = an.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}
