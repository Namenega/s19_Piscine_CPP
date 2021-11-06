/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:51:50 by namenega          #+#    #+#             */
/*   Updated: 2021/11/06 14:11:16 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include	<iostream>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(std::string newName, int hitPoints, int energyPoints,
				int attackDamage);
		ClapTrap(const ClapTrap& cpy);
		~ClapTrap();

		ClapTrap &		operator=(ClapTrap const & rhs);

		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName() const;
		int				getHitPoints() const;
		int				getEnergyPoints() const;
		int				getAttackDamage() const;
};

std::ostream &		operator<<(std::ostream &COUT, ClapTrap const & rhs);

#endif
