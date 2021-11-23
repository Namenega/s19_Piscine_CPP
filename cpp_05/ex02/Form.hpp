/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:41:23 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 17:00:21 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form;

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_neededGradeToSign;
		int const			_neededGradeToExec;
	public:
		Form();
		Form(std::string const newName, int const gradeToSign, int const gradeToExec);
		Form(const Form & cpy);
		~Form();

		Form &			operator=(const Form & operEqual);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class AlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string		getName() const;
		bool			getSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		void			beSigned(Bureaucrat const &signer);

		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &			operator<<(std::ostream & COUT, Form const & operStream);

#endif
