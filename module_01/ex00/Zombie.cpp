/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:48:33 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 09:48:33 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){
	std::cout << RED << name << " died :(" WHITE << std::endl;
}

void	Zombie::change_name(std::string new_name)
{
	name = new_name;
}

void	Zombie::announce(void)
{
	std::cout << name << ":" << CYAN " BraiiiiiiinnnzzzZ..." WHITE << std::endl;
}
