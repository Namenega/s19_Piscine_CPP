/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:21:35 by namenega          #+#    #+#             */
/*   Updated: 2021/12/07 14:22:07 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class easyfindException : public std::exception
{
	public:
		virtual const char *	what() const throw() {
			return ("> Occurence cannot be found.");
		};
};

template< typename T >
int &	easyfind(T & i, int j) {
	typename T::iterator	iter;
	iter = std::find(i.begin(), i.end(), j);
	if (iter == i.end())
		throw easyfindException();
	return (*iter);
}

#endif
