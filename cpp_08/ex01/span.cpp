/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:30:25 by namenega          #+#    #+#             */
/*   Updated: 2021/12/13 15:05:04 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/* ****************************** Constructor ******************************* */

Span::Span() : _n(0) {

}

Span::Span(int n) : _n(n) {

}

/* **************************** Copy Constructor **************************** */

Span::Span(const Span & cpy) {
	*this = cpy;
}

/* ******************************* Operator= ******************************** */

Span &			Span::operator=(const Span & operEqual) {
	if (this != &operEqual) {
		this->_n = operEqual._n;
		this->_vect = operEqual._vect;
	}
	return (*this);
}

/* ******************************* Exceptions ******************************* */

const char *	Span::NoSpaceException::what() const throw() {
	return ("The Span is full. No space left.");
}

const char *	Span::OneNumberOnlyException::what() const throw() {
	return ("There is 0 or 1 number in the span. Minimum 2 required.");
}

/* ******************************* Functions ******************************** */

void		Span::addNumber(unsigned int number) {
	return (this->_vect.size() >= this->_n ? throw NoSpaceException()
		: this->_vect.push_back(number));
}

unsigned int	Span::shortestSpan(void) const {
	if (this->_vect.size() < 2)
		throw OneNumberOnlyException();
	std::vector<unsigned int>	tmp(this->_vect);
	std::sort(tmp.begin(), tmp.end());
	unsigned int span = UINT_MAX;
	for(std::vector<unsigned int>::iterator i = tmp.begin(); i != tmp.end() && i + 1 != tmp.end(); i++) {
		unsigned int j = *(i + 1) - *i;
		if (j < span)
			span = j;
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const {
	if (this->_vect.size() < 2)
		throw OneNumberOnlyException();
	unsigned int min = *std::min_element(this->_vect.begin(), this->_vect.end());
	unsigned int max = *std::max_element(this->_vect.begin(), this->_vect.end());
	return (max - min);
}

/* ******************************* Destructor ******************************* */

Span::~Span() {
	
}
