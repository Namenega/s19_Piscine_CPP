/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:50:21 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 12:03:19 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ****************************** Constructor ******************************* */

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30) {
	std::cout << "Default FragTrap Constructor is called." << std::endl; 
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName, 100, 100, 30) {
	std::cout << "FragTrap Constructor newName is called." << std::endl;
}

/* **************************** Copy Constructor **************************** */

FragTrap::FragTrap(const FragTrap & cpy) {
	std::cout << "FragTrap Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

FragTrap &				FragTrap::operator=(FragTrap const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		ClapTrap::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void					FragTrap::highFivesGuys(void) {
	std::cout << "GG FragTrap has been slayed." << std::endl;
	std::cout << "Let's High Five." << std::endl;
}

/* ******************************* Destructor ******************************* */

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor is called." << std::endl;
}
