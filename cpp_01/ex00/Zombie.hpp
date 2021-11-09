/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:29:42 by pyg               #+#    #+#             */
/*   Updated: 2021/11/09 12:45:26 by namenega         ###   ########.fr       */
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
		Zombie(std::string	name);
		~Zombie();

		void		announce(void);
		std::string	getName() const;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
