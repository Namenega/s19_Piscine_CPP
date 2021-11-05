/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:03:46 by namenega          #+#    #+#             */
/*   Updated: 2021/11/05 18:40:03 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	shrek("Shrek");
	ClapTrap	drake("le Dragon");

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
