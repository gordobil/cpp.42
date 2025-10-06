
#include "whatever.tpp"

int	main(void)
{
	int			n1 = 5;
	int			n2 = 8;
	std::string	s1 = "string1";
	std::string	s2 = "string2";

	std::cout << "	INTS" << std::endl;
	std::cout << "n1: " << n1 << " / n2: " << n2 << std::endl;
	::swap(n1, n2);
	std::cout << "swap - n1: " << n1 << " / n2: " << n2 << std::endl;
	std::cout << "min: " << ::min(n1, n2) << std::endl;
	std::cout << "max: " << ::max(n1, n2) << std::endl << std::endl;

	std::cout << "	STRINGS" << std::endl;
	std::cout << "s1: " << s1 << " / s2: " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "swap - s1: " << s1 << " / s2: " << s2 << std::endl;
	std::cout << "min: " << ::min(s1, s2) << std::endl;
	std::cout << "max: " << ::max(s1, s2) << std::endl << std::endl;

	std::cout << "	CHARS" << std::endl;
	std::cout << "c1: " << s1[6] << " / c2: " << s2[6] << std::endl;
	::swap(s1[6], s2[6]);
	std::cout << "swap - c1: " << s1[6] << " / c2: " << s2[6] << std::endl;
	std::cout << "min: " << ::min(s1[6], s2[6]) << std::endl;
	std::cout << "max: " << ::max(s1[6], s2[6]) << std::endl;

	return (6);
}
