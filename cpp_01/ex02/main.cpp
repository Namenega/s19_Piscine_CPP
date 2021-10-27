/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:33:07 by namenega          #+#    #+#             */
/*   Updated: 2021/10/27 17:50:31 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	//str
	std::cout << std::endl;
	std::cout << "Address of string   	[&str]       : " << &str << std::endl;
	std::cout << std::endl;

	//address stringPTR & stringREF
	std::cout << "Address of stringPTR	[stringPTR]  : " << stringPTR << std::endl;
	std::cout << "Address of stringREF	[&stringREF] : " << &stringREF << std::endl;
	std::cout << std::endl;

	//content stringPTR & stringREF
	std::cout << "Content of stringPTR	[*stringPTR] : " << *stringPTR << std::endl;
	std::cout << "Content of stringREF	[stringREF]  : " << stringREF << std::endl;
	std::cout << std::endl;
	
	return (0);
}
