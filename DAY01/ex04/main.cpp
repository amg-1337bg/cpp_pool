#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string read;

	if (ac != 4)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	std::fstream file;
	file.open(av[1], std::ios::in);
	std::getline(file, read);
	std::cout << read << std::endl;
	return (0);
}