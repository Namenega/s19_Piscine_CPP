/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:33:07 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 14:51:08 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	
	//on crée un pointeur qu'on initialise sur l'adresse de str
	std::string*	stringPTR = &str;

	//type de variable : référence sur int
	//On lui assigne une variable! -> la reference pointe sur la variable
	//A partir de ce moment on ne peut plus changer ce sur quoi la reference pointe. (= pointeur)
	//On est obligé de lui assigner une valeur ! Sinon ca pointe sur rien
	//Reference = pointeur toujours déréférencé !
	std::string&	stringREF = str;

	//str
	std::cout << std::endl;
	std::cout << "Address of string   	[&str]       : " << &str << std::endl;
	std::cout << std::endl;

	//address stringPTR & stringREF
	std::cout << "Address of stringPTR	[stringPTR]  : " << stringPTR << std::endl;
	std::cout << "Address of stringREF	[&stringREF] : " << &stringREF << std::endl;
	std::cout << std::endl;

	//content stringPTR & stringREF

	//Affiche le pointeur qui pointe sur str
	//Et on le déréférence pour accéder non pas au pointeur
	//Mais à ce sur quoi le pointeur pointe. Donc str
	std::cout << "Content of stringPTR	[*stringPTR] : " << *stringPTR << std::endl;
	std::cout << "Content of stringREF	[stringREF]  : " << stringREF << std::endl;
	std::cout << std::endl;
	
	return (0);
}

//Les references sont des pointeurs	non null
//									constants
//									toujours déréférencés
