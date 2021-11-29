#include "Array.hpp"

class Test
{
	public:
		int i;
		Test(){i = 10;};
};

int main()
{
	Array<int> ints(2);
	Array<char> ch;
	Array<Test> hello(10);
	Array<Test> tmp1(hello);

	Array<int> tmp(ints);
	try
	{
		std::cout << ints[0] << std::endl;
		std::cout << ints[0] << std::endl;
		hello[5].i = 5586;
		std::cout << tmp1[0].i << std::endl;
		std::cout << hello[5].i << std::endl;
		std::cout << ch[0] << std::endl;
		std::cout << ch.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
