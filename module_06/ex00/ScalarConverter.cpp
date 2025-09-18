
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &copy){
	(void)copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy){
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter(){}

// CONVERT
int	getParamType(std::string param){
	if (param.length() == 1 && !isdigit(param[0]) && param[0] >= 32 && param[0] <= 127)
		return (1);
	else if (param.length() == 1 && !isdigit(param[0]) && param[0] < 32 && param[0] > 127)
		return (-1);
	return (0);
}

void	ScalarConverter::convert(std::string param){
	int	type = getParamType(param);
}
