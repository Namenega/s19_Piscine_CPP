/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:58:41 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 14:21:46 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	Sample instance;

	instance.test = 50;

	std::cout << "instance.test = " << instance.test << std::endl;

	instance.fct();

	return (0);
}
