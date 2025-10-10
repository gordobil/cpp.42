
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <map>
#include "Date.hpp"

class BitcoinExchange
{
	private:
		std::map<Date, float>	data;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string newData);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange	&operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		//FUNCTIONS
		void					exchange(std::string inputFile);
		bool					checkLine(std::string line);
		bool					checkDate(std::string date);
		bool					checkValue(float value);
		bool					compareDates(Date &date, Date &compare);
		std::map<Date, float>	getData(void)const;
};

#endif