/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:40:21 by namenega          #+#    #+#             */
/*   Updated: 2021/12/13 16:46:33 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template< typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void){};
		MutantStack<T>(const MutantStack & cpy) : std::stack<T>(cpy) {};
		MutantStack		&operator=(const MutantStack & rhs) {
			this->c = rhs.c;
			return (*this);
		};
		virtual ~MutantStack(){};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() {
			return (this->c.begin());
		};
		iterator	end() {
			return (this->c.end());
		};
};

#endif
