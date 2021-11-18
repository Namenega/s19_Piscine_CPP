/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:42:37 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:47:17 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ****************************** Constructor ******************************* */

MateriaSource::MateriaSource() {
	std::cout << "> Default MateriaSource Constructor called." << std::endl;

	for (int i = 0; i < 4; i++) {
		_memory[i] = 0;
	}
}

/* **************************** Copy Constructor **************************** */

MateriaSource::MateriaSource(const MateriaSource & cpy) {
	std::cout << ">>> MateriaSource Copy Constructor called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

MateriaSource &			MateriaSource::operator=(MateriaSource const & operEqual) {
	std::cout << ">>>> operator=" << std::endl;
	if (this != &operEqual) {
		for (int i = 0; i < 4; i++) {
			delete this->_memory[i];
		}
		for (int i = 0; i < 4; i++) {
			_memory[i] = 0;
		}
		for (int i = 0; i < 4; i++) {
			if (this->_memory[i]) {
				this->_memory[i] = operEqual._memory[i]->clone();
			}
		}
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void					MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!this->_memory[i]) {
			this->_memory[i] = m->clone();
			return ;
		}
	}
}

AMateria*				MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_memory[i] && type == this->_memory[i]->getType()) {
			return (this->_memory[i]->clone());
		}
	}
	return (0);
}

/* ******************************* Destructor ******************************* */

MateriaSource::~MateriaSource() {
	std::cout << ">>>>> MateriaSource Destructor called." << std::endl;
	for (int i = 0; i < 4; i++) {
		delete this->_memory[i];
	}
}
