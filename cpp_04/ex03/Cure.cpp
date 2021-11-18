/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:07:38 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:45:39 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* ****************************** Constructor ******************************* */

Cure::Cure() : AMateria("cure") {
	std::cout << "> Default Cure Constructor called." << std::endl;
}

/* **************************** Copy Constructor **************************** */

Cure::Cure(const Cure & cpy) : AMateria(cpy) {
	std::cout << ">>> Copy Cure Constructor called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Cure &		Cure::operator=(const Cure & operEqual) {
	std::cout << ">>>> operator=" << std::endl;
	if (this != &operEqual) {
		AMateria::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target) {
	std::cout << "*heals " << target.getName() << "'s wounds.*" << std::endl;
}

/* ******************************* Destructor ******************************* */

Cure::~Cure() {
	std::cout << ">>>>> Cure Destructor called." << std::endl;
}
