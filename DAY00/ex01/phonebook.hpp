#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include "contact.hpp"

class	PhoneBook
{
	Contact contact[8];

	public:
		PhoneBook( void );
		void add_contact(int);
		void search();
};

#endif
