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
		Array	&operator = (const Array &ar)
		{
			length = ar.size();
			var = new T[length];
			return *this;
		}
		~Array()
		{
			delete[] var;
		}
		class out_of_range : public std::exception
		{
			const char* what() const throw()
			{
				return "Out Of Range";
			}
		};

		T	&operator[] (size_t i)
		{
			if (i < 0 || i >= size())
				throw out_of_range();
			return var[i];
		}

		size_t	size( void ) const
		{
			return length;
		}
};

#endif