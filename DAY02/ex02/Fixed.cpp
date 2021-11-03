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

int Fixed::getFixed( void ) const
{
	return (f);
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->f);
}

void	Fixed::setRawBits(int const raw)
{
	this->f = raw;
}

Fixed	&Fixed::operator =(const Fixed &a)
{
	std::cout << "Assignation Operator Called" << std::endl;
	this->setRawBits(a.getRawBits());
	return (*this);
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->f = i * (1 << numfrac);
}

Fixed::Fixed(const float fl)
{
	std::cout << "Float constructor called" << std::endl;
	f = roundf((fl * (1 << numfrac)));
}

float Fixed::toFloat( void ) const
{
	return ((float)f / (1 << numfrac));
}

int	Fixed::toInt( void ) const
{
	return (f / (1 << numfrac));
}

std::ostream &operator << (std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

// COMPARISON OPERATORS

bool	Fixed::operator > (const Fixed &f) const
{
	if (this->f > f.f)
		return (true);
	return (false);
}
bool	Fixed::operator < (const Fixed &f) const
{
	if (this->f < f.f)
		return (true);
	return (false);
}
bool	Fixed::operator >= (const Fixed &f) const
{
	if (this->f > f.f || this->f == f.f)
		return (true);
	return (false);
}
bool	Fixed::operator <= (const Fixed &f) const
{
	if (this->f < f.f || this->f == f.f)
		return (true);
	return (false);
}
bool	Fixed::operator == (const Fixed &f) const
{
	if (this->f == f.f)
		return (true);
	return (false);
}
bool	Fixed::operator != (const Fixed &f) const
{
	if (this->f != f.f)
		return (true);
	return (false);
}

// ARITHMETIC OPERATORS

Fixed	Fixed:: operator + (const Fixed& f1)
{
	float ff = this->toFloat() + f1.toFloat();
	*this = Fixed(ff);
	return (*this);
}
Fixed	Fixed::operator - (const Fixed& f1)
{
	float ff = this->toFloat() - f1.toFloat();
	*this = Fixed(ff);
	return (*this);
}
Fixed	Fixed:: operator * (const Fixed& f1)
{
	float ff = this->toFloat() * f1.toFloat();
	*this = Fixed(ff);
	return (*this);
}
Fixed	Fixed:: operator / (const Fixed& f1)
{
	float ff = this->toFloat() / f1.toFloat();
	*this = Fixed(ff);
	return (*this);
}

// Post pre incre decre

Fixed	&Fixed::operator ++ (void)
{
	f++;
	return(*this);
}
Fixed	Fixed::operator ++ (int)
{
	Fixed ff (*this);
	this->f++;
	return (ff);
}
Fixed	&Fixed::operator -- (void)
{
	--f;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed ff(*this);
	f--;
	return (ff);
}

Fixed &Fixed::min (Fixed &f1, Fixed &f2)
{
	
	if(f1 > f2)
		return (f2);
	else
		return (f1);
}

const Fixed &Fixed::min (const Fixed &f1, const Fixed &f2)
{
	if(f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed &Fixed::max (Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const	Fixed &Fixed::max (const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}