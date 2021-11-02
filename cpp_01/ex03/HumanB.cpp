/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:56:43 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 16:20:52 by namenega         ###   ########.fr       */
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
	std::cout << _name << " attacks with his weapon " << _weapon.getType() << std::endl;
}

void		HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

/********************************** Destructor ********************************/

HumanB::~HumanB()
{
}
