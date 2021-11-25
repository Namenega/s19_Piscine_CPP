/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:57:22 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:35:41 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(ScavTrap const & cpy);
		ScavTrap(std::string newName);
		~ScavTrap();

		void		attack(std::string const & target);
		void		guardGate();

		ScavTrap &		operator=(ScavTrap const &rhs);
};

#endif
