/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:03 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 14:21:21 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ****************************** Constructor ******************************* */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("f145-137", 145, 137) {
	std::cout << "\033[1;34mDefault ShrubberyCreationForm Constructor called.\033[0m"
			<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target) {
	std::cout << "\033[1;34mOverload ShrubberyCreationForm Constructor called.\033[0m"
			<< std::endl;
}

/* **************************** Copy Constructor **************************** */

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : Form(cpy) {
	std::cout << "\033[1;36mClass Constructor copy is called.\033[0m" << std::endl;
}

/* ******************************* Operator= ******************************** */

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(const ShrubberyCreationForm & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		Form::operator=(operEqual);
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	
}


/* ******************************* Destructor ******************************* */

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[1;31mShrubberyCreationForm Destructor called.\033[0m" << std::endl;
}
