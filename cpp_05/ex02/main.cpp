/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:08:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 17:12:27 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	std::cout << "---- \033[1;35mTry Bureaucrat can Shrubbery\033[0m ----" << std::endl;
	try
	{
		Bureaucrat alPacino("Al Pacino", 1);
		operator<<(std::cout, alPacino);
		ShrubberyCreationForm f1("cocaïna_tree");
		operator<<(std::cout, f1);
		alPacino.signForm(f1);
		alPacino.executeForm(f1);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mTry Bureaucrat cannot Shrubbery\033[0m ----" << std::endl;
	try
	{
		Bureaucrat	grosToni("Gros Toni", 146);
		operator<<(std::cout, grosToni);
		ShrubberyCreationForm	f2("Pasta_tree");
		operator<<(std::cout, f2);
		grosToni.signForm(f2);
		grosToni.executeForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	//---------------------------------//
	//---------------------------------//
	// std::cout << "---- \033[1;35mTry ok to not ok\033[0m ----" << std::endl;
	// try
	// {
	// 	Bureaucrat	grosToni("Gros Toni", 1);
	// 	operator<<(std::cout, grosToni);
	// 	Form		f3("Form 76c", 149, 100);
	// 	operator<<(std::cout, f3);
	// 	Form		f4("Form 86c", 1, 1);
	// 	operator<<(std::cout, f4);
	// 	grosToni.signForm(f3);
	// 	grosToni.lowerGrade();
	// 	grosToni.signForm(f4);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl;
	// std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	// std::cout << "---- \033[1;35mTry sign 2 times\033[0m ----" << std::endl;
	// try
	// {
	// 	Bureaucrat	lilGangsta("Lil Gangsta", 100);
	// 	operator<<(std::cout, lilGangsta);
	// 	Form		f5("Form 96c", 149, 100);
	// 	lilGangsta.signForm(f5);
	// 	operator<<(std::cout, f5);
	// 	lilGangsta.signForm(f5);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// return (0);
}
