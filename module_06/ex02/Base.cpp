
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

// FUNCTIONS
Base	*generate(void){

	srand(time(NULL));
	switch (rand() % 3 + 1)
	{
		case 1:
		{
			return (new A);
			break ;
		}
		case 2:
		{
			return (new B);
			break ;
		}
		case 3:
		{
			return (new C);
			break ;
		}
		default:
		{
			return (NULL);
			break ;
		}
	}
}

void	identify(Base *p){
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Class type 'A' identified using pointers." << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Class type 'B' identified using pointers." << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Class type 'C' identified using pointers." << std::endl;
	else
		std::cout << "Class type not identified." << std::endl;
}

void	identify(Base &p){

	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Class type 'A' identified without using pointers." << std::endl;
		return ;
	}
	catch (const std::bad_cast &e){}

	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Class type 'B' identified without using pointers." << std::endl;
		return ;
	}
	catch (const std::bad_cast &e){}

	try 
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Class type 'C' identified without using pointers." << std::endl;
		return ;
	}
	catch (const std::bad_cast &e){}
}
