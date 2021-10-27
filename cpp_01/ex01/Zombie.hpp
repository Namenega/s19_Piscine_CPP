/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:53:10 by namenega          #+#    #+#             */
/*   Updated: 2021/10/27 16:34:42 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <unistd.h>

class Zombie
{
	private:
		std::string		_name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void		announce(void);
		void		setZombieName(std::string name);
};

Zombie*		zombieHorde(int N, std::string name);

#endif
