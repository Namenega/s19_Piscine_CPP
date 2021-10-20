/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:01:49 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 20:01:33 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();

		int		AddContact();
		int		SearchContact();
		void	PrintContact();
		~Phonebook();
	private:
		Contact		_contact[8];
		int			_ContactNumber;
};

// Phonebook::Phonebook()
// {
// }

// Phonebook::~Phonebook()
// {
// }

#endif
