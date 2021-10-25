/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyg <pyg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:19:05 by namenega          #+#    #+#             */
/*   Updated: 2021/10/25 15:06:48 by pyg              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int main(int ac, char **av)
{
	std::string		line;
	std::string		goodbye;
	Phonebook		pb;

	(void)av;
	if (ac != 1)
	{
		std::cout << "Only launch ./allo please" << std::endl;
		return (0);
	}
	print_cringe("??? : H... Hiii!! 😳 It's me, your virtual assistant 👉👈", 2);
	print_cringe("V_Assistant : It seems we have a little problem... 😓 OOPSIE WOOPSIE 😖😖", 2);
	print_cringe("V_Assistant : ...", 1);
	print_cringe("V_Assistant : ...", 1);
	print_cringe("V_Assistant : I erased every data by mistake... 😔😱", 2);
	print_cringe("V_Assistant : The code monkeys at our headquarters are working VEWY HAWD to fix this! 🙈🙈", 3);
	print_cringe("V_Assistant : Maybe we should start your Phonebook again ! *blush*", 2);
	print_cringe("V_Assistant : Let's start!! 😋😋", 1);
	print_cringe("V_Assistant : There is no contact yet, try to create one 😼", 2);
	while (1)
	{
		print_cringe("V_Assistant : What do you want to do ? 😃", 1);
		print_cringe("V_Assistant : ADD, SEARCH or EXIT ? 🧐", 0);
		std::cout << "YOU : ";
		if (!getline(std::cin, line))
			return (-1);
		if (line == "ADD")
		{
			if (pb.AddContact() == -1)
				return (-1);
			std::cout << std::endl;
		}
		else if (line == "SEARCH")
		{
			if (pb.getNumberContact() == 0)
			{
				print_cringe("V_Assistant : Yikes, you don't have any friends yet 😢", 1);
				print_cringe("V_Assistant : Try ADD one", 1);
			}
			else
			{
				pb.PrintContact();
				print_cringe("V_Assistant : Who are you looking for? 👀", 1);
				print_cringe("V_Assistant : Select the index please !", 1);
				if (pb.SearchContact() == -1)
					return (-1);
			}
			
			std::cout << std::endl;
		}
		else if (line == "EXIT")
		{
			print_cringe("V_Assistant : You... You're leaving already ? ... 🥺", 1);
			print_cringe("V_Assistant : Goodbye, I hope we can play together again soon ! 👋", 2);
			std::cout << "Say goodbye to your virtual assistant :" << std::endl;
			std::cout << "YOU : ";
			std::cin >> goodbye;
			return (0);
		}
		else
		{
			print_cringe("V_Assistant : I... I don't understand, sumimasen 🥺", 1);
			print_cringe("V_Assistant : Can we start again? 👉👈", 2);
			std::cout << std::endl;
		}
	}
	return (0);
}
