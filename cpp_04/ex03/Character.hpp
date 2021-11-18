/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:05:07 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:28:50 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// #include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria *		_inventory[4];
		int				_count;
	public:
		Character();
		Character(std::string newName);
		Character(const Character & cpy);
		virtual ~Character();

		//operator
		Character &			operator=(Character const & operEqual);

		//accessors
		virtual std::string const &	getName() const;

		//function
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif
