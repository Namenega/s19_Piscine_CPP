/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   premade.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:26:49 by namenega          #+#    #+#             */
/*   Updated: 2021/11/11 10:31:27 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <iostream>

class premadeClass
{
	private:
		
	public:
		premadeClass();
		premadeClass(const premadeClass & cpy);
		~premadeClass();

		premadeClass &	operator=(premadeClass const & operEqual);
};

std::ostream &		operator<<(std::ostream & COUT, premadeClass const & operOstream);

#endif
