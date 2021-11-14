# ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class	ClapTrap 
{
	private:
		std::string	Name;
		int			HitPoints;
		int			EnergyPoints;
		int			Attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		ClapTrap  &operator = (const ClapTrap&);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif