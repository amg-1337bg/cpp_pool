#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include "contact.hpp"
# include <iomanip>

class	PhoneBook
{
	Contact contact[8];
	int		current;

	public:
		PhoneBook( void );
		void add_contact();
		void search();
};

#endif
