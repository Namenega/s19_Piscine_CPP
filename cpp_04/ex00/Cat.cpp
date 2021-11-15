/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:46 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 17:08:26 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ****************************** Constructor ******************************* */

Cat::Cat() : Animal("Cat") {
	std::cout << "Default Cat Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

Cat::Cat(const Cat & cpy) {
	std::cout << "Cat Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Cat &				Cat::operator=(Cat const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		Animal::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void				Cat::makeSound() const {
	std::cout << "Meoooow Meoooow !" << std::endl;
}

/* ******************************* Destructor ******************************* */

Cat::~Cat() {
	std::cout << "Cat Destructor is called." << std::endl;
}
