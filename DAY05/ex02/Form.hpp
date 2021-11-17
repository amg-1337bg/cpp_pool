#ifndef FORM_H
#define FORM_H

#include <iostream>
class	Form;
#include "Bureaucrat.hpp"

class	Form
{
	private:
		const	std::string name;
		bool	s;
		const	int			grade_signed;
		const	int 		grade_execute;
	

	public :
		Form();
		Form(const std::string, const int, const int);
		Form(const Form&);
		virtual ~Form() = 0;
		Form &operator=(const Form&);

		class	GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

		class	NotSigned : public std::exception
		{
			const char* what() const throw();
		};

		void		setSign(bool);

		std::string	getName() const;
		int			getGradeSigned() const;
		int			getGradeExecute() const;
		bool		getSigned() const;

		void	beSigned(const Bureaucrat&);
		virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream &operator << (std::ostream&, const Form&);

#endif