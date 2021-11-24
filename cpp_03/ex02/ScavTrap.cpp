/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:39:29 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 12:11:21 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ****************************** Constructor ******************************* */

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
	std::cout << "\033[1;34mDefault ScavTrap Constructor called.\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName, 100, 50, 20) {
	std::cout << "\033[1;34mOverload ScavTrap Constructor called.\033[0m" << std::endl;
}

/* **************************** Copy Constructor **************************** */

ScavTrap::ScavTrap(const ScavTrap & cpy) {
	std::cout << "\033[1;34mScavTrap Copy Constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

ScavTrap &			ScavTrap::operator=(ScavTrap const & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual)
		ClapTrap::operator=(operEqual);
	return (*this);
}

/* ******************************* Functions ******************************** */

void				ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered in \033[1;35mGuard mode\033[0m." << std::endl;
}

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31mScavTrap Destructor called.\033[0m" << std::endl;
}
