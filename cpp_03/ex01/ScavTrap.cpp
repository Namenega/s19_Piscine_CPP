/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:58:32 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:36:39 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ****************************** Constructors ****************************** */

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
	std::cout << "\033[1;34mScavTrap Default Constructor called.\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName, 100, 50, 20) {
	std::cout << "\033[1;34mScavTrap Overload Constructor called.\033[0m" << std::endl;
}

/* **************************** Copy Constructor **************************** */

ScavTrap::ScavTrap(ScavTrap const & cpy) {
	std::cout << "\033[1;34mScavTrap Constructor Copy called.\033[0m" << std::endl;
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
	std::cout << "ScavTrap has entered \033[1;35mGuard mode\033[0m." << std::endl;
}

void			ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->_name
			<< " attack " << target << ", causing \033[1;36m"
			<< this->_attackDamage << "\033[0m points of damage." << std::endl;
}

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31mScavTrap Destructor called.\033[0m" << std::endl;
}
