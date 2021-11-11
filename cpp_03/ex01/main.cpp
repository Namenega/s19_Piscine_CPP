/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:00:41 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 10:53:18 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	shrek("Shrek");
	ScavTrap	drake("Drake");

	// std::cout << std::endl;
	// operator<<(std::cout, shrek);
	// std::cout << std::endl;
	// operator<<(std::cout, drake);
	// std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	shrek.attack("the Drake");
    drake.takeDamage(shrek.getAttackDamage());
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	drake.takeDamage(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.beRepaired(200);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

    drake.guardGate();
    std::cout << std::endl;

	return (0);
}
