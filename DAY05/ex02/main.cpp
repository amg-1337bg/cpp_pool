#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Form a("hello", 150, 160);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form a("hello", 180, 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form a("hello", 0, 100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form a("hello", 100, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Form a("insurance", 100, 60);
	Bureaucrat brahim("brahim", 120);
	Bureaucrat simo("Simo", 140);

	std::cout << a << std::endl;

	simo.signForm(a);

	try
	{	
		a.beSigned(brahim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	brahim.signForm(a);

	return (0);
}