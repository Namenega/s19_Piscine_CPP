/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:55:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/05 18:37:36 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructor ******************************* */

ClapTrap::ClapTrap() {
	std::cout << "Constructor is called" << std::endl;
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "Constructor with name is called" << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "Constructor copy is called" << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string		ClapTrap::getName() const {
	return (this->_name);
}

int				ClapTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int				ClapTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int				ClapTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

/* ******************************* Functions ******************************** */

void			ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->getName()
				<< " attack " << target << ", causing "
				<< this->getAttackDamage() << " points of damage"
				<< std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name
				<< " takes " << amount << " of damage. Sheesh"
				<< std::endl;
	// this->_hitPoints -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name
				<< " drinks a potion, and restors "
				<< amount << " HitPoints." << std::endl;
	// this->_hitPoints += amount;
}

/* ******************************* Operator<< ******************************* */

std::ostream &	operator<<(std::ostream &COUT, ClapTrap const & rhs) {
	COUT << rhs.getName() << std::endl;
	COUT << rhs.getHitPoints() << std::endl;
	COUT << rhs.getEnergyPoints() << std::endl;
	COUT << rhs.getAttackDamage() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "Destructor is called" << std::endl;
}
