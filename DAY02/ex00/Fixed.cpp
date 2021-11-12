#include	"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "default Constructor Called" << std::endl;
	this->f = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy Constructor Called" << std::endl;
	this->f = a.getRawBits();
	// *this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f);
}

void	Fixed::setRawBits(int const raw)
{
	this->f = raw;
}

Fixed	&Fixed::operator 
=(const Fixed &a)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->setRawBits(a.getRawBits());
	return (*this);
}