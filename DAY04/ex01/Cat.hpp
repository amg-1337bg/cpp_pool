# ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain *brain;
	public :
		Cat();
		Cat(const Cat&);
		~Cat();
		
		Cat	&operator= (const	Cat&);

		void makeSound( void ) const;
};


#endif