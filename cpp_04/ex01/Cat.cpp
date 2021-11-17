/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:46 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:31:02 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ****************************** Constructor ******************************* */

Cat::Cat() : Animal("Cat") {
	std::cout << "Default Cat Constructor is called." << std::endl;
	_catBrain = new Brain();
}

/* **************************** Copy Constructor **************************** */

Cat::Cat(const Cat & cpy) : Animal(cpy) {
	std::cout << "Cat Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Cat &				Cat::operator=(Cat const & operEqual) {
	std::cout << "--- Printing Cat operator= ---" << std::endl;
	if (this != &operEqual) {
		delete this->_catBrain;
		_catBrain = new Brain(*operEqual._catBrain);
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
	delete _catBrain;
}
