/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:50:26 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/19 16:50:26 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

# define YELLOW	"\033[1;93m"
# define CYAN	"\033[1;96m"
# define RED	"\033[1;31m"
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