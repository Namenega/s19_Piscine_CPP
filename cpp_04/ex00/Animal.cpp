/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:44:38 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 16:35:36 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ****************************** Constructor ******************************* */

Animal::Animal() : _type("") {
	std::cout << "Default Animal Constructor is called." << std::endl; 
}

Animal::Animal(std::string newType) : _type(newType) {
	std::cout << "Animal Constructor with type is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

Animal::Animal(const Animal & cpy) {
	std::cout << "Animal Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Animal &				Animal::operator=(Animal const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		this->_type = operEqual._type;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string				Animal::getType() const {
	return (this->_type);
}

/* ******************************* Functions ******************************** */

void					Animal::makeSound() const {
	std::cout << "Animal sound!" << std::endl;
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, Animal const & operOstream) {
	COUT << operOstream.getType() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

Animal::~Animal() {
	std::cout << "Animal Destructor is called." << std::endl;
}
