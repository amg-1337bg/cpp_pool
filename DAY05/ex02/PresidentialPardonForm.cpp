#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Pp) : Form ("PresidentialPardonForm", 25, 5)
{
	target = Pp.target;
	setSign(Pp.getSigned());
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &Pp)
{
	target = Pp.target;
	setSign(Pp.getSigned());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw (PresidentialPardonForm::NotSigned());
	if (executor.getGrade() <= getGradeExecute())
	{
		std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	else
		throw (PresidentialPardonForm::GradeTooLowException());
}