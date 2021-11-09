/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:00:41 by namenega          #+#    #+#             */
/*   Updated: 2021/11/09 18:40:06 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	shrek("Shrek");
	ScavTrap	drake("the Drake");

	// operator<<(std::cout, shrek);
	std::cout << std::endl;
	shrek.attack("the Drake");

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.takeDamage(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.beRepaired(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	return (0);
}
