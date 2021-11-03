# ifndef SCAVTAP_
# define SCAVTAP_

#include "ClapTrap.hpp"

class	ScavTrap : ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap(const	ScavTrap&);
		~ScavTrap();

		ScavTrap &operator = (const ScavTrap&);

		void	guardGate( void );
}

# endif