/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:16:22 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 17:48:01 by namenega         ###   ########.fr       */
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

}

void			Character::unequip(int idx) {

}

void			Character::use(int idx, ICharacter& target) {
	
}

/* ******************************* Destructor ******************************* */

Character::~Character() {
	std::cout << "Character Destructor called." << std::endl;
	// for (int i = 0; i < _count; i++) {
	// 	delete _inventory[i];
	// }
	delete [] _inventory;
}
