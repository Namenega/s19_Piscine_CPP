/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:39:29 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 12:56:32 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ****************************** Constructor ******************************* */

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
	std::cout << "Default ScavTrap Constructor is called." << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName, 100, 50, 20) {
	std::cout << "ScavTrap Constructor(name) is called." << std::endl;
}

ScavTrap::ScavTrap(int type) {
	(void)type;
	_energyPoints = 50;
}

/* **************************** Copy Constructor **************************** */

ScavTrap::ScavTrap(const ScavTrap & cpy) : ClapTrap(cpy) {
	std::cout << "ScavTrap Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

ScavTrap &			ScavTrap::operator=(ScavTrap const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual)
		ClapTrap::operator=(operEqual);
	return (*this);
}

/* ******************************* Functions ******************************** */

void				ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered in Gate keep mode." << std::endl;
}

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor is called." << std::endl;
}
