/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:29:42 by pyg               #+#    #+#             */
/*   Updated: 2021/10/27 15:17:40 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <unistd.h>

class Zombie
{
	private:
		std::string		_name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string	name);

		void		announce(void);
		std::string	getName() const;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

// Zombie::Zombie(/* args */)
// {
// }

// Zombie::~Zombie()
// {
// }


#endif
