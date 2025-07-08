
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int					n = 6;
	const AAnimal		*animals[n];

	for (int i = 0; i < (n / 2); i++)
		animals[i] = new Cat();
	for (int i = (n / 2); i < n; i++)
		animals[i] = new Dog();
	
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << animals[i]->getType() << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		animals[i]->makeSound();

	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		delete animals[i];

	std::cout << std::endl;
	Cat *cat = new Cat();
	Cat copy;
	copy = *cat;
	delete cat;
	std::cout << std::endl;

	return (0);
}
