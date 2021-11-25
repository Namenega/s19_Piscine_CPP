/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:50:21 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:49:54 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ****************************** Constructor ******************************* */

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30) {
	std::cout << "\033[1;34mDefault FragTrap Constructor called.\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName, 100, 100, 30) {
	std::cout << "\033[1;34mOverload FragTrap Constructor called.\033[0m" << std::endl;
}

FragTrap::FragTrap(int type) {
	std::cout << "\033[1;34mOverload 2 FragTrap Constructor called.\033[0m" << std::endl;
	(void)type;
	_hitPoints = 100;
	_attackDamage = 30;
}

/* **************************** Copy Constructor **************************** */

FragTrap::FragTrap(const FragTrap & cpy) {
	std::cout << "\033[1;34mFragTrap Copy Constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

FragTrap &				FragTrap::operator=(FragTrap const & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		ClapTrap::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void					FragTrap::highFivesGuys(void) {
	std::cout << "GG FragTrap has been slayed." << std::endl;
	std::cout << "Let's \033[1;35mHigh Five\033[0m." << std::endl;
}

void			FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << this->_name
			<< " attack " << target << ", causing \033[1;36m"
			<< this->_attackDamage << "\033[0m points of damage." << std::endl;
}

/* ******************************* Destructor ******************************* */

FragTrap::~FragTrap() {
	std::cout << "\033[1;31mFragTrap Destructor called.\033[0m" << std::endl;
}
