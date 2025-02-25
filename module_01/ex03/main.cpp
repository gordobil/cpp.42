/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:46:30 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 12:46:30 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon weaponA = Weapon("katana");
	HumanA ramon("Ramón", weaponA);
		ramon.attack();
		weaponA.setType("navaja");
		ramon.attack();

	Weapon weaponB = Weapon("chimbera");
	HumanB emilia("Emilia");
		emilia.setWeapon(&weaponB);
		emilia.attack();
		weaponB.setType("martillo");
		emilia.attack();

	return (0);
}
