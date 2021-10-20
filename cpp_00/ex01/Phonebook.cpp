/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:15 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 20:32:52 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() : _ContactNumber(0)
{
	std::cout << "Constructor is called now" << std::endl;
}

int		Phonebook::AddContact()
{
	if (_ContactNumber == 8)
	{
		print_cringe("V_Assistant : Su.. Sumimasen... But you can only have 8 friends! 😩", 1);
		print_cringe("V_Assistant : I mean, with me it will be 9 hihi 😎😘", 1);
		std::cout << std::endl;
		return (0);
	}
	if (_contact[_ContactNumber].setFirstName() == -1)
		return (-1);
	_ContactNumber++;
	return (0);
}

// int		Phonebook::SearchContact()
// {

// }

Phonebook::~Phonebook()
{
	std::cout << "Destructor is called now" << std::endl;
}
