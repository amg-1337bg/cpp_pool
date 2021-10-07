#ifndef CONTACT_H
#define CONTACT_H

#include "phonebook.hpp"

class	Contact
{
	int	index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
	public :
		Contact();
		Contact(int, std::string, std::string, std::string, std::string, std::string);
};


#endif