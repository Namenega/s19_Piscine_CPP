/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:41:08 by namenega          #+#    #+#             */
/*   Updated: 2021/11/04 21:15:44 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ****************************** Constructor ******************************* */

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
}

/* **************************** Copy Constructor **************************** */

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

/* **************************** Int Constructor ***************************** */

Fixed::Fixed(const int conv)
{
	std::cout << "Int constructor called" << std::endl;
	// *this = conv;
	_fixedValue = conv << _nbrBits;
}

/* *************************** Float Constructor **************************** */

Fixed::Fixed(const float conv)
{
	std::cout << "Float constructor called" << std::endl;
	// *this = conv;
	_fixedValue = roundf(conv * (1 << _nbrBits));
}

/* ************************** Assignment Operator *************************** */

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedValue = rhs._fixedValue;
	return (*this);
}

/* ***************************** Cout Operator ****************************** */

std::ostream &			operator<<(std::ostream & COUT, Fixed const & rhs)
{
	COUT << rhs.toFloat();
	return (COUT);
}

/* *************************** Accessor & Mutator *************************** */

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_fixedValue);
}

void		Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

/* **************************** toInt / toFloat ***************************** */

int			Fixed::toInt(void) const
{
	return (_fixedValue >> _nbrBits);
}

float		Fixed::toFloat(void) const
{
	return ((float)_fixedValue / (1 << _nbrBits));
}

/* ******************************* Destructor ******************************* */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
