#ifndef PRESIDENTIALPARDONFROM_H
#define PRESIDENTIALPARDONFROM_H

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private :
		std::string target;

	public :
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const	PresidentialPardonForm&);

		PresidentialPardonForm &operator = (const PresidentialPardonForm&);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif