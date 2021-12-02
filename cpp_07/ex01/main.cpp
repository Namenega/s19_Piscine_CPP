/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:58:56 by namenega          #+#    #+#             */
/*   Updated: 2021/12/02 15:17:20 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print_array(int & i) {
	std::cout << i << std::endl;
}

int		main(void) {
	int*	array = new int[5];
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;

	iter(array, 5, print_array);
	return (0);
}
