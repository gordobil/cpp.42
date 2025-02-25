/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:49:16 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:49:16 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string get_name){
	name = get_name;
};
HumanB::~HumanB(){};

void	HumanB::setWeapon(Weapon *new_weapon){
	weapon = new_weapon;
}

void	HumanB::attack(){
	std::cout << CYAN << name << WHITE " attacks with their " RED
			<< weapon->getType() << WHITE << std::endl;
}
