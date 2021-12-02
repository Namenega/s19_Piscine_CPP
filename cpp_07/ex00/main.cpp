/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:11:10 by namenega          #+#    #+#             */
/*   Updated: 2021/12/02 14:56:26 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "\033[1;34mSWAP\033[0m :" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "\033[1;34mMIN\033[0m :" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;

	std::cout << "\033[1;34mMAX\033[0m :" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\033[1;34mSWAP\033[0m :" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "\033[1;34mMIN\033[0m :" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;

	std::cout << "\033[1;34mMAX\033[0m :" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
