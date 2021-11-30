/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:09:14 by namenega          #+#    #+#             */
/*   Updated: 2021/11/30 18:53:42 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cmath>
# include <climits>

class Scalar
{
	private:
		std::string		_scalar;
		char			_character;
		int				_integer;
		float			_float;
		double			_double;

	public:
		Scalar();
		Scalar(std::string scal);
		Scalar(const Scalar & cpy);
		~Scalar();

		//operators
		Scalar &		operator=(const Scalar & operEqual);

		//accessors
		std::string		getChar() const;
		std::string		getInt() const;
		std::string		getFloat() const;
		std::string		getDouble() const;

		//functions
		void			toChar();
		void			toInt();
		void			toFloat();
		void			toDouble();
		void			toEverything();
};

std::ostream &		operator<<(std::ostream & COUT, const Scalar & operOstream);

#endif
