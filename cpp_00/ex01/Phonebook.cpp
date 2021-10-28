/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:15 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 09:42:06 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() : _ContactNumber(0)
{
}

int		Phonebook::AddContact()
{
	if (_ContactNumber == 8) //TODO : doit remplacer le plus ancien !!!
	{
		print_cringe("V_Assistant : Su.. Sumimasen... But you can only have 8 friends! 😩", 1);
		print_cringe("V_Assistant : I mean, with me it will be 9 hihi 😎😘", 1);
		std::cout << std::endl;
		return (0);
	}
	if (_contact[_ContactNumber].setFirstName() == -1)
		return (-1);
	if (_contact[_ContactNumber].setLastName() == -1)
		return (-1);
	if (_contact[_ContactNumber].setNickName() == -1)
		return (-1);
	if (_contact[_ContactNumber].setBirthdayDate() == -1)
		return (-1);
	if (_contact[_ContactNumber].setPhoneNumber() == -1)
		return (-1);
	if (_contact[_ContactNumber].setDarkestSecret() == -1)
		return (-1);
	print_cringe("V_Assistant : A new friend has been fully added YAY! 🤩🤩", 1);
	_ContactNumber++;
	return (0);
}

int		Phonebook::SearchContact()
{
	std::string			indexChosen;
	std::stringstream	s;
	int					index;

	std::cout <<"YOU : ";
	if (!getline(std::cin, indexChosen))
		return (-1);
	while (indexChosen == "")
	{
		print_cringe("You don't want to see the hidden informations about any contact? 😔", 1);
		print_cringe("Choose an index number !", 0);
		std::cout <<"YOU : ";
		if (!getline(std::cin, indexChosen))
			return (-1);
	}
	for (unsigned int i = 0; i < indexChosen.size(); i++)
	{
		if (isdigit(indexChosen[i]) == 0)
		{
			print_cringe("You wrote the index wrong... 😣", 1);
			return (0);
		}
	}
	//Ici on met indexChosen(str) dans le stream et on le ressort dans index(int)
	//Useful for parsing input
	s << indexChosen;	//add indexChosen to to the stringsteam object.
	s >> index;			//read something from the stringstream object.
	if (index > _ContactNumber || index == 0)
	{
		print_cringe("This index doesn't exist... 😩😩", 1);
		return (0);
	}
	print_cringe("V_Assistant : What secrets can you friend hide ? 😼", 1);
	std::cout << "1. " << _contact[index - 1].getFirstName() << std::endl;
	std::cout << "2. " << _contact[index - 1].getLastName() << std::endl;
	std::cout << "3. " << _contact[index - 1].getNickName() << std::endl;
	std::cout << "4. " << _contact[index - 1].getBirthdayDate() << std::endl;
	std::cout << "5. " << _contact[index - 1].getPhoneNumber() << std::endl;
	std::cout << "6. " << _contact[index - 1].getDarkestSecret() << std::endl;
	std::cout << std::endl;
	return (0);
}

void	Phonebook::PrintContact()
{	
	print_cringe("V_Assistant : Here is your friend's list, you got so many !", 1);
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < _ContactNumber; i++)
	{
		std::cout << "|    " << i + 1 << "     |";
		_contact[i].setUpFirstName();
		_contact[i].setUpLastName();
		_contact[i].setUpNickname();
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << std::endl;
}


int		Phonebook::getNumberContact() const
{
	return (_ContactNumber);
}

Phonebook::~Phonebook()
{
}
