#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string);
		~Weapon();
		std::string	getType();
		void		setType(std::string);
};


#endif