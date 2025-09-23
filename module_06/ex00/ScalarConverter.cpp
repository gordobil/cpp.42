
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
int	getParamType(std::string param)
{
	int		i = 0;
	int		type = 0;

	if (!isdigit(param[i]) && (int)param.length() == 1)
		return (1);
	else if (!isdigit(param[i]) && (int)param.length() > 1 && param[i] != '-')
		return (0);
	else
		i++;

	for (; i < (int)param.length(); i++)
	{
		if (!isdigit(param[i]) && type == '0' && param[i] == '.')
			type = 4;
		else if (!isdigit(param[i]) && (type == '0' || type == 'd')
			&& i == (int)param.length() - 1 && param[i] == 'f')
			type = 3;
		else if (!isdigit(param[i]))
			break ;
	}

	if (i == (int)param.length() && type == 0)
		type = 2;
	else if (param == "nan" || param == "nanf")
		type = 5;
	else if (param == "+inf" || param == "+inff" || param == "inf" || param == "inff")
		type = 6;
	else if (param == "-inf" || param == "-inff")
		type = 7;

	return (type);
}

void	ScalarConverter::convert(std::string param){
	int		type = getParamType(param);
	int		c = static_cast<char>(param[0]);
	int		i = stoi(param);
	float	f = stof(param);
	double	d = stod(param);

	switch (type){
		case 1:		/******************* CHAR *******************/
		{
			if (isprint(c))
				std::cout << "char: " << c << std::endl;
			else if (c < 0 || c > 127)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(c) << std::endl;
				std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(c) << std::endl;
		}
		case 2:		/******************* INT *******************/
		{
			if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
			{
				std::cout << "Number out of INT limits, unable to cast." << std::endl;
				return ;
			}
			if (isprint(static_cast<char>(i)))
				std::cout << "char: " << static_cast<char>(i) << std::endl;
			else if (c < 0 || c > 127)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << i << std::endl;
				std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(i) << std::endl;
		}
		case 3:		/****************** FLOAT ******************/
		{
			if (f > std::numeric_limits<float>::max() || f < std::numeric_limits<float>::min())
			{
				std::cout << "Number out of FLOAT limits, unable to cast." << std::endl;
				return ;
			}
			if (isprint(static_cast<char>(f)))
				std::cout << "char: " << static_cast<char>(f) << std::endl;
			else if (c < 0 || c > 127)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(f) << std::endl;
				std::cout << "float: " << f << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(f) << std::endl;
		}
		case 4:		/***************** DOUBLE ******************/
		{
			if (d > std::numeric_limits<double>::max() || d < std::numeric_limits<double>::min())
			{
				std::cout << "Number out of DOUBLE limits, unable to cast." << std::endl;
				return ;
			}
			if (isprint(static_cast<char>(d)))
				std::cout << "char: " << static_cast<char>(d) << std::endl;
			else if (c < 0 || c > 127)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(d) << std::endl;
				std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
				std::cout << "double: " << d << std::endl;
		}
		case 5:		/******************* NaN *******************/
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
		}
		case 6:		/***************** INFINITY *****************/
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
			std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
		}
		case 7:		/************* NEGATIVE INFINITY ************/
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << std::numeric_limits<float>::infinity() * -1 << "f" << std::endl;
			std::cout << "double: " << std::numeric_limits<double>::infinity() * -1 << std::endl;
		}
	}
}
