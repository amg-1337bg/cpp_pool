#include "karen.hpp"

void	karen::debug( void )
{
	std::cout << "DEBUG" << std::endl;
}

void	karen::info( void )
{
	std::cout << "INFO" << std::endl;
}

void	karen::warning( void )
{
	std::cout << "WARNING" << std:: endl; 
}

void	karen::error( void )
{
	std::cout << "ERROR" << std::endl;
}

void	karen::complain(std::string level)
{
	void (*arr)(void)[] = { &(karen::debug), &(this->info()), &(this->warning()), &(this->error())};

	int i = -1;
	while (++i < 4)
		arr[i];
}