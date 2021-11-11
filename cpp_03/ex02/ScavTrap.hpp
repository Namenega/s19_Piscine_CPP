/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:57:11 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 11:46:53 by namenega         ###   ########.fr       */
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
		ScavTrap(const ScavTrap & cpy);
		ScavTrap(std::string newName);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & operEqual);

		void		guardGate();
};

#endif
