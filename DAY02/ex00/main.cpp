#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
	// Fixed f;
	// Fixed	a;

	// f.setRawBits(10);
	// Fixed d (f);

	// std::cout << d.getRawBits() << std::endl;

	// a = d;

	// return (0);
}