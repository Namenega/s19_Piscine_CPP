/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:11:10 by namenega          #+#    #+#             */
/*   Updated: 2021/12/09 15:13:07 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = -3;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "\033[1;34m1.SWAP\033[0m :" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

	std::cout << "\033[1;34m2.MIN\033[0m :" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl << std::endl;

	std::cout << "\033[1;34m3.MAX\033[0m :" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl << std::endl;

	std::string c = "\033[1;35mchaine1\033[0m";
	std::string d = "\033[1;36mchaine2\033[0m";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\033[1;34m1.SWAP\033[0m :" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;

	std::cout << "\033[1;34m2.MIN\033[0m :" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl << std::endl;

	std::cout << "\033[1;34m3.MAX\033[0m :" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
