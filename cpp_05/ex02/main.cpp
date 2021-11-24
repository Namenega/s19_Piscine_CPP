/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:08:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 15:27:22 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	srand (time(NULL));
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
	std::cout << "---- \033[1;35mBureaucrat can Robotomy\033[0m ----" << std::endl;
	try
	{
		Bureaucrat lilGangsta("Lil Gangsta", 26);
		operator<<(std::cout, lilGangsta);
		RobotomyRequestForm bigJoe("Big Joe");
		lilGangsta.signForm(bigJoe);
		std::cout << std::endl;
		lilGangsta.executeForm(bigJoe);
		std::cout << std::endl;
		lilGangsta.executeForm(bigJoe);
		std::cout << std::endl;
		lilGangsta.executeForm(bigJoe);
		std::cout << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mBureaucrat cannot execute Robotomy\033[0m ----" << std::endl;
	try
	{
		Bureaucrat batman("Batman", 56);
		operator<<(std::cout, batman);
		RobotomyRequestForm f("Joker");
		batman.signForm(f);
		std::cout << std::endl;
		batman.executeForm(f);

	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mBureaucrat can execute Presidential Pardon\033[0m ----" << std::endl;
	try
	{
		Bureaucrat mrMacron("Mr. Macron", 1);
		operator<<(std::cout, mrMacron);
		PresidentialPardonForm giletJaune("Gilet Jaune");
		mrMacron.signForm(giletJaune);
		std::cout << std::endl;
		mrMacron.executeForm(giletJaune);

	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mBureaucrat cannot execute Presidential Pardon\033[0m ----" << std::endl;
	try
	{
		Bureaucrat joeBiden("Joe Biden", 20);
		operator<<(std::cout, joeBiden);
		PresidentialPardonForm texas("Texas");
		joeBiden.signForm(texas);
		std::cout << std::endl;
		joeBiden.executeForm(texas);

	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}
