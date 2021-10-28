/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:29:36 by pyg               #+#    #+#             */
/*   Updated: 2021/10/28 10:10:59 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." <<std::endl;
}

std::string	Zombie::getName() const
{
	return (this->_name);
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}
