/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:08:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/22 15:35:50 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	std::cout << "---- \033[1;35mTry 150 to 151\033[0m ----" << std::endl;
	try
	{
		Bureaucrat	jimmy("Jimmy", 150);
		operator<<(std::cout, jimmy);
		jimmy.lowerGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	std::cout << "---- \033[1;35mTry 1 to 0\033[0m ----" << std::endl;
	try
	{
		Bureaucrat	alPacino("Al Pacino", 1);
		operator<<(std::cout, alPacino);
		alPacino.biggerGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	//---------------------------------//
	std::cout << "---- \033[1;35mTry 1 to 2\033[0m ----" << std::endl;
	try
	{
		Bureaucrat	grosToni("Gros Toni", 1);
		operator<<(std::cout, grosToni);
		grosToni.lowerGrade();
		operator<<(std::cout, grosToni);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	std::cout << "---- \033[1;35mTry 150 to 149\033[0m ----" << std::endl;
	try
	{
		Bureaucrat	lilGangsta("Lil Gangsta", 150);
		operator<<(std::cout, lilGangsta);
		lilGangsta.biggerGrade();
		operator<<(std::cout, lilGangsta);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}
