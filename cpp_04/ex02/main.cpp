/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:30:03 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:54:21 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n***** My main : Default and Overload *****\n\n";
	Dog *dog1 = new Dog;
	std::cout << "-------------------------------" << std::endl << std::endl;
	Cat *cat1 = new Cat;
	std::cout << "-------------------------------" << std::endl << std::endl;
	Dog *dog2 = new Dog(*dog1);
	std::cout << "-------------------------------" << std::endl << std::endl;
	Cat *cat2 = new Cat(*cat1);

	std::cout << "-------------------------------" << std::endl << std::endl;

	delete dog1;
	std::cout << "-------------------------------" << std::endl << std::endl;
	delete cat1;
	std::cout << "-------------------------------" << std::endl << std::endl;
	delete dog2;
	std::cout << "-------------------------------" << std::endl << std::endl;
	delete cat2;
	std::cout << "-------------------------------" << std::endl << std::endl;

	// std::cout << "\n***** My main : Default and Overload *****\n\n";
	// int size;
	// int compt;

	// compt = 0;
	// std::cout << "How many Animals do you want?\n";
	// std::cin >> size;
	
	// Animal *animal[size];
	// while (compt < size)
	// {
	// 	if (compt % 2)
	// 		animal[compt] = new Cat();
	// 	else
	// 		animal[compt] = new Dog();
	// 	compt++;
	// }
	// compt = 0;
	// while (compt < size)
	// {
	// 	std::cout << "----- Animal : " << compt << " -----\n";
	// 	std::cout << animal[compt]->getType() << std::endl;
	// 	animal[compt]->makeSound();
	// 	compt++;
	// }
	// compt = 0;
	// while (compt < size)
	// {
	// 	delete animal[compt];
	// 	compt++;
	// }

	// std::cout << "\n***** Given main *****\n\n";
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j; //should not create a leak
	// delete i;
}
