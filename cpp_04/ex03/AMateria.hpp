/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:57 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:37:09 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	AMateria;

# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string		_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & cpy);
		virtual ~AMateria();

		//operator
		AMateria &			operator=(AMateria const & operEqual);

		//accessors
		std::string const & getType() const; //Returns the materia type

		//functions
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
