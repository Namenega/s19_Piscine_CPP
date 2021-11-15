/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:42:54 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 18:10:18 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

//fonction membre virtual = "method"

class Animal
{
	private:
		
	protected:
		std::string		_type;
	public:
		Animal();
		Animal(const Animal & cpy);
		Animal(std::string newType);
		virtual ~Animal();

		std::string		getType() const;

		virtual void	makeSound() const;

		Animal &		operator=(Animal const & operEqual);
};

std::ostream &		operator<<(std::ostream & COUT, Animal const & operOstream);

#endif
