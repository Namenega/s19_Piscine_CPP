/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:38:38 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:20:03 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_memory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & cpy);
		virtual ~MateriaSource();

		MateriaSource &		operator=(MateriaSource const & operEqual);

		virtual void		learnMateria(AMateria*);
		virtual	AMateria *	createMateria(std::string const & type);
};

#endif
