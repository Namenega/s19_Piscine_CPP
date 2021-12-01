/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:08:21 by namenega          #+#    #+#             */
/*   Updated: 2021/11/30 19:05:07 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Wrong Numbers of Arguments." << std::endl;
		return (-1);
	}
	Scalar	test(av[1]);
	test.toEverything();
	std::cout << "Char : " << test.getChar() << std::endl;
	std::cout << "Int : " << test.getInt() << std::endl;
	std::cout << "Float : " << test.getFloat() << std::endl;
	std::cout << "Double : " << test.getDouble() << std::endl;
	return (0);
}
