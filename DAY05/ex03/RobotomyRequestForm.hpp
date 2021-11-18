#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class	RobotoMyRequestForm : public Form
{
	private :
		std::string target;
	
	public :
		RobotoMyRequestForm();
		RobotoMyRequestForm(std::string);
		RobotoMyRequestForm(const	RobotoMyRequestForm&);
		~RobotoMyRequestForm();

		RobotoMyRequestForm &operator = (const RobotoMyRequestForm&);
		
		void execute(Bureaucrat const & executor) const;
};


#endif