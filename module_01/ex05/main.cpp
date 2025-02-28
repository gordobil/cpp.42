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

#include "Harl.hpp"

int main(void)
{
	Harl	pepe;

	pepe.complain("DEBUG");
	pepe.complain("INFO");
	pepe.complain("WARNING");
	pepe.complain("ERROR");
	pepe.complain("aaaaaaaaaaaaa");

	return (0);
}
