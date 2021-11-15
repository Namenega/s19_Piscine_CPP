/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:13:12 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 12:51:38 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ****************************** Constructor ******************************* */

DiamondTrap::DiamondTrap() : ScavTrap(1), FragTrap(1) {
	std::cout << "Default DiamondTrap Constructor is called." << std::endl;	
}

DiamondTrap::DiamondTrap(std::string newName) : ScavTrap(1), FragTrap(1) {
	std::cout << "DiamondTrap constructor (name) is called." << std::endl;
	_name = newName;
	this->setName(_name);
}

/* **************************** Copy Constructor **************************** */

DiamondTrap::DiamondTrap(const DiamondTrap & cpy) {
	std::cout << "DiamondTrap Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

DiamondTrap &				DiamondTrap::operator=(DiamondTrap const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual)
		ClapTrap::operator=(operEqual);
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */
/* ******************************* Functions ******************************** */

void						DiamondTrap::whoAmI() {
	std::cout << "My name is : " << this->_name << std::endl;
	std::cout << "My ClapTrap name is : " << this->getName() << std::endl;
}

/* ******************************* Destructor ******************************* */

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor is called." << std::endl;
}
