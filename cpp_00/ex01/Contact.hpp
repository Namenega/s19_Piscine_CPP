/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:11 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 18:25:38 by namenega         ###   ########.fr       */
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
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	birthday;
		std::string	phonenumber;
		std::string	darksec;
	public:
		Contact();

		int		getFirstName();
		int		getLastName();
		int		getNickName();
		int		getBirthdayDate();
		int		getPhoneNumber();
		int		getDarkSecret();

		// std::string	FirstName;
		// std::string	LastName;
		// std::string	NickName;
		// std::string	BirthdayDate;
		// std::string	PhoneNumber;
		// std::string	DarkestSecret;
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
