#include "Array.hpp"

class Test
{
	public:
		int i;
		Test(){i = 10;};
};

int main()
{
	int *a = new int[10];
	std::cout << *a << std::endl;

	Array<int> ints(10);
	Array<char> ch;
	Array<Test> hello(10);
	try
	{
		std::cout << ints[5] << std::endl;
		std::cout << ints[0] << std::endl;
		hello[5].i = 5586;
		std::cout << hello[5].i << std::endl;
		std::cout << ch[0] << std::endl;
		std::cout << ch.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}