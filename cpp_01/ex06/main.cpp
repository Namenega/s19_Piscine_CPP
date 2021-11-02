/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:19:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 16:50:27 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <unistd.h>


int		main(int ac, char **av)
{
	Karen	k;

	if (ac != 2)
	{
		std::cout << "Error: Arguments number should be 2." << std::endl;
		return (-1);
	}
	k.complain(av[1]);
	return (0);
}
