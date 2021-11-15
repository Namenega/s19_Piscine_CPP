/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:07:31 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 17:14:27 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ****************************** Constructor ******************************* */

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

WrongCat::WrongCat(const WrongCat & cpy) {
	std::cout << "WrongCat Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

WrongCat &				WrongCat::operator=(WrongCat const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual) {
		WrongAnimal::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void				WrongCat::makeSound() const {
	std::cout << "22 here's the cops !" << std::endl;
}

/* ******************************* Destructor ******************************* */

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor is called." << std::endl;
}
