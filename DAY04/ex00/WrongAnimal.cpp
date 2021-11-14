#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor Called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal (const	WrongAnimal &an)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	type = an.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &an)
{
	std::cout << "WrongAnimal Assignation Operator Called" << std::endl;
	type = an.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
