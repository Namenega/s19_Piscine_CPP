/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:54:36 by namenega          #+#    #+#             */
/*   Updated: 2021/10/27 16:38:15 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

void		Zombie::announce()
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "BANG ! " << this->_name << " has been destroyed !" << std::endl;
	sleep(1);
}
