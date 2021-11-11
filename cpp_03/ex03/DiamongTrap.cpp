/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamongTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:13:12 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 13:05:38 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ****************************** Constructor ******************************* */

DiamondTrap::DiamondTrap() : FragTrap(1), ScavTrap(1) {
	std::cout << "Default DiamondTrap Constructor is called." << std::endl;	
}

DiamondTrap::DiamondTrap(std::string newName) : FragTrap(1), ScavTrap(1) {
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

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, DiamondTrap const & operOstream) {
	COUT << operOstream << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor is called." << std::endl;
}
