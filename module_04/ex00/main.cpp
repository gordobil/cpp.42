
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal		*animal1 = new Animal();
	const Animal		*cat1 = new Cat();
	const Animal		*dog1 = new Dog();

	const WrongAnimal	*wrong_animal = new WrongCat();
	const WrongCat		*wrong_cat = new WrongCat();

	std::cout << std::endl;
	std::cout << animal1->getType() << " " << std::endl;
	std::cout << cat1->getType() << " " << std::endl;
	std::cout << dog1->getType() << " " << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl << std::endl;

	animal1->makeSound();
	dog1->makeSound();
	cat1->makeSound();
	wrong_animal->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;

	delete animal1;
	delete cat1;
	delete dog1;
	delete wrong_animal;
	delete wrong_cat;

	return (0);
}
