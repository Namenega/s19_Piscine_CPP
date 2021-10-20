/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostream.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:24:34 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 11:31:16 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //gere les flux d'entree/sortie

int main()
{
	int	buf;

	std::cout << "Quel age as-tu? : ";
	std::cin >> buf;
	std::cout << "Tu as "<< buf <<" ans" << std::endl;
	//double quotes important pour print une variable dans un std::cout
	return (0);
}
