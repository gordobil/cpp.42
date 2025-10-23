
#include "whatever.tpp"

class Awesome
{
	private:
		int		_n;

	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome	&operator=(Awesome &a) {_n = a._n; return (*this);}
		bool	operator==(Awesome &rhs)const {return (this->_n == rhs._n);}
		bool	operator!=(Awesome &rhs)const {return (this->_n != rhs._n);}
		bool	operator>(Awesome &rhs)const {return (this->_n > rhs._n);}
		bool	operator<(Awesome &rhs)const {return (this->_n < rhs._n);}
		bool	operator>=(Awesome &rhs)const {return (this->_n >= rhs._n);}
		bool	operator<=(Awesome &rhs)const {return (this->_n <= rhs._n);}
		int		get_n(void)const {return (_n);}

};
std::ostream	&operator<<(std::ostream &o, const Awesome &a) {o << a.get_n(); return (o);}

void	complex(void){
	Awesome	a(2), b(4);

	swap (a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 2 && (std::string)argv[1] == "complex")
		complex();
	else {
		int			n1 = 5;
		int			n2 = 8;
		std::string	s1 = "string1";
		std::string	s2 = "string2";

		std::cout << RED "	INTS" CYAN << std::endl;
		std::cout << "n1: " WHITE << n1 << CYAN " / n2: " WHITE << n2 << std::endl;
		::swap(n1, n2);
		std::cout << CYAN "swapped -> n1: " WHITE << n1 << CYAN " / n2: " WHITE << n2 << std::endl;
		std::cout << CYAN "min: " WHITE << ::min(n1, n2) << std::endl;
		std::cout << CYAN "max: " WHITE << ::max(n1, n2) << std::endl << std::endl;

		std::cout << RED "	STRINGS" CYAN << std::endl;
		std::cout << "s1: " WHITE << s1 << CYAN " / s2: " WHITE << s2 << std::endl;
		::swap(s1, s2);
		std::cout << CYAN "swapped -> s1: " WHITE << s1 << CYAN " / s2: " WHITE << s2 << std::endl;
		std::cout << CYAN "min: " WHITE << ::min(s1, s2) << std::endl;
		std::cout << CYAN "max: " WHITE << ::max(s1, s2) << std::endl << std::endl;

		std::cout << RED "	CHARS" CYAN << std::endl;
		std::cout << "c1: " WHITE << s1[6] << CYAN " / c2: " WHITE << s2[6] << std::endl;
		::swap(s1[6], s2[6]);
		std::cout << CYAN "swapped -> c1: " WHITE << s1[6] << CYAN " / c2: " WHITE << s2[6] << std::endl;
		std::cout << CYAN "min: " WHITE << ::min(s1[6], s2[6]) << std::endl;
		std::cout << CYAN "max: " WHITE << ::max(s1[6], s2[6]) << std::endl;
	}

	return (6);
}
