/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:06:51 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 15:13:57 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int		main(int ac, char **av)
{
	std::string			s1;
	std::string			s2;
	std::string			str;
	std::stringstream	buf;
	size_t				pos;
	size_t				start = 0;

	if (ac != 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
	{
		std::cout << "Error: Need 4 (not empty) args" << std::endl;
		return (-1);
	}

	s1 = av[2];
	s2 = av[3];
	std::ifstream Filename(av[1]);
	if (Filename.fail())
	{
		std::cout << "Error: File manipulation failed." << std::endl;
		return (-1);
	}

	std::ofstream ofs("FILENAME.replace");
	if (ofs.fail())
	{
		std::cout << "Error: File manipulation failed." << std::endl;
		return (-1);
	}

	buf << Filename.rdbuf(); //on met le contenu de Filename (ifstream) dans un buf (stringstream)
	str = buf.str(); //on prend le stringstream et on le remet dans une string

	while ((pos = str.find(s1, start)) != std::string::npos)
	{
		str.erase(pos, s1.size());
		str.insert(pos, s2);
		start = pos + s2.size();
	}

	ofs << str;

	Filename.close();
	ofs.close();
	return (0);
}

/*
** FIND(str, pos)
**
** Searches the basic_string for the first occurrence of the sequence
** specified by its arguments.
** When pos is specified, the search only includes characters at or after position 'pos'
** ignoring any possible occurrences that include characters before pos.
**
**
** std::string::npos
**
** npos is a static member constant value with the greatest possible value
** for an element of type size_t
**
**
** erase(pos, len)
**
** Erases part of the string, reducing its length from the first char 'pos'
*/
