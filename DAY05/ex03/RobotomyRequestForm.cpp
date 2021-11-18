#include "RobotoMyRequestForm.hpp"

RobotoMyRequestForm::RobotoMyRequestForm() : Form ("RobotoMyRequestForm", 72, 45)
{
	target = "Default";
}

RobotoMyRequestForm::RobotoMyRequestForm(std::string target) : Form ("RobotoMyRequestForm", 72, 45)
{
	this->target = target;
}

RobotoMyRequestForm::RobotoMyRequestForm(const RobotoMyRequestForm& Rb) : Form ("RobotoMyRequestForm", 72, 45)
{
	setSign(Rb.getSigned());
	target = Rb.target;
}

RobotoMyRequestForm &RobotoMyRequestForm::operator = (const RobotoMyRequestForm &Rb)
{
	setSign(Rb.getSigned());
	target = Rb.target;
	return (*this);
}

RobotoMyRequestForm::~RobotoMyRequestForm(){}

void	RobotoMyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw (RobotoMyRequestForm::NotSigned());
	if (executor.getGrade() <= getGradeExecute())
		std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
	else
		throw (RobotoMyRequestForm::GradeTooLowException());
}