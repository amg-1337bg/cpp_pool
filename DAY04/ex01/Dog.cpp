#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor Called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const	Dog &d)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	type = d.type;
	brain = new Brain(*d.brain);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete brain;
}

Dog	&Dog::operator= (const	Dog &d)
{
	std::cout << "Dog Assignation Operator Called" << std::endl;
	type = d.type;
	delete brain;
	brain = new Brain(*d.brain);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog Sound" << std::endl;
}

const	Brain *Brain::getBrain()
{
	return (brain);
}