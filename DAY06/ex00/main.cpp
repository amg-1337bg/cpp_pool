#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <cmath>

void	toChar(std::string str)
{
	int num;
	std::stringstream stringstream(str);
	stringstream >> num;
	if(stringstream.fail())
	{
		std::cout << "char : Impossible" << std::endl;
		return ;
	}
	if (num >= 0 && num <= 255)
	{
		char c = static_cast<char>(num);
		if (isprint(c))
			std::cout << "char : '" << c << "'" << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
		return ;
	}
	std::cout << "char : Impossible" << std::endl;
}

void	toInt(std::string str)
{
	int num;

	std::stringstream stringstream(str);
	stringstream >> num;
	if(stringstream.fail())
	{
		std::cout << "int : Impossible" << std::endl;
		return ;
	}
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
	{
		std::cout << "int : Impossible" << std::endl;
		return ;
	}
	std::cout << "int : " << num << std::endl;
}

void	toFloat(std::string str)
{
	float num;
	int tocon;

	std::stringstream stringstream(str);
	stringstream >> num;
	tocon = static_cast<int> (num);
	if (num != tocon)
		std::cout << "float : " << num << "f" << std::endl;
	else
		std::cout << "float : " << num << ".0f" << std::endl;
}

void	toDouble(std::string str)
{
	double num;
	int tocon;

	std::stringstream stringstream(str);
	stringstream >> num;
	tocon = static_cast<int> (num);
	if (num != tocon)
		std::cout << "double : " << num << std::endl;
	else
		std::cout << "double : " << num << ".0" << std::endl;
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		std::string s = av[1];
		toChar(s);
		toInt(s);
		toFloat(s);
		toDouble(s);
		return (0);
	}
	std::cout << "Program Needs One Parameter!\n";
	return (1);
}