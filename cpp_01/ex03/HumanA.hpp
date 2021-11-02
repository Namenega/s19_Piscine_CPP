/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:55:28 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 16:09:44 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

//! HumanA a toujours une Weapon en main : Reference

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack() const;
};

#endif
