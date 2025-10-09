
#include "MutantStack.hpp"

int	subject_main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

int	main(int argc, char **argv)
{
	MutantStack<int>	ms;

	if (argc == 2 && (std::string)argv[1] == "subject")
		return (subject_main());
	else if (argc == 3 && (std::string)argv[1] == "random" && !isdigit(atoi(argv[2])))
	{
		std::srand(time(NULL));
		for (int i = 0; i < atoi(argv[2]); i++)
			ms.push(std::rand());
	}
	else
	{
		ms.push(0);
		ms.push(1);
		ms.push(2);
		ms.push(3);
		ms.push(4);
		ms.push(5);
		ms.push(6);
		ms.push(7);
		ms.push(8);
		ms.push(9);
	}

	std::cout << "TOP:" << ms.top() << std::endl;
	std::cout << "SIZE:" << ms.size() << std::endl << std::endl;

	ms.pop();
	std::cout << "ms.pop()" << std::endl;
	std::cout << "TOP:" << ms.top() << std::endl;
	std::cout << "SIZE:" << ms.size() << std::endl << std::endl;

	std::cout << " ¬ ITER" << std::endl;
	MutantStack<int>::iterator			itB = ms.begin();
	MutantStack<int>::iterator			itE = ms.end();
	for (;itB != itE; itB++)
		std::cout << *itB << std::endl;

	std::cout << std::endl;
	std::cout << " ¬ REVERSE ITER" << std::endl;
	MutantStack<int>::reverse_iterator	ritB = ms.rbegin();
	MutantStack<int>::reverse_iterator	ritE = ms.rend();
	for (;ritB != ritE; ritB++)
		std::cout << *ritB << std::endl;

	return (0);
}
