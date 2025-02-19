/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:53:42 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/17 21:53:42 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{	contact_count = 0;
	contact_index = 0; }
PhoneBook::~PhoneBook(){}

void	PhoneBook::add_contact()
{
	std::string	titles[5] = {"FIRST NAME", "LAST NAME", "NICKNAME", "PHONE NUMBER", "DARKEST SECRET"};
	std::string	data[5];

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << CYAN + titles[i] + ": " WHITE;
		std::getline(std::cin, data[i]);
		if (!data[i][0] || (i == 3 && num_compare(data[i]) == 1)){
			std::cout << RED "Error: invalid " + titles[i] + "." WHITE << std::endl;
			return ;
		}
	}
	std::cout << std::endl;

	contacts[contact_index].update_contacts(data);
	if (contact_index < 7)
		contact_index++;
	else
		contact_index = 0;
	if (contact_count < 8)
		contact_count++;
}

void	PhoneBook::search_contact()
{
	std::string	i_contact;
	int		i;

	if (contact_count < 1){
		std::cout << RED "Error: no contacts found." WHITE << std::endl;
		return ;
	}

	print_index(contacts, contact_count);

	std::cout << CYAN "Choose a contact (0 - " << contact_count - 1 << "): " WHITE;
	std::getline(std::cin, i_contact);

	if (i_contact.length() > 1 || i_contact[0] < '0' || i_contact[0] > '9' || (i_contact[0] - 48 > (contact_count - 1)))
		std::cout << std::endl << RED "Error: invalid contact." WHITE << std::endl;
	else
	{
		i = i_contact[0] - 48;
		std::cout << std::endl;
		std::cout << CYAN "FIRST NAME: " WHITE + contacts[i].get_first_name() << std::endl;
		std::cout << CYAN "LAST NAME: " WHITE + contacts[i].get_last_name() << std::endl;
		std::cout << CYAN "NICKNAME: " WHITE + contacts[i].get_nickname() << std::endl;
		std::cout << CYAN "PHONE NUMBER: " WHITE + contacts[i].get_phone_number() << std::endl;
		std::cout << CYAN "DARKEST SECRET: " WHITE + contacts[i].get_darkest_secret() << std::endl;
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
		if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("ADD") == 0)
			PhoneBook.add_contact();
		else if (command.compare("SEARCH") == 0)
			PhoneBook.search_contact();
	}
	return (0);
}
