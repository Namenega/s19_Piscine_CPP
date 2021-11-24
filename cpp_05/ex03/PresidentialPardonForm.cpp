/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:09 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 15:22:12 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ****************************** Constructor ******************************* */

PresidentialPardonForm::PresidentialPardonForm() : Form("f25-5", 25, 5) {
	std::cout << "\033[1;34mDefault PresidentialPardonForm Constructor called.\033[0m"
			<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("f25-5", 25, 5), _target(target) {
	std::cout << "\033[1;34mOverload PresidentialPardonForm Constructor called.\033[0m"
			<< std::endl;
}

/* **************************** Copy Constructor **************************** */

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : Form(cpy) {
	std::cout << "\033[1;36mPresidentialPardonForm Constructor copy is called.\033[0m" << std::endl;
}

/* ******************************* Operator= ******************************** */

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		Form::operator=(operEqual);
		_name = operEqual._name;
		_target = operEqual._target;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string		PresidentialPardonForm::getName() const {
	return (this->_name);
}

std::string		PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

/* ******************************* Functions ******************************** */

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << this->_target << " has been pardonned by Zafod Beeblebrox." << std::endl;
}

/* ******************************* Destructor ******************************* */

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\033[1;31mPresidentialPardonForm Destructor called.\033[0m" << std::endl;
}
