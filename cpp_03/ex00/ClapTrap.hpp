/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:47:00 by namenega          #+#    #+#             */
/*   Updated: 2021/11/05 17:48:00 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

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
		ClapTrap(const ClapTrap & cpy);
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

std::ostream &		operator<<(std::ostream & COUT, ClapTrap const & rhs);

#endif
