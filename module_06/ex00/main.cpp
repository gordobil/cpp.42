
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc > 1){
		std::cout << std::endl;
		std::cout << RED "   YOUR TESTS:" WHITE << std::endl;
		for (int i = 1; i < argc; i++){
			ScalarConverter::convert(argv[i]);
			std::cout << std::endl;
		}
		std::cout << CYAN "--------------------------------" WHITE << std::endl;
		std::cout << CYAN "--------------------------------" WHITE << std::endl;
	}

	std::cout << std::endl;
	std::cout << RED "   CHAR TESTS:" WHITE << std::endl;
	ScalarConverter::convert("A");
	std::cout << std::endl;
	ScalarConverter::convert("	");
	std::cout << CYAN "--------------------------------" WHITE << std::endl << std::endl;

	std::cout << RED "   INT TESTS:" WHITE << std::endl;
	ScalarConverter::convert("120");
	std::cout << std::endl;
	ScalarConverter::convert("-9292");
	std::cout << std::endl;
	ScalarConverter::convert("2147483648");
	std::cout << std::endl;
	ScalarConverter::convert("-2147483649");
	std::cout << CYAN "--------------------------------" WHITE << std::endl << std::endl;

	std::cout << RED "   FLOAT TESTS:" WHITE << std::endl;
	ScalarConverter::convert("155f");
	std::cout << std::endl;
	ScalarConverter::convert("62.97f");
	std::cout << std::endl;
	ScalarConverter::convert("-440282346638528859811704183484516925440.0000000000000001f");
	std::cout << CYAN "--------------------------------" WHITE << std::endl << std::endl;

	std::cout << RED "   DOUBLE TESTS:" WHITE << std::endl;
	ScalarConverter::convert("43.0");
	std::cout << std::endl;
	ScalarConverter::convert("875.24");
	std::cout << std::endl;
	ScalarConverter::convert("279769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000");
	std::cout << CYAN "--------------------------------" WHITE << std::endl << std::endl;

	std::cout << RED "   PSEUDO-LITERAL TESTS:" WHITE << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
}
