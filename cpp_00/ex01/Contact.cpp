/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:58:53 by namenega          #+#    #+#             */
/*   Updated: 2021/10/22 18:09:10 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact() {}

void	print_cringe(std::string s, int time)
{
	// (void)time;
	std::cout << s << std::endl;
	sleep(time);
}

/**************************** Get and set Firstname ***************************/

int		Contact::setFirstName()
{
	print_cringe("V_Assistant : Let's add a new FRIEND!! 💪", 1);
	print_cringe("V_Assistant : OK OK! I want to know everything about it!! 🤓", 1);
	print_cringe("V_Assistant : What's your friend's cutey first name??", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _firstname))
		return (-1);
	while (_firstname == "")
	{
		print_cringe("V_Assistant : Haaaan! Come on! Write it, write it!!", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _firstname))
			return (-1);
	}
	print_cringe("V_Assistant : Kawaiiii!! I love it! do you have a crush on this friend?? 😏", 1);
	return (0);
}

std::string		Contact::getFirstName() const
{
	return (_firstname);
}

/**************************** Get and set Lastname ****************************/

int				Contact::setLastName()
{
	print_cringe("V_Assistant : Now what's your friend last name??", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _lastname))
		return (-1);
	while (_lastname == "")
	{
		print_cringe("V_Assistant : Come on! Tell me !! 😏", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _lastname))
			return (-1);
	}
	print_cringe("V_Assistant : I like that one!", 1);
	return (0);
}

std::string		Contact::getLastName() const
{
	return (_lastname);
}

/**************************** Get and set Nickname ****************************/

int				Contact::setNickName()
{
	print_cringe("V_Assistant : Your friend looks cool! Does he have a nickname? 👻", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _nickname))
		return (-1);
	while (_nickname == "")
	{
		print_cringe("V_Assistant : Don't be shy! I want to know! 😭😭", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _nickname))
			return (-1);
	}
	print_cringe("V_Assistant : Oww so cute! You're good at giving nickname! 😃", 1);
	return (0);
}

std::string		Contact::getNickName() const
{
	return (_nickname);
}

/************************* Get and set Birthday Date **************************/

int				Contact::setBirthdayDate()
{
	print_cringe("V_Assistant : You know what you should write? Your friend's birthday date! 🥳🥳", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _birthday))
		return (-1);
	while (_birthday == "")
	{
		print_cringe("V_Assistant : You better not forget your friend's birthday !", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _birthday))
			return (-1);
	}
	print_cringe("V_Assistant : Yaaaay, let's make a huuuuge chocolate cake for this day! 🤤🤤", 1);
	return (0);
}

std::string		Contact::getBirthdayDate() const
{
	return (_birthday);
}

/*************************** Get and set PhoneNumber **************************/

int				Contact::setPhoneNumber()
{
	print_cringe("V_Assistant : Now I need your friend's phone to gossip aaaall day! 🤪", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _phonenumber))
		return (-1);
	while (_phonenumber == "")
	{
		print_cringe("V_Assistant : Come on, a phonebook without phone number ... hehe", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _phonenumber))
			return (-1);
	}
	print_cringe("V_Assistant : Should I call now to hang out? ... Or maybe not? 🤨", 1);
	return (0);
}

std::string		Contact::getPhoneNumber() const
{
	return (_phonenumber);
}

/************************** Get and set DarkestSecret *************************/

int				Contact::setDarkestSecret()
{
	print_cringe("V_Assistant : One last thing yiiiiiii !", 1);
	print_cringe("V_Assistant : I want to know the daaaarkest secret of your friend ! 🤣😜", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, _darksecret))
		return (-1);
	while (_darksecret == "")
	{
		print_cringe("V_Assistant : Aaaanw you don't want to tell me? Pleaaaase 🥺", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, _darksecret))
			return (-1);
	}
	print_cringe("V_Assistant : OMG OMG I better not spread it out! 🤭", 1);
	return (0);
}

std::string		Contact::getDarkestSecret() const
{
	return (_darksecret);
}
