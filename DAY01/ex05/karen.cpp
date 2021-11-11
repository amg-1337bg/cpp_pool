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
	int i;
	void (Karen::*teste [])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string str[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
	{
		if (level == str[i])
		{
			(this->*teste[i])();
			break ;
		}
	}
}