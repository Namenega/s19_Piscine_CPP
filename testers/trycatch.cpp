/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trycatch.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:51:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/22 14:04:56 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class	except: public std::exception {
	virtual const char * what() const throw() {
		return ("My exception happened.");
	}
}myex;

int	main(void) {
	try
	{
		int age = 15;
		if (age >= 18) {
			std::cout << "You have the right to go." << std::endl;
		}
		else {
			throw myex;
		}
	}
	catch(const std::exception & e)
	{
		std::cerr << "Error : age = " << e.what() << "\n";
	}
	return (0);
}
