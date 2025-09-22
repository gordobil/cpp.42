
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &copy);
		~ScalarConverter();

	public:
		static void		convert(std::string param);
};

#endif
