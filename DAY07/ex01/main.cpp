#include "iter.hpp"

void	toH(char &str)
{
	str = 'H';
}

void	printString(std::string &str)
{
	std::cout << str << std::endl;
}

void	tohundred(int &i)
{
	i = 100;
}

int main()
{
	char str[] = "hello";
	std::string s[] = {"hello", "world", "how are you"};
	int	i[] = {187, 12, 13};

	iter<char>(str, 5, toH);
	std::cout << str << std::endl;

	iter<std::string>(s, 3, printString);

	iter<int>(i, 3, tohundred);
	for (size_t j = 0; j < 3; j++)
		std::cout << i[j] << std::endl;
}