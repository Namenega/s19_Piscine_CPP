/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:20:16 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*	_dogBrain;
	public:
		Dog();
		Dog(const Dog & cpy);
		virtual ~Dog();

		Dog &			operator=(Dog const & operEqual);

		virtual void	makeSound() const;
};

std::ostream &		operator<<(std::ostream & COUT, Dog const & operOstream);

#endif
