/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:56:34 by namenega          #+#    #+#             */
/*   Updated: 2021/11/15 12:34:42 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

//Virtual is used if there are many ways to reach something.
//It will help the compiler to do it automatically, and not be confused

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
