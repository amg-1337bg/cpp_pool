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

		bool	operator > (const Fixed&) const;
		bool	operator < (const Fixed&) const;
		bool	operator >= (const Fixed&) const;
		bool	operator <= (const Fixed&) const;
		bool	operator == (const Fixed&) const;
		bool	operator != (const Fixed&) const;

		Fixed	& operator + (const Fixed&);
		Fixed	& operator - (const Fixed&);
		Fixed	& operator * (const Fixed&);
		Fixed	& operator / (const Fixed&);

		Fixed	& operator ++( void );
		Fixed	operator ++( int );
		Fixed	& operator --( void );
		Fixed	operator --( int );

		static Fixed	&min(Fixed&, Fixed&);
		static const Fixed	&min(const Fixed&, const Fixed&);
		static Fixed	&max(Fixed&, Fixed&);
		static const Fixed	&max(const Fixed&, const Fixed&);
};
std::ostream &operator << (std::ostream &os, const Fixed &f);



# endif