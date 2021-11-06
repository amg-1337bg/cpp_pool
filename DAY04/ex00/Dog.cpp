#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor Called" << std::endl;
	type = "Dog";
}

Dog::Dog(const	Dog &d)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	type = d.type;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog	&Dog::operator= (const	Dog &d)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	type = d.type;
	return (*this);
}