/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:19:05 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 17:35:19 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// static void	print_cringe(std::string s, int time)
// {
// 	// (void)time;
// 	std::cout << s << std::endl;
// 	sleep(time);
// }

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
	print_cringe("V_Assistant : ...", 2);
	print_cringe("V_Assistant : ...", 2);
	print_cringe("V_Assistant : I erased every data by mistake... 😔😱", 2);
	print_cringe("V_Assistant : The code monkeys at our headquarters are working VEWY HAWD to fix this! 🙈🙈", 3);
	print_cringe("V_Assistant : Maybe we should start your Phonebook again ! *blush*", 3);
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
			print_cringe("V_Assistant : Let's add a new FRIEND!! 💪", 1);
			print_cringe("V_Assistant : OK OK! I want to know everything about it!! 🤓", 1);
			if (pb.AddContact() == -1)
				return (-1);
			std::cout << std::endl;
		}
		else if (line == "SEARCH")
		{
			print_cringe("V_Assistant : Who are you looking for? 👀", 1);
			std::cout << std::endl;
		}
		else if (line == "EXIT")
		{
			print_cringe("V_Assistant : You... You're leaving already ? ... 🥺", 1);
			print_cringe("V_Assistant : Goodbye, I hope we can play together again soon ! 👋", 2);
			std::cout << "Say goodbye to your virtual assistant :" << std::endl;
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
