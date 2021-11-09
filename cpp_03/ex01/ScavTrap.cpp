/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:58:32 by namenega          #+#    #+#             */
/*   Updated: 2021/11/09 18:38:20 by namenega         ###   ########.fr       */
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

/* ******************************* Operator<< ******************************* */

void				ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered Guard mode" << std::endl;
}


/* ******************************* Operator<< ******************************* */

// std::ostream &		operator<<(std::ostream COUT, ScavTrap const & rhs) {
// 	COUT << rhs.getName() << std::endl;
// 	COUT << rhs.getHitPoints() << std::endl;
// 	COUT << rhs.getEnergyPoints() << std::endl;
// 	COUT << rhs.getAttackDamage() << std::endl;
// 	return (COUT);
// }

/* ******************************* Destructor ******************************* */

ScavTrap::~ScavTrap() {
	std::cout << "Destructor is called (ScavTrap)." << std::endl;
}
