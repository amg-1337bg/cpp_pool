#include "iter.hpp"


// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }


void	printString(std::string const &str)
{
	std::cout << str << std::endl;
}

void	printInt(int const &ints)
{
	std::cout << ints << std::endl;
}

int main()
{
	// char str[] = "hello";
	std::string s[] = {"hello", "world", "how are you"};
	int	i[] = {187, 12, 13};

	iter<std::string>(s, 3, printString);

	iter(i, 3, printInt);

	// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	// Awesome tab2[5];
	// iter( tab, 5, print );
	// iter( tab2, 5, print );
}