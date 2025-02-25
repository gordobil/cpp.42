/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:50:55 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:50:55 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

# define CYAN	"\033[1;96m"
# define RED	"\033[1;31m"
# define WHITE	"\033[0m"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string get_name);
		~HumanB();
		void	setWeapon(Weapon *new_weapon);
		void	attack();
};

#endif
