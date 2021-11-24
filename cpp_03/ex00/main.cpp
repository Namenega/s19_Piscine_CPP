/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:03:46 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 11:37:59 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	shrek("Shrek");
	operator<<(std::cout, shrek);
	ClapTrap	drake("the Drake");
	operator<<(std::cout, drake);

	std::cout << std::endl;
	shrek.attack("the Drake");

	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" << std::endl;
	drake.takeDamage(5);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" <<  std::endl << std::endl;
	drake.takeDamage(6);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" <<  std::endl << std::endl;

	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" <<  std::endl;
	drake.beRepaired(100);
	std::cout << "drake HP : \033[1;36m" << drake.getHitPoints() << "\033[0m" <<  std::endl << std::endl;
	return (0);
}
