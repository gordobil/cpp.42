#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "contact.hpp"

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search_contact();

	private:
		Contact	contacts[8];
		int		contact_count;
		int		contact_index;
};

//UTILS
int		num_compare(std::string str);
void	print_index(Contact	contacts[8], int contact_count);

#endif
