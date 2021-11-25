/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:00:41 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:37:27 by namenega         ###   ########.fr       */
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
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl;
	shrek.attack("the Drake");
	drake.takeDamage(shrek.getAttackDamage());
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;
	drake.takeDamage(200);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;

	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl;
	drake.beRepaired(200);
	drake.attack("the Drake");
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;

	drake.guardGate();
	std::cout << std::endl;

	return (0);
}
