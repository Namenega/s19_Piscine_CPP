/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iostream.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:24:34 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 13:38:35 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //gere les flux d'entree/sortie
#include <fstream> //gere les fichiers

// int main()
// {
// 	int	buf;

// 	std::cout << "Quel age as-tu? : ";
// 	std::cin >> buf;
// 	std::cout << "Tu as "<< buf <<" ans" << std::endl;
// 	//double quotes important pour print une variable dans un std::cout
// 	return (0);
// }


int	main()
{
	std::ifstream ifs("numbers"); //creer un stream d'input qui va ouvrir le fichier numbers
	int dest;
	unsigned int dest2;
	ifs >> dest >> dest2;

	std::cout << dest << " " << dest2 << std::endl;
	ifs.close();

	std::ofstream ofs("test.out");
	ofs << "trop cool le c++" << std::endl;
	ofs.close();
}
