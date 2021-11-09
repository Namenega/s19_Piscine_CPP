/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:29:17 by pyg               #+#    #+#             */
/*   Updated: 2021/11/09 12:41:17 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	printAndSleep(std::string str, int sl)
{
	std::cout << str << std::endl;
	sleep(sl);
}


int main(void)
{
	Zombie*	zombieOne;
	Zombie*	zombieTwo;
	Zombie*	zombieThree;

	zombieOne = newZombie("???"); //will be Juan el Zombito
	zombieTwo = newZombie("Pequeño Carlos");
	zombieThree = newZombie("Juan el Zombicito");

	printAndSleep("January 1972 :", 1);
	printAndSleep("You are deep in the forest, searching for dry tree branches ...", 2);
	printAndSleep("It has been hours and yet, you can't find anything ...", 2);
	printAndSleep("You keep searching otherwise you may freeze to death during the night !", 2);
	printAndSleep("As it is getting darker, you start to hear weird noises.", 2);
	printAndSleep("You prick up one's ears, and hear :", 2);
	std::cout << std::endl;
	zombieOne->announce();
	std::cout << std::endl;
	sleep(2);
	printAndSleep("You don't understand what it is, but it gets louder.", 2);
	std::cout << std::endl;
	zombieOne->announce();
	std::cout << std::endl;
	sleep(2);
	printAndSleep("You freeze.", 1);
	printAndSleep("You just realised what it is : Mexican Zombies.", 2);
	printAndSleep("You look left and right and say silently :", 2);
	std::cout << std::endl;
	printAndSleep("- 'Where are they?'", 1);
	std::cout << std::endl;
	printAndSleep("On the left, you see two Zombies, they look horrible !!", 2);
	std::cout << std::endl;
	zombieThree->announce();
	sleep(2);
	zombieTwo->announce();
	sleep(2);
	std::cout << std::endl;
	printAndSleep("You start to run to the right, through the trees !", 2);
	std::cout << std::endl;
	std::cout << "- 'Damn how many are they ?'" << std::endl << std::endl;
	sleep(2);
	std::cout << "You grab your shotgun and start firing at " << zombieTwo->getName() << "!";
	std::cout << std::endl;
	std::cout << std::endl;
	printAndSleep("- 'Die trash !'", 2);
	std::cout << std::endl;
	sleep(2);
	delete zombieTwo;
	sleep(2);
	printAndSleep("You keep running, turns back and shoot again!", 2);
	delete zombieThree;
	sleep(2);
	std::cout << std::endl;
	printAndSleep("You check your ammo, only one left ...", 2);
	printAndSleep("You see one left Mexican Zombie in front of you !", 2);
	std::cout << std::endl;
	randomChump("Maria la Podrida");
	sleep(2);
	printAndSleep("there are no more left. GGWP!", 4);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	delete zombieOne;
	return (0);
}
