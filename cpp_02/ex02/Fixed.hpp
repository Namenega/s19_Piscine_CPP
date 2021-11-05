/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:54:10 by namenega          #+#    #+#             */
/*   Updated: 2021/11/04 23:50:48 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_fixedValue;
		static const int	_nbrBits = 8;
	public:
		//Constructor/Destructor
		Fixed();
		Fixed(const Fixed &cpy);
		Fixed(const int conv);
		Fixed(const float conv);
		~Fixed();

		//accessors
		int				getRawBits(void) const;
		void			setRawBits(int const raw);

		//toType
		float			toFloat(void) const;
		int				toInt(void) const;

		/********************* Operators *********************/
		/* = */
		Fixed &			operator=(Fixed const & rhs);

		/* Comparison */
		bool			operator>(Fixed const & rhs) const;
		bool			operator<(Fixed const & rhs) const;
		bool			operator>=(Fixed const & rhs) const;
		bool			operator<=(Fixed const & rhs) const;
		bool			operator==(Fixed const & rhs) const;
		bool			operator!=(Fixed const & rhs) const;

		/* Arithmetic */
		Fixed			operator+(Fixed const & rhs) const;
		Fixed			operator-(Fixed const & rhs) const;
		Fixed			operator*(Fixed const & rhs) const;
		Fixed			operator/(Fixed const & rhs) const;

		/* Increment */
		Fixed &			operator++();			//++i
		Fixed &			operator--();			//--i
		Fixed			operator++(int);		//i++
		Fixed			operator--(int);		//i--

		static const Fixed &	min(Fixed const & nbr1, Fixed const & nbr2);
		static const Fixed &	max(Fixed const & nbr1, Fixed const& nbr2);
};

std::ostream &		operator<<(std::ostream &COUT, Fixed const & rsh);

#endif
