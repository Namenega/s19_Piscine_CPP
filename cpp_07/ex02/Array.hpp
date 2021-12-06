/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:17:32 by namenega          #+#    #+#             */
/*   Updated: 2021/12/06 12:40:56 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template< typename T >
class Array
{
	private:
		T*				_array;
		unsigned int	_len;
	public:
		Array(void) {
			this->_array = new T[0];
			this->_len = 0;
		};

		Array(unsigned int n) {
			this->_array = new T[n]();
			this->_len = n;
		};

		Array(const Array & copy) {
			this->_array = NULL;
			*this = copy;
		};
		
		virtual ~Array() {
			delete [] this->_array;
		};

		class ArrayException : public std::exception
		{
			virtual const char *what() const throw() {
				return ("This Element is out of the limits.");
			};
		};

		Array &		operator=(const Array & operEqual) {
			if (this != &operEqual) {
				if (this->_array)
					delete [] this->_array;
				this->_array = new T[operEqual._len];
				this->_len = operEqual._len;
				for (unsigned int i = 0; i < this->_len; i++)
					this->_array[i] = operEqual._array[i];
			}
			return (*this);
		};

		T &		operator[](unsigned int const i) {
			if (i >= this->_len || i < 0)
				throw ArrayException();
			else
				return (this->_array[i]);
		};

		unsigned int	size(void) const {
			return (this->_len);
		};
};

template<typename T>
std::ostream &operator<<(std::ostream &os, Array<T> const &other)
{
	std::cout << "[";
	for (size_t i = 0; i < other.size(); i++)
		os << const_cast<Array<T> &>(other)[i] << ", ";
	std::cout << "]";
	return (os);
}

#endif
