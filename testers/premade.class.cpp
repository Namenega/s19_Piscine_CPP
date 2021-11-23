/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premade.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:08:24 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 13:43:19 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Class.hpp"

/* ****************************** Constructor ******************************* */

Class::Class() {
	std::cout << "\033[1;34mDefault Class Constructor called.\033[0m" << std::endl; 
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
	std::cout << "\033[1;31mClass Destructor called.\033[0m" << std::endl;
}
