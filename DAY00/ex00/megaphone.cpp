#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	int i;
	int c;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (av[++i] != NULL)
	{
		c = -1;
		while(av[i][++c] != 0)
			std::cout << (char)std::toupper(av[i][c]);
		if (av[i + 1] != NULL)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}