/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:36:23 by namenega          #+#    #+#             */
/*   Updated: 2021/11/04 20:59:49 by namenega         ###   ########.fr       */
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
		static int const	_nbrBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& cpy);
		Fixed(const int conv);
		Fixed(const float conv);
		~Fixed();

		Fixed &		operator=(Fixed const & rhs);

		int			getRawBits(void) const ;
		void		setRawBits(int const raw);

		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream &			operator<<(std::ostream & COUT, Fixed const & rhs);

#endif
