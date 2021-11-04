/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:54:16 by namenega          #+#    #+#             */
/*   Updated: 2021/11/04 20:43:11 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ****************************** Constructor ******************************* */

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* **************************** Copy Constructor **************************** */

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->_fixedValue = cpy._fixedValue;
	/*----> == */*this = cpy;
}

/* ************************** Assignment Operator *************************** */

Fixed &		Fixed::operator=(Fixed const & rhs) 
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();
		//----> == this->_fixedValue = rhs._fixedValue;
	return (*this);
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

/* ******************************* Destructor ******************************* */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
OUTPUT

Default constructor called
Copy constructor called
Assignation operator called // <-- Cette ligne est peut-etre absente
getRawBits member function called
Default constructor called
Assignation operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called*/
