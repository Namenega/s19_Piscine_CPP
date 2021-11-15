/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:54:20 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 15:14:34 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap	shrek("Shrek");
	DiamondTrap	drake("Drake");

	std::cout << std::endl;
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	shrek.attack("the Drake");
    drake.takeDamage(shrek.getAttackDamage());
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	drake.takeDamage(79);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	drake.beRepaired(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	shrek.guardGate();
	std::cout << std::endl;
	drake.takeDamage(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	drake.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
