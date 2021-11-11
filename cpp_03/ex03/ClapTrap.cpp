/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:59:29 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 12:41:43 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ****************************** Constructor ******************************* */

ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap Constructor is called." << std::endl;
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "ClapTrap Constructor (name) is called." << std::endl;
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName, int hp, int energyPoints, int attackDamage) {
	std::cout << "ClapTrap Constructor (inherit) is called." << std::endl;
	_name = newName;
	_hitPoints = hp;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
}

/* **************************** Copy Constructor **************************** */

ClapTrap::ClapTrap(const ClapTrap & cpy) {
	std::cout << "ClapTrap Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

ClapTrap &				ClapTrap::operator=(ClapTrap const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		this->_name = operEqual._name;
		this->_hitPoints = operEqual._hitPoints;
		this->_energyPoints = operEqual._energyPoints;
		this->_attackDamage = operEqual._attackDamage;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

void				ClapTrap::setName(std::string newName) {
	this->_name = newName.append("_clap_name");
}

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
			<< " attacks " << target << " causing "
			<< this->_attackDamage << " points of damage." << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes "
			<< amount << " of damage. Sheesh" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void				ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " drinks a potion, and restores "
			<< amount << " HitPoints." << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 100)
		this->_hitPoints = 100;
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, ClapTrap const & operOstream) {
	COUT << "Name : " << operOstream.getName() << std::endl;
	COUT << "HP : " << operOstream.getHitPoints() << std::endl;
	COUT << "Energy Points : " << operOstream.getEnergyPoints() << std::endl;
	COUT << "Attack Dmg : " << operOstream.getAttackDamage() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor is called." << std::endl;
}
