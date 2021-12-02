/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:09:35 by namenega          #+#    #+#             */
/*   Updated: 2021/12/02 14:57:28 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void	swap(T & a, T & b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const &	min(T const & a, T const & b) {
	return (a < b ? a : b);
}

template< typename T >
T const &	max(T const & a, T const & b) {
	return (a > b ? a : b);
}

#endif
