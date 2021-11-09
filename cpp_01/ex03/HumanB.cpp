/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:56:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/09 13:19:10 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/********************************* Constructor ********************************/

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
	
}

/*********************************** Attack ***********************************/

void		HumanB::attack() const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks but doesn't have a weapon. Yikes" << std::endl;
	else
		std::cout << this->_name << " attacks with his weapon " << this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

/********************************** Destructor ********************************/

HumanB::~HumanB()
{
}
