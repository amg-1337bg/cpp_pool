#include <iostream>

struct Data
{
	int		x;
	int		y;
	int 	z;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data test;

	test.x = 10;
	test.y = 89;
	test.z = 677;
	
	std::cout << sizeof(uintptr_t) << std::endl;
	uintptr_t ptr = serialize(&test);
	std::cout << ptr << std::endl;
}