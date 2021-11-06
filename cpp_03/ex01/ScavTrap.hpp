/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:57:22 by namenega          #+#    #+#             */
/*   Updated: 2021/11/06 15:28:55 by namenega         ###   ########.fr       */
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

		void		guardGate();

		ScavTrap &		operator=(ScavTrap const &rhs);
};

std::ostream &			operator<<(std::ostream COUT, ScavTrap const & rhs);

#endif
