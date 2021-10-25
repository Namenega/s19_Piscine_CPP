/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyg <pyg@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:11 by namenega          #+#    #+#             */
/*   Updated: 2021/10/25 14:11:47 by pyg              ###   ########.fr       */
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
		//attribute members
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_birthday;
		std::string	_phonenumber;
		std::string	_darksecret;
	public:
		Contact();	//Constructor
		~Contact();	//Destructor

		//set the value of attribute member
		int		setFirstName();
		int		setLastName();
		int		setNickName();
		int		setBirthdayDate();
		int		setPhoneNumber();
		int		setDarkestSecret();

		//Return the value of attribute member
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getBirthdayDate() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

		//Set Attribute to be print in Agenda
		void		setUpFirstName();
		void		setUpLastName();
		void		setUpNickname();
};

// Contact::Contact()
// {
// }

// Contact::~Contact()
// {
// }

void	print_cringe(std::string s, int time);

#endif
