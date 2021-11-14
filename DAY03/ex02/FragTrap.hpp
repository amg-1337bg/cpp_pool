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

		void highFivesGuys(void);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif