
#include "whatever.tpp"

int	main(void)
{
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

	return (6);
}
