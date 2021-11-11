/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:57:11 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 12:48:52 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(const ScavTrap & cpy);
		ScavTrap(std::string newName);
		ScavTrap(int type);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & operEqual);

		void		guardGate();
};

#endif
