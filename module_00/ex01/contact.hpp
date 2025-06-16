#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class Contact
{
	public:
		Contact();
		~Contact();
		void		update_contacts(std::string *data);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();		

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
