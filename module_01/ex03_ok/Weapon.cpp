/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:35:04 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 13:35:04 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType) {
	type = newType;
}
Weapon::~Weapon(){};

std::string	Weapon::getType() {
	return (type);
}

void	Weapon::setType(std::string newType) {
	type = newType;
}
