#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include "contact.hpp"
# include <iomanip>
# include <string>
# include <climits>

class	PhoneBook
{
	Contact contact[8];
	int		current;
	int		length;

	public:
		PhoneBook( void );
		void add_contact();
		void search();
};

#endif
