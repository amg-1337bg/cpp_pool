#include "Intern.hpp"

int main()
{
	try
	{
		Intern a;
		Bureaucrat b("brahim", 10);
		Form *f;

		f = a.makeForm("robotomy request", "home");
		if (f == NULL)
			std::cout << "NULL pointer" << std::endl;
		b.signForm(*f);
		b.executeForm(*f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}