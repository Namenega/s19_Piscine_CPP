/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:57:11 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 12:27:47 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap(int type);
	public:
		ScavTrap();
		ScavTrap(const ScavTrap & cpy);
		ScavTrap(std::string newName);
		virtual ~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & operEqual);

		void		guardGate();
};

#endif
