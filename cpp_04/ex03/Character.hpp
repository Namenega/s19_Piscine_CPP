/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:05:07 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 17:46:41 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria *		_inventory[4];
		int				_count;
	public:
		Character();
		Character(std::string newName);
		Character(Character const & cpy);
		~Character();

		//operator
		Character &			operator=(Character const & operEqual);

		//accessors
		std::string const &	getName() const;

		//function
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
