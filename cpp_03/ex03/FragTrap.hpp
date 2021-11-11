/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:56:34 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 12:58:46 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(const FragTrap & cpy);
		FragTrap(std::string newName);
		FragTrap(int type);
		~FragTrap();

		FragTrap &	operator=(FragTrap const & operEqual);

		void		highFivesGuys(void);
};

#endif
