#ifndef HUMANEA_H
#define HUMANEA_H

#include "Weapon.hpp"

class HumaneA
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumaneA();
		HumaneA(std::string, Weapon);
		~HumaneA();
		void	attack();
};


#endif