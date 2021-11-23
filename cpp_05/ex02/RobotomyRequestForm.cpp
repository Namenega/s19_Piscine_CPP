/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:12:49 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 18:30:45 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ****************************** Constructor ******************************* */

RobotomyRequestForm::RobotomyRequestForm() : Form("f72-45", 72, 45) {
	std::cout << "\033[1;34mDefault RobotomyRequestForm Constructor called.\033[0m"
			<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("f72-45", 72, 45), _target(target) {
	std::cout << "\033[1;34mOverload RobotomyRequestForm Constructor called.\033[0m"
			<< std::endl;
}

/* **************************** Copy Constructor **************************** */

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : Form(cpy) {
	std::cout << "\033[1;36mRobotomyRequestForm Constructor copy is called.\033[0m" << std::endl;
}

/* ******************************* Operator= ******************************** */

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		Form::operator=(operEqual);
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */
/* ******************************* Functions ******************************** */

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int randomNumber = rand() % 100;
	std::cout << "\033[1;32mBRRRRZZZZZZZZZZZZZZZZZZZZZZ\033[0m" << std::endl;
	try
	{
		if (randomNumber >= 50)
			std::cout << this->_target << "has been fully robotomized!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

/* ******************************* Destructor ******************************* */

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[1;31mRobotomyRequestForm Destructor called.\033[0m" << std::endl;
}

