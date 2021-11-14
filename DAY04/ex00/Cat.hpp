# ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat&);
		~Cat();
		
		Cat	&operator= (const	Cat&);

		void makeSound( void ) const;
};


#endif