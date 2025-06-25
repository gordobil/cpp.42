
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal	*animal1 = new Animal();
	const Animal	*cat1 = new Cat();
	const Animal	*dog1 = new Dog();

	std::cout << std::endl;
	std::cout << "animal type: " << animal1->getType() << std::endl;
	std::cout << "cat type: " << cat1->getType() << std::endl;
	std::cout << "dog type: " << dog1->getType() << std::endl << std::endl;

	animal1->makeSound();
	cat1->makeSound();
	dog1->makeSound();
	std::cout << std::endl;

	delete animal1;
	delete cat1;
	delete dog1;

	return (0);
}
