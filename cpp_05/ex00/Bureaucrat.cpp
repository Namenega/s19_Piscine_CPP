/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:13:21 by namenega          #+#    #+#             */
/*   Updated: 2021/11/22 15:21:51 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ****************************** Constructor ******************************* */

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "Bureaucrat Default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : _name(newName), _grade(newGrade) {
	std::cout << "Bureaucrat Overload Constructor called." << std::endl;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

/* **************************** Copy Constructor **************************** */

Bureaucrat::Bureaucrat(const Bureaucrat & cpy) : _name(cpy._name), _grade(cpy._grade) {
	std::cout << "Bureaucrat Copy Constructor called." << std::endl;
}

/* ******************************* Operator= ******************************** */

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & operEqual) {
	std::cout << "Bureaucrat Operator= called." << std::endl;
	if (this != &operEqual) {
		_grade = operEqual.getGrade();
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string			Bureaucrat::getName() const {
	return (this->_name);
}

int					Bureaucrat::getGrade() const {
	return (this->_grade);
}

/* ******************************* Functions ******************************** */

const char*		Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high !");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low !");
}

void			Bureaucrat::lowerGrade() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void			Bureaucrat::biggerGrade() {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, Bureaucrat const & operStream) {
	COUT << operStream.getName() << ", bureaucrat grade "
		<< operStream.getGrade() << "." <<std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Default Destructor called." << std::endl;
}
