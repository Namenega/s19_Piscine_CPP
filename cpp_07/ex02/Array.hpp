/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:17:32 by namenega          #+#    #+#             */
/*   Updated: 2021/12/02 16:00:46 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class Array
{
	private:
		T*		_array;
	public:
		Array<T>(void) {
			this->_array = new T[0];
		};

		Array<T>(unsigned int n) {
			this->_array = new T[n];
		};

		Array<T>(const T & copy) {
			*this = copy;
		};
		~Array<T>() {
			delete [] this->_array;
		};

		Array<T> &		operator=(const T & operEqual);
		Array<T>		operator[]();

		int				size(void) const;
};

#endif
