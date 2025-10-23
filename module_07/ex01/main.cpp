
#include "iter.tpp"

class Awesome
{
	private:
		int _n;

	public:
		Awesome(void) : _n(42) {return ;}
		int	get(void)const {return (this->_n);}
};
std::ostream	&operator<<(std::ostream &o, const Awesome &rhs) {o << rhs.get(); return (o);}

template <typename T>
void	print(const T &x) {std::cout << x << std::endl; return ;}

int	complex(void){
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && (std::string)argv[1] == "complex")
		return (complex());

	int			n[] = {1, 2, 3, 4, 5};
	std::string	s[]	= {"one", "two", "three", "four", "five"};
	char		c[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << RED "INT:" WHITE << std::endl;
	::iter(n, 5, print_values);
	std::cout << std::endl;

	std::cout << RED "STRING:" WHITE << std::endl;
	::iter(s, 5, print_values);
	std::cout << std::endl;

	std::cout << RED "CHAR:" WHITE << std::endl;
	::iter(c, 5, print_values);

	return (0);
}
