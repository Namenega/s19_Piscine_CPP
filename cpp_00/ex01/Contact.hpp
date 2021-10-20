/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:11 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 20:46:42 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <unistd.h>
# include <string>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_birthday;
		std::string	_phonenumber;
		std::string	_darksec;
	public:
		Contact();

		//set the value of attribute member
		int		setFirstName();
		int		setLastName();
		int		setNickName();
		int		setBirthdayDate();
		int		setPhoneNumber();
		int		setDarkSecret();

		//Return the value of attribute member
		// std::string	getFirstName() const;
		// std::string	getLastName() const;
		// std::string	getNickName() const;
		// std::string	getBirthdayDate() const;
		// std::string	getPhoneNumber() const;
		// std::string	getDarkestSecret() const;
		// ~Contact();
};

// Contact::Contact()
// {
// }

// Contact::~Contact()
// {
// }

void	print_cringe(std::string s, int time);

#endif
