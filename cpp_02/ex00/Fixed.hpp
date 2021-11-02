/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:54:27 by namenega          #+#    #+#             */
/*   Updated: 2021/11/02 18:19:29 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		
	public:
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
};

Fixed::Fixed()
{
}

Fixed::~Fixed()
{
}


#endif //FIXED_HPP
