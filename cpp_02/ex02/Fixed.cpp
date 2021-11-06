/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:58:20 by namenega          #+#    #+#             */
/*   Updated: 2021/11/04 23:49:22 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ****************************** Constructors ****************************** */

Fixed::Fixed() : _fixedValue(0) {

}

Fixed::Fixed(const Fixed &cpy) {
	*this = cpy;
}

Fixed::Fixed(const int conv) {
	this->_fixedValue = conv << _nbrBits;
}

Fixed::Fixed(const float conv) {
	this->_fixedValue = roundf(conv * (1 << _nbrBits));
}

/* **************************** toInt / toFloat ***************************** */

int			Fixed::toInt(void) const {
	return (_fixedValue >> _nbrBits);
}

float		Fixed::toFloat(void) const {
	return ((float)_fixedValue / (1 << _nbrBits));
}

/* ******************************* Operator= ******************************** */

Fixed &		Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->_fixedValue = rhs._fixedValue;
	return (*this);
}

/* ************************** Comparison Operators ************************** */

/* ************************** >, <, >=, <=, ==, != ************************** */

bool		Fixed::operator>(Fixed const & rhs) const {
	return (this->_fixedValue > rhs._fixedValue);
}

bool		Fixed::operator<(Fixed const & rhs) const {
	return (this->_fixedValue < rhs._fixedValue);
}

bool		Fixed::operator>=(Fixed const & rhs) const {
	return (this->_fixedValue > rhs._fixedValue ||
		this->_fixedValue == rhs._fixedValue);
}

bool		Fixed::operator<=(Fixed const & rhs) const {
	return (this->_fixedValue < rhs._fixedValue ||
		this->_fixedValue == rhs._fixedValue);
}

bool		Fixed::operator==(Fixed const & rhs) const {
	return (this->_fixedValue == rhs._fixedValue);
}

bool		Fixed::operator!=(Fixed const & rhs) const {
	return !(this->_fixedValue == rhs._fixedValue);
}

/* ************************** Arithmetic Operator *************************** */

/* ******************************* +, -, *, / ******************************* */

Fixed		Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed		Fixed::operator/(Fixed const & rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

/* *************************** Increment Operator *************************** */

/* ******************************** ++i, --i ******************************** */

Fixed &		Fixed::operator++(void) {
	this->_fixedValue++;
	return (*this);
}

Fixed &		Fixed::operator--(void) {
	this->_fixedValue--;
	return (*this);
}

/* ******************************** i++, i-- ******************************** */

Fixed		Fixed::operator++(int) {
	Fixed	cpy(*this);

	this->operator++();
	return (cpy);
}

Fixed		Fixed::operator--(int) {
	Fixed	cpy(*this);

	this->operator--();
	return (cpy);
}

/* ******************************** Max/Min ********************************* */

const Fixed &	Fixed::max(Fixed const & nbr1, Fixed const & nbr2) {
	if (nbr1 > nbr2)
		return (nbr1);
	else
		return (nbr2);
}

const Fixed &	Fixed::min(Fixed const & nbr1, Fixed const & nbr2) {
	if (nbr1 > nbr2)
		return (nbr2);
	else
		return (nbr1);
}

/* ******************************* Destructor ******************************* */

Fixed::~Fixed() {
}

/* ******************************* Operator<< ******************************* */

std::ostream &	operator<<(std::ostream &COUT, Fixed const & rsh) {
	COUT << rsh.toFloat();
	return (COUT);
}