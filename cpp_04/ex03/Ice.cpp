/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:22:57 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:46:23 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* ****************************** Constructor ******************************* */

Ice::Ice() : AMateria("ice") {
	std::cout << "> Ice Constructor called." << std::endl;
}

/* **************************** Copy Constructor **************************** */

Ice::Ice(const Ice & cpy) : AMateria(cpy) {
	std::cout << ">>> Ice Copy Constructor called." << std::endl;
}

/* ******************************* Operator= ******************************** */

Ice &			Ice::operator=(const Ice & operEqual) {
	std::cout << ">>>> operator=" << std::endl;
	if (this != &operEqual) {
		AMateria::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

AMateria*		Ice::clone() const {
	return (new Ice(*this));
}

void			Ice::use(ICharacter & target) {
	std::cout << "*shoots an ice bolet at " << target.getName() << ".*" << std::endl;
}

/* ******************************* Destructor ******************************* */

Ice::~Ice() {
	std::cout << ">>>>> Ice Destructor called." << std::endl;
}
