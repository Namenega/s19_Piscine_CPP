/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:14:08 by namenega          #+#    #+#             */
/*   Updated: 2021/12/13 15:05:14 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {
	private:
		unsigned int		_n;
		std::vector<unsigned int>	_vect;
	public:
		Span();
		Span(int n);
		Span(const Span & cpy);
		virtual ~Span();

		class NoSpaceException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};

		class OneNumberOnlyException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};

		Span &	operator=(const Span & operEqual);

		void	addNumber(unsigned int number);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
};

#endif
