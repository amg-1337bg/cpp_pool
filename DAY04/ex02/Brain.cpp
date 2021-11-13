# include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = b.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain	&Brain::operator= (const Brain &b)
{
	for(int i = 0; i < 100 ; i++)
		ideas[i] = b.ideas[i];
	return (*this);
}
