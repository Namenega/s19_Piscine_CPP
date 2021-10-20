/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:15 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 18:32:00 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	ContactNumber = 0;
}

int		Phonebook::AddContact()
{
	// ContactNumber = 0;
	if (ContactNumber == 8)
	{
		print_cringe("V_Assistant : Su.. Sumimasen... But you can only have 8 friends! 😩", 1);
		print_cringe("V_Assistant : I mean, with me it will be 9 hihi 😎😘", 1);
		std::cout << std::endl;
		return (0);
	}
	contact[ContactNumber].getFirstName();
	ContactNumber++;
	return (0);
}

Phonebook::~Phonebook()
{
}
// int		Phonebook::SearchContact()
// {

// }
