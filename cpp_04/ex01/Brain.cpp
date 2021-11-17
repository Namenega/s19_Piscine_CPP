/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:51:57 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:31:14 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ****************************** Constructor ******************************* */

Brain::Brain() {
	std::cout << "Default Brain Constructor is called." << std::endl; 
}

/* **************************** Copy Constructor **************************** */

Brain::Brain(const Brain & cpy) {
	std::cout << "Brain Constructor copy is called." << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Brain &				Brain::operator=(Brain const & operEqual) {
	std::cout << "--- Printing Brain operator= ---" << std::endl;
	if (this != &operEqual) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = operEqual._ideas[i];
		}
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

/* ******************************* Destructor ******************************* */

Brain::~Brain() {
	std::cout << "Brain Destructor is called." << std::endl;
}
