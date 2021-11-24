/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:59:29 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 12:12:56 by namenega         ###   ########.fr       */
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
	std::cout << "\033[1;34mOverload ClapTrap Constructor called.\033[0m" << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName, int hp, int energyPoints, int attackDamage) {
	std::cout << "\033[1;34mOverload 2 ClapTrap Constructor called.\033[0m" << std::endl;
	_name = newName;
	_hitPoints = hp;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "\033[1;34mClapTrap Copy Constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

ClapTrap &				ClapTrap::operator=(ClapTrap const & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		this->_name = operEqual._name;
		this->_hitPoints = operEqual._hitPoints;
		this->_energyPoints = operEqual._energyPoints;
		this->_attackDamage = operEqual._attackDamage;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string			ClapTrap::getName() const{
	return (this->_name);
}

int					ClapTrap::getEnergyPoints() const{
	return (this->_energyPoints);
}

int					ClapTrap::getHitPoints() const{
	return (this->_hitPoints);
}

int					ClapTrap::getAttackDamage() const{
	return (this->_attackDamage);
}

/* ******************************* Functions ******************************** */

void				ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << this->_name
			<< " attacks " << target << " causing \033[1;36m"
			<< this->_attackDamage << "\033[0m points of damage." << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes \033[1;36m"
			<< amount << "\033[0m of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void				ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores \033[1;36m"
			<< amount << "\033[0m HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, ClapTrap const & operOstream) {
	COUT << "\033[1;35mName : " << operOstream.getName() << std::endl;
	COUT << "HP : " << operOstream.getHitPoints() << std::endl;
	COUT << "Energy Points : " << operOstream.getEnergyPoints() << std::endl;
	COUT << "Attack Dmg : " << operOstream.getAttackDamage() << "\033[0m" << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "\033[1;31mClapTrap Destructor called.\033[0m" << std::endl;
}
