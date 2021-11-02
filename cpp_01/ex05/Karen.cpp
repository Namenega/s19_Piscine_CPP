/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:19:48 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 16:41:35 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
}

void	Karen::complain(std::string level)
{
	std::string		levelOfKaren[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Karen::*associateKaren[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (levelOfKaren[i] == level)
		{
			(this->*(associateKaren[i]))();
			return ;
		}
	}
	std::cout << "She's only a level 4 Karen !" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Finally, inner peace..." << std::endl;
}
