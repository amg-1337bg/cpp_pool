#ifndef PRESIDENTIALPARDONFROM_H
#define PRESIDENTIALPARDONFROM_H

#include "Form.hpp"

class	PresidentialPardonForm : Form
{
	private :
		std::string target;

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const	PresidentialPardonForm&);

		PresidentialPardonForm &operator = (const PresidentialPardonForm&);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif