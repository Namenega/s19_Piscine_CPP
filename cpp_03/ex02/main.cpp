/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:54:20 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:52:28 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ScavTrap	shrek("Shrek");
	FragTrap	drake("Drake");

	std::cout << std::endl;
	operator<<(std::cout, shrek);
	std::cout << std::endl;
	operator<<(std::cout, drake);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl;
	shrek.attack("the Drake");
	drake.takeDamage(shrek.getAttackDamage());
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;
	drake.takeDamage(79);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;

	drake.beRepaired(200);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;

    shrek.guardGate();
	std::cout << std::endl;
	drake.takeDamage(200);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl << std::endl;
    drake.highFivesGuys();
    std::cout << std::endl;

	return (0);
}
