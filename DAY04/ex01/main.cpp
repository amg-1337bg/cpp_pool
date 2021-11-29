#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

	Cat *cat = new Cat();
	Cat *cat1 = new Cat();

	std::cout << cat->getBrain() << std::endl;
	std::cout << cat1->getBrain() << std::endl;
	cat1 = cat;
	std::cout << cat->getBrain() << std::endl;
	std::cout << cat1->getBrain() << std::endl;

// 	int N = 5;
// 	// const Animal* j = new Dog();
// 	// const Animal* i = new Cat();

// 	Animal *A[N];

// 	std::cout << "----------Array Of Animals----------" << std::endl;

// 	for (int i = 0; i < N / 2; i++)
// 		A[i] = new Cat();
// 	for (int i = N / 2; i < N; i++)
// 		A[i] = new Dog();

// 	std::cout << "----------Desctructors----------" << std::endl;
// 	for (int i = 0; i < N; i++)
// 		delete A[i];

// 	std::cout << "----------Test Deep Copy----------" << std::endl;
// 	Cat cat;
// 	Cat	c(cat);

// 	std::cout << cat.getBrain() << std::endl;
// 	std::cout << c.getBrain() << std::endl;

// 	std::cout << "----------Test Deep Copy----------" << std::endl;
// 	Dog dog;
// 	Dog d (dog);

// 	std::cout << dog.getBrain() << std::endl;
// 	std::cout << d.getBrain() << std::endl;
	
// 	// std::cout << j->getBrain() << std::endl;

// 	// delete j;//should not create a leak
// 	// delete i;
}