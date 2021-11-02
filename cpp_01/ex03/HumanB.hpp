/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:56:11 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 16:19:29 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

//! HumanB n'a pas toujours une Weapon en main : pointeur

class HumanB
{
	private:
		std::string		_name;
		Weapon			_weapon;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon weapon);
};

#endif
