/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:33:07 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 16:23:41 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & cpy);
		virtual ~Intern();

		class UnknownFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		Intern &	operator=(const Intern & operEqual);
		Form*		makeForm(std::string formName, std::string formTarget);
};

#endif
