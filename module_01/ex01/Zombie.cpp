/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:10:38 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:10:38 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){
	std::cout << name << " died :(" << std::endl;
}

void	Zombie::change_name(std::string new_name)
{
	name = new_name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": Moar braiiiiiiinnnzzzZ!!!" << std::endl;
}
