#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("bureau", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("bureau", 0);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("bureau", 100);
		std::cout << a << std::endl;
		std::cout << a.getGrade() << std::endl;
		std::cout << a.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}