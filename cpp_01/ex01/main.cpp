/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:55:06 by namenega          #+#    #+#             */
/*   Updated: 2021/10/27 16:37:57 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	printAndSleep(std::string str, int sl)
{
	std::cout << str << std::endl;
	sleep(sl);
}

int		main(void)
{
	int				N = 4;
	std::string		name = "Joe Biden";
	Zombie*			firstHorde = zombieHorde(N, name);
	
	printAndSleep("Hey, it's you again !", 1);	
	printAndSleep("Still walking in the wood ?", 1);	
	printAndSleep("Maybe you should check if there are Zombies again!", 2);	
	printAndSleep("Lmao just joking ... But imagine ...", 3);
	std::cout << std::endl;	
	std::cout << std::endl;	
	printAndSleep("You look over your shoulder and see a horde of Zombie !", 2);	
	printAndSleep("(Who would have guessed?)", 2);
	std::cout << "But wait ! It's a horde of " << name << "! What the heck !";
	std::cout << std::endl;
	std::cout << std::endl;
	sleep(1);
	for (int i = 0; i < N; i++)
	{
		sleep(1);
		firstHorde[i].announce();
	}
	sleep(2);
	std::cout << std::endl;
	printAndSleep("Oh boy, here we go again ! ...", 2);
	printAndSleep("Fortunately, you learned from the other time and took more ammo!", 2);
	std::cout << std::endl;
	delete [] firstHorde;
	return (0);
}
