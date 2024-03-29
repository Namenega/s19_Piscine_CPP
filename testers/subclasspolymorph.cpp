/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subclasspolymorph.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:28:06 by namenega          #+#    #+#             */
/*   Updated: 2021/12/08 15:51:58 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pokemon
{
	public:
		Pokemon(){};
		virtual ~Pokemon(){};
		virtual void	attack() = 0;
};

class Charmander : public Pokemon
{
	public:
		Charmander(){};
		~Charmander(){};
		void	attack() {
			std::cout << "Charmander attacks." << std::endl;
		}
};

int main() {
	Pokemon *		test2 = new Charmander();

	test2->attack();
	delete test2;
	return (0);
}
