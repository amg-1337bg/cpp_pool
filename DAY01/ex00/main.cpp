#include "Zombie.hpp"

int main()
{
	Zombie	*z = newZombie("test");

	z->announce();
	randomChump("hello");
	delete z;
	return (0);
}