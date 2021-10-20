/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:01:49 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 18:28:52 by namenega         ###   ########.fr       */
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
		Contact		contact[8];
		int			ContactNumber;
};

// Phonebook::Phonebook()
// {
// }

// Phonebook::~Phonebook()
// {
// }

#endif
