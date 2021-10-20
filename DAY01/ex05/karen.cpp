#include "karen.hpp"

Karen::Karen(){}

void	Karen::debug( void )
{
	std::cout << "DEBUG" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "INFO" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "WARNING" << std:: endl; 
}

void	Karen::error( void )
{
	std::cout << "ERROR" << std::endl;
}

void	Karen::complain(std::string level)
{
	void (Karen::*teste)() = &Karen::debug;

	(Karen::*teste);
}