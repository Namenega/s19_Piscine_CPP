/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:57 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 16:59:20 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string		_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & cpy);
		~AMateria();

		//operator
		AMateria &			operator=(AMateria const & operEqual);

		//accessors
		std::string const & getType() const; //Returns the materia type

		//functions
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
