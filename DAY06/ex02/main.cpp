#include <iostream>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base	*generate( void )
{
	srand (time(NULL));
	int i = rand() % 3;

	std::cout << i << std::endl;
	switch (i)
	{
		case 0:	return (new A);
		case 1:	return (new B);
		case 2:	return (new C);
	}
	return NULL;
}

void	identify(Base *p)
{
	A *Aptr = dynamic_cast<A*>(p);
	if (Aptr != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *Bptr = dynamic_cast<B*>(p);
	if (Bptr != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *Cptr = dynamic_cast<C*>(p);
	if (Cptr != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A &Aptr = dynamic_cast<A&>(p);
		(void)(Aptr);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		B &Bptr = dynamic_cast<B&>(p);
		(void)(Bptr);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		C &Cptr = dynamic_cast<C&>(p);
		(void)(Cptr);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
}

int	main()
{
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);
}