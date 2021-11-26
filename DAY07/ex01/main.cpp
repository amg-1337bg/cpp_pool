#include "iter.hpp"

void	toupp(char &str)
{
	str = 'h';
}

int main()
{
	char str[] = "hello";

	iter<char>(str, 5, swap);
	std::cout << str << std::endl;
}