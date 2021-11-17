#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat brahim ("brahim" , 130);
		ShrubberyCreationForm a("hello");

		a.beSigned(brahim);
		a.execute(brahim);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}