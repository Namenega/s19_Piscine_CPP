/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:55:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 11:40:37 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructor ******************************* */

ClapTrap::ClapTrap() {
	std::cout << "\033[1;34mDefault ClapTrap Constructor called.\033[0m" << std::endl;
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "\033[1;34mClapTrap Overload Constructor called.\033[0m" << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "\033[1;34mClapTrap Copy Constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
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
	// std::cout << "Name : " << this->_name << std::endl;
	return (this->_name);
}

int				ClapTrap::getHitPoints() const {
	// std::cout << "HitPoints : " << this->_hitPoints << std::endl;
	return (this->_hitPoints);
}

int				ClapTrap::getEnergyPoints() const {
	// std::cout << "EnergyPoints : " << this->_energyPoints << std::endl;
	return (this->_energyPoints);
}

int				ClapTrap::getAttackDamage() const {
	// std::cout << "attackDamage : " << this->_attackDamage << std::endl;
	return (this->_attackDamage);
}

/* ******************************* Functions ******************************** */

void			ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name
				<< " attack " << target << ", causing \033[1;36m"
				<< this->_attackDamage << "\033[0m points of damage" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name
				<< " takes \033[1;36m" << amount << "\033[0m of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores \033[1;36m"
				<< amount << "\033[0m HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
}

/* ******************************* Operator<< ******************************* */

std::ostream &	operator<<(std::ostream &COUT, ClapTrap const & rhs) {
	COUT << "\033[1;35mName : " << rhs.getName() << std::endl;
	COUT << "HitPoints : " << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points : " <<  rhs.getEnergyPoints() << std::endl;
	COUT << "Attack DMG : " <<  rhs.getAttackDamage() << "\033[0m" << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;31mClapTrap Destructor called.\033[0m" << std::endl;
}
