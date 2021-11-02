/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:55:51 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 16:14:57 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/********************************* Constructor ********************************/

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

/*********************************** Attack ***********************************/

void		HumanA::attack() const
{
	std::cout << this->_name << " attacks with his weapon " << this->_weapon.getType() << std::endl;
}

/********************************** Destructor ********************************/

HumanA::~HumanA()
{
}
