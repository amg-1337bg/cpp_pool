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
		~Animal();
		Animal	&operator = (const Animal &);

<<<<<<< HEAD
		virtual void	makeSound( void ) const;
=======
		virtual	void	makeSound( void ) const;
>>>>>>> 9b7d6976413841d6c8f8db99ea90c8772def9116
		std::string	getType( void ) const;
};


#endif