/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:43 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:08:18 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_catBrain;
	public:
		Cat();
		Cat(const Cat & cpy);
		virtual ~Cat();

		Cat &			operator=(Cat const & operEqual);

		virtual void	makeSound() const;
};

std::ostream &		operator<<(std::ostream & COUT, Cat const & operOstream);

#endif
