#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>
void	easyfind(T container, int f)
{
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), f);
	if (i == container.end() && *(container.end()) != f)
		std::cout << "Not Found" << std::endl;
	else
		std::cout << "Founded" << std::endl;
}

#endif