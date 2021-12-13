/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:39:28 by namenega          #+#    #+#             */
/*   Updated: 2021/12/13 16:41:15 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "Add \033[1;33m5\033[0m in stack" << std::endl;
	mstack.push(5);
	std::cout << "Add \033[1;33m17\033[0m in stack" << std::endl;
	mstack.push(17);

	std::cout << "Top of stack : \033[1;34m";
	std::cout << mstack.top() << "\033[0m" << std::endl;
	
	// Remove the element on the top & size--
	mstack.pop();

	// Remove the element on the top
	std::cout << "Size after pop : \033[1;34m";
	std::cout << mstack.size() << "\033[0m" << std::endl;

	std::cout << "Add \033[1;33m3\033[0m in stack" << std::endl;
	mstack.push(3);
	std::cout << "Add \033[1;33m5\033[0m in stack" << std::endl;
	mstack.push(5);
	std::cout << "Add \033[1;33m737\033[0m in stack" << std::endl;
	mstack.push(737);
	//[...]
	std::cout << "Add \033[1;33m0\033[0m in stack" << std::endl;
	mstack.push(0);
	std::cout << std::endl;


	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "--- \033[1;36mIteration\033[0m ---" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
