# ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class	Animal
{
	protected: 
		std::string type;

	public :
		Animal();
		Animal(const	Animal&);
		virtual ~Animal();
		Animal	&operator = (const Animal &);

		virtual	void	makeSound( void ) const = 0;
		std::string	getType( void ) const;
};


#endif