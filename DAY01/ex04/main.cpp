#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string read;
	std::size_t ret;
	int begin;
	std::string toWrite;
	char *s = NULL;
	std::string s1;
	std::string s2;

	if (ac != 4)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	std::fstream file;
	file.open(av[1]);
	if (file.fail())
	{
		std::cout << "failed to open the file" << std::endl;
		return (1);
	}
	while (std::getline(file, read))
	{
		begin = 0;
		while ((ret = read.find(s1, begin)) != std::string::npos)
		{
			
		}
	}
	// std::cout << read << std::endl;
	return (0);
}