#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	target;

	public:
		ShrubberyCreationForm(const std::string);
		ShrubberyCreationForm(const	ShrubberyCreationForm&);
		ShrubberyCreationForm operator=(const ShrubberyCreationForm&);

		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};


#endif