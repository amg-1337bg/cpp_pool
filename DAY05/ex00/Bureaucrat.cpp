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

void	Bureaucrat::increaseGrade()
{
	if (grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	grade--;
}

void	Bureaucrat::decreaseGrade()
{
	if (grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	grade++;
}

std::ostream	&operator << (std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << " , bureaucrat grade " << b.getGrade();
	return (os);
}
