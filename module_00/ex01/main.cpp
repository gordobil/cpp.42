#include "phonebook.hpp"

int	num_compare(std::string str)
{
	for (long unsigned int i = 0; i < str.length(); i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}

void	print_index(Contact	contacts[8], int contact_count)
{
	std::cout << std::endl << CYAN;
	std::cout << std::setw(10) << "INDEX" << WHITE "|" CYAN;
	std::cout << std::setw(10) << "1ST NAME" << WHITE "|" CYAN;
	std::cout << std::setw(10) << "LAST NAME" << WHITE "|" CYAN;
	std::cout << std::setw(10) << "NICKNAME" << WHITE "|";
	std::cout << std::endl << std::endl;

	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::setw(10) << i << CYAN "|" WHITE;
		if (contacts[i].get_first_name().length() < 10)
			std::cout << std::setw(10) << contacts[i].get_first_name() << CYAN "|" WHITE;
		else
			std::cout << std::setw(10) << (contacts[i].get_first_name()).substr(0, 9) + "." << CYAN "|" WHITE;

		if (contacts[i].get_last_name().length() < 10)
			std::cout << std::setw(10) << contacts[i].get_last_name() << CYAN "|" WHITE;
		else
			std::cout << std::setw(10) << (contacts[i].get_last_name()).substr(0, 9) + "." << CYAN "|" WHITE;

		if (contacts[i].get_nickname().length() < 10)
			std::cout << std::setw(10) << contacts[i].get_nickname() << CYAN "|" WHITE;
		else
			std::cout << std::setw(10) << (contacts[i].get_nickname()).substr(0, 9) + "." << CYAN "|" WHITE;

		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	command;

	std::cout << std::endl;
	while(1)
	{
		std::cout << CYAN "¬ " WHITE;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			PhoneBook.add_contact();
		else if (command == "SEARCH")
			PhoneBook.search_contact();
	}
	std::cout << std::endl;
	return (0);
}
