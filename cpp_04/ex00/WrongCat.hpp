/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:01:51 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 11:23:57 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		WrongCat(const WrongCat & cpy);
		~WrongCat();

		WrongCat &			operator=(WrongCat const & operEqual);

		void	makeSound() const;
};

std::ostream &		operator<<(std::ostream & COUT, WrongAnimal const & operOstream);

#endif
