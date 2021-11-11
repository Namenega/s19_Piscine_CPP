/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:53:25 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 10:45:44 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructors ****************************** */

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Constructor is called" << std::endl;
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "ClapTrap Constructor(name) is called" << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName, int hitPoints, int energyPoints, int attackDamage) {
	std::cout << "ClapTrap Constructor(inherit) is called" << std::endl;
	_name = newName;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "ClapTrap Constructor copy is called" << std::endl;
	*this = cpy;
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
	std::cout << "ClapTrap " << this->_name
			<< " attacks " << target << " causing "
			<< this->_attackDamage << " points of damage." << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes "
			<< amount << " of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores "
			<< amount << " HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}

/* ************************** Assignment Operator *************************** */

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

/* ******************************* Operator<< ******************************* */

std::ostream &	operator<<(std::ostream & COUT, ClapTrap const &rhs) {
	COUT << "Name : " << rhs.getName() << std::endl;
	COUT << "HP : " << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points : " << rhs.getEnergyPoints() << std::endl;
	COUT << "Attack Dmg : " << rhs.getAttackDamage() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor is called." << std::endl;
}
