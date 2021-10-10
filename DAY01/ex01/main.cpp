#include "Zombie.hpp"

int main()
{
	int N = 10;
	int i;

	Zombie	*z = zombieHorde(N, "brahim");
	i = -1;
	while (++i < N)
		z[i].announce();
	delete [] z;
	return (0);
}