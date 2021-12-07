/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:22:29 by namenega          #+#    #+#             */
/*   Updated: 2021/12/07 14:24:51 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>

int		main(void)
{
	std::cout << "\033[1;31mTEST1\033[0m : Find occurence that exists." << std::endl;
	try
	{
		std::array<int, 5>	ar1 = {0, 1, 2, 3, 4};
		
		int finderino = easyfind(ar1, 4);
		std::cout << "> element found is : \033[1;36m" << finderino << "\033[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "\033[1;31mTEST2\033[0m : Find occurence that does not exist." << std::endl;
	try
	{
		std::array<int, 5>	ar1 = {0, 1, 2, 3, 4};
		
		int finderino = easyfind(ar1, 6);
		std::cout << "> element found is : \033[1;36m" << finderino << "\033[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
