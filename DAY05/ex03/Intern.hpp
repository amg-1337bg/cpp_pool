#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern (const Intern&);
		~Intern();

		Intern	&operator = (const Intern&);

		Form *makeForm(std::string, std::string);
};


#endif