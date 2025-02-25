/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:48:55 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:48:55 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string get_name, Weapon &get_weapon):
		name(get_name), weapon(get_weapon){};
HumanA::~HumanA(){};

void	HumanA::attack(){
	std::cout << CYAN << name << WHITE " attacks with their " RED
			<< weapon.getType() << WHITE << std::endl;
}
