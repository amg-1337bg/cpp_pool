#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(189);
	v.push_back(11);
	v.push_back(9);
	v.push_back(1864);
	v.push_back(1823);

	std::deque<int> gg;

	gg.push_back(5564);
	gg.push_back(87);
	gg.push_back(22);
	gg.push_back(994);
	gg.push_back(1);

	easyfind(gg, 1);
	easyfind(v, 66666);
	easyfind(v, 55);

}