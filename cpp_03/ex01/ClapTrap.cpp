/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:53:25 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:38:59 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructors ****************************** */

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

ClapTrap::ClapTrap(std::string newName, int hitPoints, int energyPoints, int attackDamage) {
	std::cout << "\033[1;34mClapTrap Overload 2 Constructor called.\033[0m" << std::endl;
	_name = newName;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "\033[1;34mClapTrap Copy Constructor called.\033[0m" << std::endl;
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
			<< " attack " << target << ", causing \033[1;36m"
			<< this->_attackDamage << "\033[0m points of damage." << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes \033[1;36m"
			<< amount << "\033[0m of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores \033[1;36m"
			<< amount << "\033[0m HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}

/* ************************** Assignment Operator *************************** */

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
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
	COUT << "\033[1;35mName : " << rhs.getName() << std::endl;
	COUT << "Hit Points : " << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points : " << rhs.getEnergyPoints() << std::endl;
	COUT << "Attack Dmg : " << rhs.getAttackDamage() << "\033[0m"  << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;31mClapTrap Destructor called.\033[0m" << std::endl;
}
