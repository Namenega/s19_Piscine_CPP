/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:54:28 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 16:12:54 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/********************************* Constructor ********************************/

Weapon::Weapon() : _weaponType("default")
{
}

Weapon::Weapon(std::string type) : _weaponType(type)
{
}

/*************************** Get and Set _weaponType **************************/

std::string const&	Weapon::getType() const
{
	return (this->_weaponType);
}

void				Weapon::setType(std::string	type)
{
	this->_weaponType = type;
}

/********************************** Destructor ********************************/

Weapon::~Weapon()
{
}
