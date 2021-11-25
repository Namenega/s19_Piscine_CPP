/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:56:34 by namenega          #+#    #+#             */
/*   Updated: 2021/11/25 14:48:09 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(const FragTrap & cpy);
		FragTrap(std::string newName);
		~FragTrap();

		FragTrap &	operator=(FragTrap const & operEqual);

		void		highFivesGuys(void);
		void		attack(std::string const & target);
};

#endif
