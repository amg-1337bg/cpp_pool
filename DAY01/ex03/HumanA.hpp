#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& weapon;
		std::string name;
	public:
		// HumaneA();
		HumanA(std::string, Weapon&);
		~HumanA();
		void	attack();
};


#endif