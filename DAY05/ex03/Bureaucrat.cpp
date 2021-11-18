#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	std::cout << "Default constructor Called" << std::endl;
	grade = 150;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

Bureaucrat::Bureaucrat(std::string name, int g) : name(name)
{
	if (g < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (g > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade = g;
}

Bureaucrat::Bureaucrat(const	Bureaucrat &b) : name (b.name)
{
	grade = b.grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &b)
{
	grade = b.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSigned())
	{
		std::cout << "The Form Already Signed" << std::endl;
		return ;
	}
	if (grade > f.getGradeSigned())
		std::cout << name << " Cannot Sign " << f.getName() << " because the minimum grade required is " << f.getGradeSigned() << std::endl;
	else
	{
		f.setSign(true);
		std::cout << name << " Signs " << f.getName() << std::endl;
	}
}

std::ostream	&operator << (std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << " , bureaucrat grade " << b.getGrade();
	return (os);
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (!form.getSigned())
		throw (Form::NotSigned());
	if (grade <= form.getGradeExecute())
	{
		form.execute(*this);	
		std::cout << name << " executes " << form.getName() << std::endl;
	}
	else
		Bureaucrat::GradeTooLowException();
}
