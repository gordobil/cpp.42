/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:48:50 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 09:48:50 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int			n = 10;
	std::string	name = "sssombi";
	Zombie	*zombies = zombieHorde(n, name);

	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;

	return (0);
}
