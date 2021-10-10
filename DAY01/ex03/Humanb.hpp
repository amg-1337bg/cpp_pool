#ifndef HUMANEb_H
#define HUMANEb_H

#include "Weapon.hpp"

class HumaneB
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumaneB();
		HumaneB(std::string, Weapon);
		~HumaneB();
		void	attack();
};


#endif