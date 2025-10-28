
#include "easyfind.tpp"

int	main(void)
{
	std::vector<int>	v;
	std::deque<int>		d;
	std::list<int>		l;
	std::deque<char>	c;

	std::cout << RED " ¬ VECTOR:" WHITE << std::endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	easyfind(v, 2);
	std::cout << std::endl;

	std::cout << RED " ¬ DEQUE:" WHITE << std::endl;
	d.push_back(13);
	d.push_back(348);
	d.push_back(38927);
	d.push_back(9993939);
	easyfind(d, 38927);
	std::cout << std::endl;

	std::cout << RED " ¬ LIST:" WHITE << std::endl;
	l.push_back(200);
	l.push_back(100);
	l.push_back(50);
	l.push_back(25);
	l.push_back(5);
	l.push_back(1);
	easyfind(l, 50);
	std::cout << std::endl;

	std::cout << RED "* NOT FOUND:" WHITE << std::endl;
	easyfind(v, 4);
	std::cout << std::endl;

	std::cout << RED "* CHAR:" WHITE << std::endl;
	c.push_back('A');
	c.push_back('B');
	c.push_back('C');	
	easyfind(c, 'B');

	return (0);
}
