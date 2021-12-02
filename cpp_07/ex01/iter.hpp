/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:59:25 by namenega          #+#    #+#             */
/*   Updated: 2021/12/02 15:16:25 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter(T* array, size_t size, void (*funct)(T & arg)) {
	for (size_t i = 0; i < size; i++) {
		funct(array[i]);
	}
}

#endif
