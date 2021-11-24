/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:13:12 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 12:21:40 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ****************************** Constructor ******************************* */

DiamondTrap::DiamondTrap() : ScavTrap(1), FragTrap(1) {
	std::cout << "\033[1;34mDefault DiamondTrap Constructor called.\033[0m" << std::endl;	
}

DiamondTrap::DiamondTrap(std::string newName) : ScavTrap(1), FragTrap(1) {
	std::cout << "\033[1;34mOverload DiamondTrap Constructor called.\033[0m" << std::endl;
	_name = newName;
	this->setName(_name);
}

/* **************************** Copy Constructor **************************** */

DiamondTrap::DiamondTrap(const DiamondTrap & cpy) {
	std::cout << "\033[1;34mDiamondTrap Copy Constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

DiamondTrap &				DiamondTrap::operator=(DiamondTrap const & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual)
		ClapTrap::operator=(operEqual);
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */
/* ******************************* Functions ******************************** */

void						DiamondTrap::whoAmI() {
	std::cout << "My name is : \033[1;35m" << this->_name << "\033[0m" << std::endl;
	std::cout << "My ClapTrap name is : \033[1;35m" << this->getName() << "\033[0m" << std::endl;
}

/* ******************************* Destructor ******************************* */

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[1;31mDiamondTrap Destructor called.\033[0m" << std::endl;
}
