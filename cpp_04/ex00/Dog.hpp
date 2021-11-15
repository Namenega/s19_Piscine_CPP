/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 18:10:05 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		
	public:
		Dog();
		Dog(const Dog & cpy);
		virtual ~Dog();

		Dog &			operator=(Dog const & operEqual);

		virtual void	makeSound() const;
};

std::ostream &		operator<<(std::ostream & COUT, Dog const & operOstream);

#endif
