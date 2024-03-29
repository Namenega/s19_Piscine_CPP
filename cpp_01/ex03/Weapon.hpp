/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:54:44 by namenega          #+#    #+#             */
/*   Updated: 2021/10/28 15:54:29 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <unistd.h>

class Weapon
{
	private:
		std::string		_weaponType;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const&	getType() const;
		void				setType(std::string type);
};

#endif
