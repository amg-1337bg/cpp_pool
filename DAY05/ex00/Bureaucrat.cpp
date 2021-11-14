#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	std::cout << "Default constructor Called" << std::endl;
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int g) : name(name)
{
	if (g < 1 || g > 150)
		// throw();
}

Bureaucrat::Bureaucrat(const	Bureaucrat &b)
{
	name = b.name;
	grade = b.grade;
}

// Bureaucrat::~Bureaucrat()
// {
// 	std::cout << "Destructor Called" << std::endl;
// }

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
