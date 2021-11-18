/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:19:31 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:19:47 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:
		Ice();
		Ice(const Ice & cpy);
		virtual ~Ice();

		Ice &	operator=(Ice const & operEqual);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter & target);
};

#endif
