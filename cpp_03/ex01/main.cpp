/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:00:41 by namenega          #+#    #+#             */
/*   Updated: 2021/11/07 18:06:15 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	shrek("Shrek");
	ClapTrap	drake("le Dragon");

	// operator<<(std::cout, shrek);
	std::cout << std::endl;
	shrek.attack("le Dragon");

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.takeDamage(0);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.beRepaired(0);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	return (0);
}
