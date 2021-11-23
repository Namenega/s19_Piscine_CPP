/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:02:03 by namenega          #+#    #+#             */
/*   Updated: 2021/11/23 18:23:07 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ****************************** Constructor ******************************* */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("f145-137", 145, 137) {
	std::cout << "\033[1;34mDefault ShrubberyCreationForm Constructor called.\033[0m"
			<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("f145-137", 145, 137), _target(target) {
	std::cout << "\033[1;34mOverload ShrubberyCreationForm Constructor called.\033[0m"
			<< std::endl;
}

/* **************************** Copy Constructor **************************** */

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : Form(cpy) {
	std::cout << "\033[1;36mShrubberyCreationForm Constructor copy is called.\033[0m" << std::endl;
}

/* ******************************* Operator= ******************************** */

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(const ShrubberyCreationForm & operEqual) {
	std::cout << "\033[1;35m--- Printing operator= ---\033[0m" << std::endl;
	if (this != &operEqual) {
		Form::operator=(operEqual);
	}
	return (*this);
}

/* *************************** Accessor & Mutator *************************** */

std::string		ShrubberyCreationForm::getName() const {
	return (this->_name);
}

std::string		ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

/* ******************************* Functions ******************************** */

const char*		ShrubberyCreationForm::ErrorFileException::what() const throw() {
	return ("Error: fail to open the file.");
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	// Form::execute(executor);
	(void)executor;
	std::ofstream	ofs(this->getTarget().append("_shrubbery").c_str());
	if (!ofs)
		throw ErrorFileException();
	ofs << "                                              ." << std::endl;
	ofs << "                                   .         ;" << std::endl;
	ofs << "      .              .              ;%     ;;" << std::endl;
	ofs << "        ,           ,                :;%  %;" << std::endl;
	ofs << "         :         ;                   :;%;'     .," << std::endl;
	ofs << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	ofs << "             `@%.  `;@%.      ;@@%;" << std::endl;
	ofs << "               `@%%. `@%%    ;@@%;" << std::endl;
	ofs << "                 ;@%. :@%%  %@@%;" << std::endl;
	ofs << "                   %@bd%%%bd%%:;" << std::endl;
	ofs << "                     #@%%%%%:;;" << std::endl;
	ofs << "                     %@@%%%::;" << std::endl;
	ofs << "                     %@@@%(o);  . '" << std::endl;
	ofs << "                     %@@@o%;:(.,'" << std::endl;
	ofs << "                 `.. %@@@o%::;" << std::endl;
	ofs << "                    `)@@@o%::;" << std::endl;
	ofs << "                     %@@(o)::;" << std::endl;
	ofs << "                    .%@@@@%::;" << std::endl;
	ofs << "                    ;%@@@@%::;." << std::endl;
	ofs << "                   ;%@@@@%%:;;;." << std::endl;
	ofs << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	ofs.close();
}

/* ******************************* Destructor ******************************* */

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[1;31mShrubberyCreationForm Destructor called.\033[0m" << std::endl;
}
