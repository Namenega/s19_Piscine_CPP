/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:03:05 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 16:06:39 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
class Cure : public AMateria
{
	private:
	public:
		Cure();
		Cure(const Cure & cpy);
		~Cure();

		Cure &		operator=(Cure const & operEqual);

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif
