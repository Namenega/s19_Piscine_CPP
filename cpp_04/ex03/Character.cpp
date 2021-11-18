/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:16:22 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 14:02:02 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* ****************************** Constructor ******************************* */

Character::Character() : _name("default"), _count(0) {
	std::cout << "Default Character Constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

Character::Character(std::string newName) : _name(newName), _count(0) {
	std::cout << "Named Character Constructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

/* **************************** Copy Constructor **************************** */

Character::Character(Character const & cpy) {
	std::cout << "Character Copy Constructor called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Character &				Character::operator=(Character const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		_name = operEqual._name;
		_count = operEqual._count;
		for (int i = 0; i < _count; i++) {
			delete _inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			_inventory[i] = 0;
		}
		for (int i = 0; i < _count; i++) {
			_inventory[i] = operEqual._inventory[i]->clone();
		}
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string const &		Character::getName() const {
	return (this->_name);
}

/* ******************************* Functions ******************************** */

void			Character::equip(AMateria* m) {
	if (_count >= 0 && _count < 4) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] == 0) {
				th-s>_inventory[_count] = m;
				_count++;
				return ;
			}
		}
	}
}

void			Character::unequip(int idx) {
	if (this->_inventory[idx]) {
		this->inventory[idx] = 0;
		_count--;
	}
}

void			Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx] && idx >= 0 && idx < 4) {
		_inventory[idx]->use(target);
	}
}

/* ******************************* Destructor ******************************* */

Character::~Character() {
	std::cout << "Character Destructor called." << std::endl;
	// for (int i = 0; i < _count; i++) {
	// 	delete _inventory[i];
	// }
	delete [] _inventory;
}
