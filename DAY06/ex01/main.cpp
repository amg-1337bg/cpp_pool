#include <iostream>

struct Data
{
	int		x;
	int		y;
	int 	z;
	char	c;
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
	test.c = 'D';
	
	uintptr_t ptr = serialize(&test);
	std::cout << *(int*)ptr << std::endl;
	std::cout << *(int*)(ptr + 4) << std::endl;
	std::cout << *(int*)(ptr + 8) << std::endl;
	std::cout << *(char*)(ptr + 12) << std::endl;

	Data *recover = deserialize(ptr);
	std::cout << recover->x << std::endl;
	std::cout << recover->y << std::endl;
	std::cout << recover->z << std::endl;
}