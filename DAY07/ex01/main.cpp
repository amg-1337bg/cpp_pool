#include "iter.hpp"

void	toupp(std::string)

int main()
{
	std::string str = "hello";

	iter<std::string>(str, str->length(), std::toupper());
	str::cout << str << std::endl;
}