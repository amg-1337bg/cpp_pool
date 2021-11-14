# ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		~FragTrap();

		FragTrap &operator=(const FragTrap&);

		void	attack(std::string const & target);
		void	highFivesGuys(void);
};


#endif