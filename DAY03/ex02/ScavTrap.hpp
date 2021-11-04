# ifndef SCAVTAP_
# define SCAVTAP_

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string&);
		ScavTrap(const	ScavTrap&);
		~ScavTrap();

		ScavTrap &operator = (const ScavTrap&);

		void	guardGate( void );
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

# endif