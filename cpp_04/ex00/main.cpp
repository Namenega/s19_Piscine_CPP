/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:30:03 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 18:13:35 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wrAnimal = new WrongAnimal();
	const WrongAnimal* wrongCatto = new WrongCat();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << wrongCatto->getType() << " " << std::endl;
	wrongCatto->makeSound();
	wrAnimal->makeSound();
	std::cout << std::endl;
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrAnimal;
	delete wrongCatto;
}
