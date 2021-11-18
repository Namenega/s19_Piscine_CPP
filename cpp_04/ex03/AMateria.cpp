/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:55:02 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:43:43 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ****************************** Constructor ******************************* */

AMateria::AMateria() : _type("") {
	std::cout << "> Default AMateria Constructor is called." << std::endl; 
}

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << ">> AMateria _type Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

AMateria::AMateria(const AMateria & cpy) {
	std::cout << ">>> AMateria Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

AMateria &				AMateria::operator=(AMateria const & operEqual) {
	std::cout << ">>>> operator=" << std::endl;
	if (this != &operEqual) {
		this->_type = operEqual._type;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string const &		AMateria::getType() const {
	return (this->_type);
}

/* ******************************* Functions ******************************** */

void					AMateria::use(ICharacter& target) {
	(void)target;
}

/* ******************************* Destructor ******************************* */

AMateria::~AMateria() {
	std::cout << ">>>>> AMateria Destructor is called." << std::endl;
}
