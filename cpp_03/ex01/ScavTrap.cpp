/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:58:32 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 10:50:32 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ****************************** Constructors ****************************** */

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
	std::cout << "ScavTrap Default Constructor is called." << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName, 100, 50, 20) {
	std::cout << "ScavTrap Constructor(name) is called." << std::endl;
}

/* **************************** Copy Constructor **************************** */

ScavTrap::ScavTrap(ScavTrap const & cpy) {
	std::cout << "ScavTrap Constructor Copy is called." << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

ScavTrap &			ScavTrap::operator=(ScavTrap const & rhs) {
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

/* ******************************* Functions ******************************** */

void				ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered Guard mode" << std::endl;
}

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor is called." << std::endl;
}
