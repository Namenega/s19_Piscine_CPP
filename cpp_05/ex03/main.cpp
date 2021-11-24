/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:08:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 16:26:14 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	srand (time(NULL));
	std::cout << "---- \033[1;35mIntern tries Shrubbery\033[0m ----" << std::endl;
	try
	{
		Bureaucrat namenega("Nathan", 1);
		Intern adrian;
		Form *f1 = adrian.makeForm("ShrubberyCreation", "tree");

		namenega.signForm(*f1);
		namenega.executeForm(*f1);
		delete f1;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mIntern tries PresidentialPardon\033[0m ----" << std::endl;
	try
	{
		Bureaucrat namenega("Nathan", 1);
		Intern adrian;
		Form *f2 = adrian.makeForm("PresidentialPardon", "Zera");

		namenega.signForm(*f2);
		namenega.executeForm(*f2);
		delete f2;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mIntern tries Robotomy\033[0m ----" << std::endl;
	try
	{
		Bureaucrat namenega("Nathan", 1);
		Intern adrian;
		Form *f3 = adrian.makeForm("RobotomyRequest", "Maperrea");

		namenega.signForm(*f3);
		namenega.executeForm(*f3);
		delete f3;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	//---------------------------------//
	//---------------------------------//
	std::cout << "---- \033[1;35mIntern tries something he doesnt know\033[0m ----" << std::endl;
	try
	{
		Bureaucrat namenega("Nathan", 1);
		Intern adrian;
		Form *f4 = adrian.makeForm("bruh", "Jbodson");

		namenega.signForm(*f4);
		namenega.executeForm(*f4);
		delete f4;
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
