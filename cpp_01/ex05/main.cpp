/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:19:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 16:41:40 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <unistd.h>

void	printAndSleep(std::string s, int time)
{
	std::cout << s << std::endl;
	sleep(time);
}

int		main(void)
{
	Karen	k;

	printAndSleep("Today, 9pm-3am shift.", 1);
	printAndSleep("- 'Gonna flip burgers all night', said the boy behind his counter.", 2);
	printAndSleep("Suddenly, a wild Karen appears with a 'Make America Great Again' cap!", 2);
	std::cout << std::endl;
	printAndSleep("- 'Oh boy she looks hungry...', whispers the bicky boy.", 2);
	std::cout << std::endl;
	printAndSleep("- 'I would like to order a 7XL-double-cheese-triple-pickle-special-ketchup burger', shouted Karen\nwhile taking her dark faked Gucci glasses.", 3);
	std::cout << std::endl;
	printAndSleep("- 'Here you go Ma'am !'", 1);
	std::cout << std::endl;
	printAndSleep("The boy gave her that juicy fat burger.", 2);
	printAndSleep("As fast as she grabbed the burger, she said :", 2);
	std::cout << std::endl;
	std::cout << "- '";
	k.complain("DEBUG");
	printAndSleep("'", 2);
	std::cout << std::endl;
	printAndSleep("- 'Sure Ma'am, it will cost 2$ extra !'", 2);
	std::cout << std::endl;
	printAndSleep("'Yes', was thinking the bicky boy, 'Here we go...'", 2);
	std::cout << std::endl;
	std::cout << "- '";
	k.complain("INFO");
	printAndSleep("', said Karen", 3);
	std::cout << std::endl;
	printAndSleep("- 'I know Ma'am, I don't make the rules, it's two slices of bacon for each burger.'", 3);
	std::cout << std::endl;
	std::cout << "- '";
	k.complain("WARNING");
	printAndSleep("'", 3);
	std::cout << std::endl;
	printAndSleep("- 'The rules are the rules Ma'am !'", 2);
	std::cout << std::endl;
	std::cout << "- '";
	k.complain("ERROR");
	printAndSleep("', she shouted.", 2);
	std::cout << std::endl;
	printAndSleep("The Manager, passing by, interrupted his actions and shot her down...", 2);
	printAndSleep("Indeed, the Manager is a level 12 Manager, that weak Karen can't do anything against him", 3);
	k.complain("456");
	return (0);
}
