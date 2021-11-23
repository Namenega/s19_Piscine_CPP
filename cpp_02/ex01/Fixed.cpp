/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:41:08 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 15:05:35 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ****************************** Constructor ******************************* */

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "\033[1;34mDefault Fixed Constructor called.\033[0m" <<std::endl;
}

/* **************************** Copy Constructor **************************** */

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "\033[1;34mCopy constructor called.\033[0m" << std::endl;
	*this = cpy;
}

/* **************************** Int Constructor ***************************** */

Fixed::Fixed(const int conv)
{
	std::cout << "\033[1;34mInt constructor called.\033[0m" << std::endl;
	_fixedValue = conv << _nbrBits;
}

/* *************************** Float Constructor **************************** */

Fixed::Fixed(const float conv)
{
	std::cout << "\033[1;34mFloat constructor called.\033[0m" << std::endl;
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
	std::cout << "\033[1;31mDestructor Fixed called.\033[0m" << std::endl;
}
