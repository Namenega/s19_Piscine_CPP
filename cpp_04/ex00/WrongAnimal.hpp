/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:39:12 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 11:23:53 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

//fonction membre virtual = "method"

class WrongAnimal
{
	private:
		
	protected:
		std::string		_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal & cpy);
		WrongAnimal(std::string newType);
		~WrongAnimal();

		std::string		getType() const;

		void	makeSound() const;

		WrongAnimal &	operator=(WrongAnimal const & operEqual);
};

std::ostream &		operator<<(std::ostream & COUT, WrongAnimal const & operOstream);

#endif
