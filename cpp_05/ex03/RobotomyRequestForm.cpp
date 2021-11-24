/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:12:49 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 15:23:08 by namenega         ###   ########.fr       */
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
		_name = operEqual._name;
		_target = operEqual._target;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string			RobotomyRequestForm::getName() const {
	return (this->_name);
}

std::string			RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

/* ******************************* Functions ******************************** */

const char*				RobotomyRequestForm::RobotomyFailException::what() const throw() {
	return ("Robotomization failed !");
}

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << "\033[1;33m* BRRRZZZZZZZZZZZZZZZZZZZZZ *\033[0m" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else
		std::cout << "I think we have a problem ..." << std::endl;
}

/* ******************************* Destructor ******************************* */

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[1;31mRobotomyRequestForm Destructor called.\033[0m" << std::endl;
}

