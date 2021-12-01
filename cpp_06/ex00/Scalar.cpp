/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:23:04 by namenega          #+#    #+#             */
/*   Updated: 2021/11/30 19:13:51 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

/* ****************************** Constructor ******************************* */

Scalar::Scalar() {

}

Scalar::Scalar(std::string scal) : _scalar(scal) {

}

/* **************************** Copy Constructor **************************** */

Scalar::Scalar(const Scalar & cpy) {
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Scalar &		Scalar::operator=(const Scalar & operEqual) {
	if (this != &operEqual) {
		_scalar = operEqual._scalar;
		_character = operEqual._character;
		_integer = operEqual._integer;
		_float = operEqual._float;
		_double = operEqual._double;
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string			Scalar::getChar() const {
	float				f;
	std::string			ret;
	std::stringstream	strStream;

	strStream << this->_character;
	f = atof(this->_scalar.c_str());
	if (f < CHAR_MIN || f > CHAR_MAX || std::isnan(f)) {
		ret = "impossible";
	}
	else if (!isprint(this->_character)) {
		ret = "non displayable";
	}
	else {
		ret = "'" + strStream.str() + "'";
	}
	return (ret);
}

std::string			Scalar::getInt() const {
	float				f;
	std::string			ret;
	std::stringstream	strStream;

	strStream << this->_integer;
	f = atof(this->_scalar.c_str());
	if (f < INT_MIN || f > INT_MAX || std::isnan(f)) {
		ret = "impossible";
	}
	else {
		ret = strStream.str();
	}
	return (ret);
}

std::string			Scalar::getFloat() const {
	std::string			ret;
	std::stringstream	strStream;

	strStream << this->_float;
	ret = strStream.str();
	if ((this->_float - this->_integer) == 0)
		ret.append(".0");
	ret.append("f");
	return (ret);
}

std::string			Scalar::getDouble() const {
	std::string			ret;
	std::stringstream	strStream;

	strStream << this->_double;
	ret = strStream.str();
	if ((this->_float - this->_integer) == 0)
		ret.append(".0");
	return (ret);

}

/* ******************************* Functions ******************************** */

void				Scalar::toChar() {
	if (this->_scalar.size() == 1 && (this->_scalar.at(0) > '9' || this->_scalar.at(0) < '0')) {
		this->_character = this->_scalar.at(0);
	}
	else
		this->_character = static_cast<char>(atof(this->_scalar.c_str()));
}

void				Scalar::toInt() {
	if (this->_scalar.size() == 1 && (this->_scalar.at(0) > '9' || this->_scalar.at(0) < '0')) {
		this->_integer = this->_scalar.at(0);
	}
	else
		this->_integer = atoi(this->_scalar.c_str());
}

void				Scalar::toFloat() {
	if (this->_scalar.size() == 1 && (this->_scalar.at(0) > '9' || this->_scalar.at(0) < '0')) {
		this->_float = this->_scalar.at(0);
	}
	else
		this->_float = atof(this->_scalar.c_str());
}

void				Scalar::toDouble() {
	if (this->_scalar.size() == 1 && (this->_scalar.at(0) > '9' || this->_scalar.at(0) < '0')) {
		this->_double = this->_scalar.at(0);
	}
	else
		this->_double = static_cast<double>(atof(this->_scalar.c_str()));
}

void				Scalar::toEverything() {
	toChar();
	toInt();
	toFloat();
	toDouble();
}

/* ******************************* Operator<< ******************************* */

std::ostream &		operator<<(std::ostream & COUT, const Scalar & operOstream) {
	COUT << operOstream.getChar() << std::endl;
	COUT << operOstream.getInt() << std::endl;
	COUT << operOstream.getFloat() << std::endl;
	COUT << operOstream.getDouble() << std::endl;
	return (COUT);
}

/* ******************************* Destructor ******************************* */

Scalar::~Scalar() {

}
