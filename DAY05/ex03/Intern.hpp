#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotoMyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	 	int i;
		 int c,b,g;
		Intern();
		Intern (const Intern&);
		~Intern();

		// Intern	&operator = (const Intern&);

		Form *makeForm(std::string, std::string);
};


#endif