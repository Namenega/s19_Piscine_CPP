/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:55:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 10:37:41 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructor ******************************* */

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap constructor is called" << std::endl;
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "ClapTrap constructor(name) is called" << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "ClapTrap constructor copy is called" << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "--- Printing operator= ---" << std::endl;
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
	std::cout << "Name : " << this->_name << std::endl;
	return (this->_name);
}

int				ClapTrap::getHitPoints() const {
	std::cout << "HitPoints : " << this->_hitPoints << std::endl;
	return (this->_hitPoints);
}

int				ClapTrap::getEnergyPoints() const {
	std::cout << "EnergyPoints : " << this->_energyPoints << std::endl;
	return (this->_energyPoints);
}

int				ClapTrap::getAttackDamage() const {
	std::cout << "attackDamage : " << this->_attackDamage << std::endl;
	return (this->_attackDamage);
}

/* ******************************* Functions ******************************** */

void			ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name
				<< " attack " << target << ", causing "
				<< this->_attackDamage << " points of damage" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name
				<< " takes " << amount << " of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores "
				<< amount << " HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
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
	std::cout << "ClapTrap destructor is called" << std::endl;
}
