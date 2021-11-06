/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:58:32 by namenega          #+#    #+#             */
/*   Updated: 2021/11/06 16:10:11 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ****************************** Constructors ****************************** */

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
	std::cout << "Default Constructor is called (ScavTrap)." << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName, 100, 50, 20) {
	std::cout << "Constructor with new name is called (ScavTrap)." << std::endl;
}

/* **************************** Copy Constructor **************************** */

ScavTrap::ScavTrap(ScavTrap const & cpy) {
	std::cout << "Constructor Copy is called (ScavTrap)." << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

ScavTrap &			ScavTrap::operator=(ScavTrap const & rhs) {
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream COUT, ScavTrap const & rhs) {
	COUT << rhs.getName() << std::endl;
	COUT << rhs.getHitPoints() << std::endl;
	COUT << rhs.getEnergyPoints() << std::endl;
	COUT << rhs.getAttackDamage() << std::endl;
}

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "Destructor is called (ScavTrap)." << std::endl;
}
