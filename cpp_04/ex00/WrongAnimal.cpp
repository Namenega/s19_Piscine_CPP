/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:44:48 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 17:12:47 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ****************************** Constructor ******************************* */

WrongAnimal::WrongAnimal() : _type("") {
	std::cout << "Default WrongAnimal Constructor is called." << std::endl; 
}

WrongAnimal::WrongAnimal(std::string newType) : _type(newType) {
	std::cout << "WrongAnimal Constructor with type is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

WrongAnimal::WrongAnimal(const WrongAnimal & cpy) {
	std::cout << "WrongAnimal Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

WrongAnimal &				WrongAnimal::operator=(WrongAnimal const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		this->_type = operEqual._type;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string				WrongAnimal::getType() const {
	return (this->_type);
}

/* ******************************* Functions ******************************** */

void					WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound!" << std::endl;
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, WrongAnimal const & operOstream) {
	COUT << operOstream.getType() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor is called." << std::endl;
}
