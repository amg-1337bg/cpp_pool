#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
class Bureaucrat;
#include "Form.hpp"

class	Bureaucrat
{
	private:
		const	std::string name;
		int		grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat();

		Bureaucrat &operator =(const Bureaucrat&);

		std::string	getName() const;
		int			getGrade() const;

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		
		void	signForm(Form&);

};

std::ostream & operator << (std::ostream &os, const Bureaucrat&);

#endif