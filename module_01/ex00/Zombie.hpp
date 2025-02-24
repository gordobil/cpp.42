/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:44:14 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 09:44:14 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

# define YELLOW	"\033[1;93m"
# define CYAN	"\033[1;96m"
# define RED	"\033[1;31m"
# define WHITE	"\033[0m"

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void		change_name(std::string new_name);
		void		announce(void);
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif