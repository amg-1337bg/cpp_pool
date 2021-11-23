#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &){std::cout << "hello " << std::endl;}

Intern::~Intern(){}

// Intern &Intern::operator=(const Intern &){  return(*this); }

Form	*Intern::makeForm(std::string formName, std::string target)
{	
	std::string check[] = { "shrubbery creation", "presidential pardon","robotomy request" };
	for (int i = 0; i < 3; i++)
	{
		if (check[i] == formName)
		{
			std::cout << "Intern creates " << check[i] << std::endl;
			switch (i)
			{
				case 0:
					return (new ShrubberyCreationForm(target));
				case 1:
					return (new PresidentialPardonForm(target));
				case 2:
					return (new RobotoMyRequestForm(target));
			}
		}
	}
	std::cout << "There is no Form Named " << formName << std::endl;
	return NULL;
}