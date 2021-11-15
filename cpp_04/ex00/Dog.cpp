/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:00:28 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 16:35:19 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ****************************** Constructor ******************************* */

Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

Dog::Dog(const Dog & cpy) {
	std::cout << "Dog Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Dog &				Dog::operator=(Dog const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		Animal::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void				Dog::makeSound() const {
	std::cout << "Woof Woof !" << std::endl;
}

/* ******************************* Destructor ******************************* */

Dog::~Dog() {
	std::cout << "Dog Destructor is called." << std::endl;
}
