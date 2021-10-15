#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
<<<<<<< HEAD
	std::string read;
	std::size_t ret;
	int begin;
	std::string toWrite;
	char *s = NULL;
	std::string s1;
	std::string s2;
=======
	std::string s1;
	std::string s2;
	std::string filename;
	std::string filenamereplace;
	std::string	read;
	std::string	write;
	int			occur;
>>>>>>> 13a85a204e89f75f86467784258964e4ba1b90fd

	s1 = av[2];
	s2 = av[3];
	filename = av[1];
	if (ac != 4)
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}
<<<<<<< HEAD
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
=======
	if(s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "one of the argument is empty!" << std::endl;
		return (1);
	}
	filenamereplace = filename + ".replace";
	std::cout << filenamereplace << std::endl;
	std::ifstream ifstr(filename);
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
		ofstream << write << std::endl;
		write.clear();
	}
>>>>>>> 13a85a204e89f75f86467784258964e4ba1b90fd
	return (0);
}