/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:03:46 by namenega          #+#    #+#             */
/*   Updated: 2021/11/09 18:13:10 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	shrek("Shrek");
	ClapTrap	drake("the Drake");

	std::cout << std::endl;
	shrek.attack("the Drake");

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.takeDamage(5);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;

	std::cout << "drake HP : " << drake.getHitPoints() << std::endl;
	drake.beRepaired(100);
	std::cout << "drake HP : " << drake.getHitPoints() << std::endl << std::endl;
	return (0);
}
