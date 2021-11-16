/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premade.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:08:24 by namenega          #+#    #+#             */
/*   Updated: 2021/11/16 16:11:40 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

/* ****************************** Constructor ******************************* */

Class::Class() {
	std::cout << "Default Class Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

Class::Class(const Class & cpy) {
	std::cout << "Class Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Class &				Class::operator=(Class const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual)
		this = operEqual;
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */
/* ******************************* Functions ******************************** */
/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, Class const & operOstream) {
	COUT << operOstream << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

Class::~Class() {
	std::cout << "Class Destructor is called." << std::endl;
}
