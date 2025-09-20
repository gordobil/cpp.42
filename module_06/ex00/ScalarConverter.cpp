
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
	else if (isdigit(param))
		return (2);
	return (0);
}

void	ScalarConverter::convert(std::string param){
	int	type = getParamType(param);

	switch (type){
		case 1:
		{
			char	c = param[0];
			std::cout << "char: " << c << std::endl;
		}
		case -1:
		{
			std::cout << "Error: non displayable char." << std::endl;
		}
		case 2:
		{
			int	n = atoi(param);
			std::cout << "int: " << n << std::endl;
		}
	}
}
