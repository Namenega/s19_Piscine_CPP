/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:13:48 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:49:08 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap & cpy);
		DiamondTrap(std::string newName);
		~DiamondTrap();

		DiamondTrap &	operator=(DiamondTrap const & operEqual);

		void		whoAmI();
		void		attack(std::string const & target);
};

#endif
