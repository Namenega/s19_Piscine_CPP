/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:55:19 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 12:48:53 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap & cpy);
		ClapTrap(std::string newName);
		ClapTrap(std::string newName, int hp, int energyPoints, int attackDamage);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & operEqual);

		void		setName(std::string newName);
		std::string	getName() const;
		int			getEnergyPoints() const;
		int			getHitPoints() const;
		int			getAttackDamage() const;

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

std::ostream &		operator<<(std::ostream & COUT, ClapTrap const & operOstream);

#endif
