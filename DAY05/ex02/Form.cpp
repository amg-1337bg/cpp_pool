#include "Form.hpp"

Form::Form() : name("default"), grade_signed(150), grade_execute(150)
{
	std::cout << "Default Constructor Called" << std::endl;
	s = false;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

Form::Form(const std::string name, const int gs, const int ge) : name(name), grade_signed(gs), grade_execute(ge)
{
	std::cout << "Parameter Constructor Called" << std::endl;
	if (gs < 1 || ge < 1)
		throw(Form::GradeTooHighException());
	else if (gs > 150 || ge > 150)
		throw(Form::GradeTooLowException());
	s = false;
}

Form::Form(const Form &f) : name(f.name), grade_signed(f.grade_signed), grade_execute(f.grade_execute)
{
	std::cout << "Copy Constructor Called" << std::endl;
	s = f.s; 
}

Form::~Form()
{
	std::cout << "Destructor Called" << std::endl;
}

Form	&Form::operator= (const Form &f)
{
	s = f.s;
	return (*this);
}

void	Form::setSign(bool b)
{
	s = b;
}

std::string Form::getName() const
{
	return (name);
}

int	Form::getGradeSigned() const
{
	return  (grade_signed);
}

int	Form::getGradeExecute() const
{
	return (grade_execute);
}

bool	Form::getSigned() const
{
	return (s);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (s)
	{
		std::cout << "The Form already Signed" <<std::endl;
		return ;
	}
	if (b.getGrade() <= grade_signed)
	{
		std::cout << name << " Signed By " << b.getName() << std::endl;
		s = true;
	}
	else
		throw(Form::GradeTooLowException());
}

std::ostream &operator << (std::ostream &os, const Form &f)
{
	os << "form Named " << f.getName() << " need to be Signed (" << f.getGradeSigned() << ") and to Execute (" << f.getGradeExecute() << ")";
	return (os);
}