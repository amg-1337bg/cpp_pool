#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class	Bureaucrat : std::exception
{
	private:
		const	std::string name;
		int		grade;

};


#endif