/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:37:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 16:31:37 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/* ****************************** Constructor ******************************* */

Intern::Intern() {
	std::cout << "\033[1;34mDefault Intern Constructor called.\033[0m" << std::endl;
}

/* **************************** Copy Constructor **************************** */

Intern::Intern(const Intern & cpy) {
	std::cout << "033[1;34mCopy Intern Constructor called.033[0m" << std::endl;
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Intern &	Intern::operator=(const Intern & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		*this = operEqual;
	}
	return (*this);
}

/* ******************************* Functions ******************************** */

const char*		Intern::UnknownFormException::what() const throw() {
	return ("Intern doesnt know this Form");
}

Form *		Intern::makeForm(std::string formName, std::string formTarget) {
	Form *		newForm[3] = {new PresidentialPardonForm(formTarget),
							new RobotomyRequestForm(formTarget),
							new ShrubberyCreationForm(formTarget)};
	std::string	msg[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	Form *		ret = NULL;

	for (int i = 0; i < 3; i++) {
		if (msg[i] == formName) {
			ret = newForm[i];
		}
		else 
			delete newForm[i];
	}
	if (ret != NULL)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw UnknownFormException();
	return (ret);
}

/* ******************************* Destructor ******************************* */

Intern::~Intern() {
	std::cout << "\033[1;31mIntern Destructor called.\033[0m" << std::endl;
}
