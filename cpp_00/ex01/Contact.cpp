/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:58:53 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 18:32:03 by namenega         ###   ########.fr       */
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

int		Contact::getFirstName()
{
	print_cringe("V_Assistant : What's your friend's cutey first name??", 1);
	std::cout << "YOU : ";
	if (!getline(std::cin, firstname))
		return (-1);
	while (firstname == "")
	{
		print_cringe("V_Assistant : Haaaan! Come on! Write it, write it!!", 1);
		std::cout << "YOU : ";
		if (!getline(std::cin, firstname))
			return (-1);
	}
	print_cringe("V_Assistant : Kawaiiii!! I love it! do you have a crush on this friend?? 😏", 1);
	return (0);
}

// int		Contact::getLastName()
// {
// 	print_cringe("V_Assistant : What's your friend's cutey first name??", 1);
// 	std::cout << "YOU : ";
// 	if (!getline(std::cin, firstname))
// 		return (-1);
// 	while (firstname == "")
// 	{
// 		print_cringe("V_Assistant : Haaaan! Come on! Write it, write it!!", 1);
// 		if (!getline(std::cin, firstname))
// 			return (-1);
// 	}
// 	print_cringe("V_Assistant : Kawaiiii!! I love it! do you have a crush on this friend?? 😏", 1);
// 	return (0);
// }
