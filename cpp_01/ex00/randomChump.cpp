/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:29:33 by pyg               #+#    #+#             */
/*   Updated: 2021/10/27 15:42:23 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie*	random = newZombie(name);
	random->announce();
	sleep(2);
	std::cout << std::endl;
	std::cout << "You shoot it right in the face !" << std::endl;
	sleep(2);
	delete random;
	std::cout << std::endl;
}
