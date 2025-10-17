
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <map>
#include <utility>
#include "Date.hpp"

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class BitcoinExchange
{
	private:
		std::map<Date, float>	data;

	public:
		BitcoinExchange(std::string newData);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange	&operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		//FUNCTIONS
		void					exchange(std::string inputFile);
		bool					checkLine(std::string line);
		bool					checkDate(std::string date);
		bool					checkValue(float value);
		std::map<Date, float>	getData(void)const;
};

#endif
