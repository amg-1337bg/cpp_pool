#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB();
		HumanB(std::string);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &);
};


#endif