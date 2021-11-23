/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:54:16 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 14:55:24 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ****************************** Constructor ******************************* */

Fixed::Fixed() : _fixedValue(0)
{
	std::cout << "\033[1;34mDefault Fixed Constructor called\033[0m" << std::endl;
}

/* **************************** Copy Constructor **************************** */

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "\033[1;34mCopy Fixed Constructor called\033[0m" << std::endl;
	*this = cpy;
}

/* ************************** Assignment Operator *************************** */

Fixed &		Fixed::operator=(Fixed const & rhs) 
{
	std::cout << "\033[1;35mAssignation operator called\033[0m" << std::endl;
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();
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
	std::cout << "\033[1;31mFixed Destructor called\033[0m" << std::endl;
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
