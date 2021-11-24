/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:55:34 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 15:15:51 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_name;
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & cpy);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(const ShrubberyCreationForm & operEqual);

		class ErrorFileException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string	getName() const;
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
