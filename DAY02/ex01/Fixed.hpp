# ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	f;
		static const int	numfrac = 8;
	
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		Fixed & operator = (const Fixed&);

		Fixed(const int);
		Fixed(const float);
		
		int getFixed( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
};
std::ostream &operator << (std::ostream &os, const Fixed &f);



# endif