/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:06:11 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 16:02:00 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat;

# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const newName, int newGrade);
		Bureaucrat(const Bureaucrat & cpy);
		~Bureaucrat();

		Bureaucrat &		operator=(Bureaucrat const & operEqual);

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

		std::string			getName() const;
		int					getGrade() const;

		void				lowerGrade();
		void				biggerGrade();
		void				signForm(Form &f) const;
		void				executeForm(Form const & form);
};

std::ostream &			operator<<(std::ostream& COUT, Bureaucrat const & operStream);

#endif
