#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const	WrongCat &c)
{
	std::cout << "WrongCat Copy Operator Called" << std::endl;
	type = c.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat	&WrongCat::operator= (const WrongCat &c)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	type = c.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound" << std::endl;
}