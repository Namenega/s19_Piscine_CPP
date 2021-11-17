/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:30:26 by namenega          #+#    #+#             */
/*   Updated: 2021/11/17 14:19:01 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain & cpy);
		~Brain();

		Brain &	operator=(Brain const & operEqual);
};

std::ostream &		operator<<(std::ostream & COUT, Brain const & operOstream);

#endif
