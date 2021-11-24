/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:51:54 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 14:39:25 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ****************************** Constructor ******************************* */

Form::Form() : _name("default"), _signed(false), _neededGradeToSign(10), _neededGradeToExec(10) {
	std::cout << "\033[1;34mDefault Form Constructor called.\033[0m" << std::endl;
}

Form::Form(std::string const newName, int const gradeToSign, int const gradeToExec) :
_name(newName), _signed(false), _neededGradeToSign(gradeToSign), _neededGradeToExec(gradeToExec) {
	std::cout << "\033[1;34mForm Overload Constructor called\033[0m" << std::endl;
}

/* **************************** Copy Constructor **************************** */

Form::Form(const Form & cpy) : _name(cpy._name), _signed(cpy._signed),
_neededGradeToSign(cpy._neededGradeToSign),
_neededGradeToExec(cpy._neededGradeToExec) {
	std::cout << "Copy Form Constructor called." << std::endl;
}

/* ******************************* Operator= ******************************** */

Form &			Form::operator=(const Form & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		_signed = operEqual.getSigned();
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string		Form::getName() const {
	return (this->_name);
}

bool					Form::getSigned() const {
	return (this->_signed);
}

int				Form::getGradeToSign() const {
	return (this->_neededGradeToSign);
}

int				Form::getGradeToExec() const {
	return (this->_neededGradeToExec);
}

/* ******************************* Functions ******************************** */

const char*		Form::GradeTooHighException::what() const throw() {
	return ("Grade Form is too high !");
}

const char*		Form::GradeTooLowException::what() const throw() {
	return ("Grade Form is too low !");
}

const char*		Form::AlreadySignedException::what() const throw() {
	return ("This Form is already signed.");
}

const char*		Form::NotSignedException::what() const throw() {
	return ("This Form is not signed yet.");
}

void Form::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw(NotSignedException());
	if (executor.getGrade() > this->getGradeToExec())
		throw(GradeTooHighException());
}

void			Form::beSigned(Bureaucrat const &signer) {
	if (this->getSigned() == true)
		throw AlreadySignedException();
	else if (signer.getGrade() <= this->_neededGradeToSign)
		this->_signed = true;
	else if (signer.getGrade() > this->_neededGradeToSign)
		throw GradeTooHighException();
	
}

/* ******************************* Operator<< ******************************* */

std::ostream &	operator<<(std::ostream& COUT, Form const & operStream) {
	COUT << "> Form name : " << operStream.getName() << std::endl
		<< "> Signed? : " << operStream.getSigned() << std::endl
		<< "> Grade to sign Form : " << operStream.getGradeToSign() << std::endl
		<< "> Grade to exec Form : " << operStream.getGradeToExec() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

Form::~Form() {
	std::cout << "\033[1;31mForm Destructor called.\033[0m" << std::endl;
}
