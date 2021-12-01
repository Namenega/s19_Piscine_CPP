/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:51:59 by namenega          #+#    #+#             */
/*   Updated: 2021/12/01 18:18:20 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <typeinfo>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *		generate(void) {
	srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	default:
		break;
	}
	return (NULL);
}

void		identify(Base * p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Class \033[1;33mA*\033[0m called." << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Class \033[1;33mB*\033[0m called." << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "Class \033[1;33mC*\033[0m called." << std::endl;
	} else {
		std::cout << "Not A/B/C type." << std::endl;
	}
}

void		identify(Base & p) {
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Class \033[1;33mA&\033[0m called." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Class \033[1;33mB&\033[0m called." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Class \033[1;33mC&\033[0m called." << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

int main(void)
{
	Base* b;
	b = generate();
	identify(b);
	identify(*b);
	delete b;
	return (0);
}
