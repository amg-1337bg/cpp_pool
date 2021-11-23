#include <iostream>
#include <stdlib.h>

void	toChar(char *s)
{
	int num = atoi(s);
	if (num >= 0 && num <= 255)
	{
		char c = static_cast<char>(num);
		if (isprint(c))
			std::cout << "char : '" << c << "'" << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
		return ;
	}
	std::cout << "char : Non displayable" << std::endl;
}

void	toInt(char *s)
{
	long num = atol(s);

	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
	{
		std::cout << "int : Impossible" << std::endl;
		return ;
	}
	std::cout << "int : " << num << std::endl;
}

void	toFloat(char *s)
{
	float num = atof(s);
	int tocon;

	tocon = static_cast<int> (num);
	if (num > tocon)
		std::cout << "float : " << num << "f" << std::endl;
	else
		std::cout << "float : " << num << ".0f" << std::endl;
}

void	toDouble(char *s)
{
	double num = strtod(s, NULL);
	int tocon;

	tocon = static_cast<int> (num);
	if (num > tocon)
		std::cout << "double : " << num << std::endl;
	else
		std::cout << "double : " << num << ".0" << std::endl;
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		// std::cout << strtod(av[1], NULL) << std::endl;
		toChar(av[1]);
		toInt(av[1]);
		toFloat(av[1]);
		toDouble(av[1]);
		return (0);
	}
	std::cout << "Program Needs One Parameter!\n";
	return (1);
}