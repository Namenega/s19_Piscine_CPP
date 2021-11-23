/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:36:03 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 14:58:52 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is \033[1;35m" << a << std::endl;
	std::cout << "\033[0mb is \033[1;35m" << b << std::endl;
	std::cout << "\033[0mc is \033[1;35m" << c << std::endl;
	std::cout << "\033[0md is \033[1;35m" << d << std::endl;
	
	std::cout << "\033[0ma is \033[1;35m" << a.toInt() << "\033[0m as integer" << std::endl;
	std::cout << "\033[0mb is \033[1;35m" << b.toInt() << "\033[0m as integer" << std::endl;
	std::cout << "\033[0mc is \033[1;35m" << c.toInt() << "\033[0m as integer" << std::endl;
	std::cout << "\033[0md is \033[1;35m" << d.toInt() << "\033[0m as integer" << std::endl;

	return 0;
}
