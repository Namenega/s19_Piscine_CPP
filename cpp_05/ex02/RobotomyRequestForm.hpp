/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:12:54 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 14:09:41 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_name;
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & cpy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(const RobotomyRequestForm & operEqual);

		class RobotomyFailException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string	getName() const;
		std::string	getTarget() const;
		void		execute(Bureaucrat const & executor) const;
};

#endif
