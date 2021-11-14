#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class	Bureaucrat : std::exception
{
	private:
		const	std::string name;
		int		grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		// ~Bureaucrat();

		Bureaucrat &operator =(const Bureaucrat&);

		std::string	getName() const;
		int			getGrade() const;

};


#endif