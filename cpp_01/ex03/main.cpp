/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:54:17 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 17:03:06 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int		main(void)
{
	Weapon club = Weapon("crude spiked club");
	Weapon sword = Weapon("rusty sword");
	HumanB jim("Jim");
	HumanA bob("Bob", club);

	jim.setWeapon(sword);
	jim.attack();
	bob.attack();

	club.setType("AK47");
	std::cout << std::endl;
	jim.attack();
	bob.attack();
	return (0);
}

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// }
