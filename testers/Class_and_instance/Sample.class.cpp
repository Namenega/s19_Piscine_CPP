/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:46:24 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 14:17:43 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
** Sample::Sample
**	|       -------------------------------------------
**	|                                                   \
** Dans la class Sample, je veux accéder à la fonction Sample (constructor)
*/

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

/*
** Sample::Sample
**	|       -------------------------------------------
**	|                                                   \
** Dans la class Sample, je veux accéder à la fonction Sample (destructor)
*/

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
** Declaration fonction membre dans le .cpp
*/

void	Sample::fct(void)
{
	std::cout << "Member function fct called" << std::endl;
	return ;
}
