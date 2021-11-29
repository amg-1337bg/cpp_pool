#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>

template <class T>
class Array
{
	private:
		size_t length;
		T *var;
	public:
		Array()
		{ 
			var = NULL;
			length = 0;
		}
		Array(unsigned int n)
		{
			var = new T[n];
			length = n;
		}
		Array(const Array &ar)
		{
			*this = ar;
		}
		T	&operator = (const Array &ar)
		{
			size_t N = ar.size();
			var = new T[N];
			return *this;
		}
		~Array()
		{
			std::cout << "Destructor Called" << std::endl;
			if (var)
				delete[] var;
		}

		T	&operator[] (size_t i)
		{
			if (i < 0 || i >= size())
				throw std::exception();
			return var[i];
		}

		size_t	size( void ) const
		{
			return length;
		}
};

#endif