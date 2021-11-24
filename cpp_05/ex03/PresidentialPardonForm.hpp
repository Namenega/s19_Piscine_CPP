/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:54:21 by namenega          #+#    #+#             */
/*   Updated: 2021/11/24 15:13:18 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_name;
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm & cpy);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(const PresidentialPardonForm & operEqual);

		std::string			getName() const;
		std::string			getTarget() const;
		void				execute(Bureaucrat const & executor) const;
};

#endif
