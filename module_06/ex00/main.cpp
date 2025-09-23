
#include "ScalarConverter.hpp"

int	main(void)
{
	std::cout << "   OK:" << std::endl;
	ScalarConverter::convert("s");
	ScalarConverter::convert("-4356");
	ScalarConverter::convert("3456.34f");
	ScalarConverter::convert("35.74");
	std::cout << std::endl;

	std::cout << "   EXCEPTIONS:" << std::endl;
	ScalarConverter::convert("nan");
	ScalarConverter::convert("+inff");
	ScalarConverter::convert("-inf");
	std::cout << std::endl;

	std::cout << "   ERRORS:" << std::endl;
	ScalarConverter::convert("€");
	ScalarConverter::convert("	");
	ScalarConverter::convert("2147483648");
	ScalarConverter::convert("-440282346638528859811704183484516925440.0000000000000000f");
	ScalarConverter::convert("279769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000");
}
