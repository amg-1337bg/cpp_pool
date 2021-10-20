#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string filename;
	std::string filenamereplace;
	std::string	read;
	std::string	write;
	int			occur;

	if (ac != 4)
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	filename = av[1];
	if(s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "one of the argument is empty!" << std::endl;
		return (1);
	}
	filenamereplace = filename + ".replace";
	std::ifstream ifstr(filename);
	if (ifstr.fail())
	{
		std::cout << "Error While opening the file" << std::endl;
		return (1);
	}
	std::ofstream ofstream(filenamereplace);
	while (std::getline(ifstr, read))
	{
		while ((occur = read.find(s1)) != std::string::npos)
		{
			write.append(read, 0, occur);
			write.append(s2);
			read.erase(0, occur + s1.length());
		}
		write.append(read, 0, read.length());
		if (ifstr.eof())
			ofstream << write;
		else
			ofstream << write << std::endl;
		write.clear();
	}
	return (0);
}