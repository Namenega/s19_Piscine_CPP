/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:16:51 by namenega          #+#    #+#             */
/*   Updated: 2021/12/06 12:58:39 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 12

int main(int, char **)
{
	//TEST1
	std::cout << std::endl;
	Array<int> empty;
	std::cout << "\033[1;31mTEST 1\033[0m - Empty array: " << empty << std::endl;


	//TEST2
	Array<int> a(10);
	std::cout << "\033[1;31mTEST 2\033[0m - Default Array: " << a << std::endl;
	std::cout << std::endl;

	//TEST3
	std::cout << "----------" << std::endl;
	std::cout << std::endl;
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "\033[1;31mTEST 3\033[0m - Array with unsigned int as param : " << std::endl;
	std::cout << "Size recieved : \033[1;36m" << MAX_VAL << "\033[0m" << std::endl;
	std::cout << "Size got: \033[1;36m" << numbers.size() << "\033[0m" << std::endl;
	std::cout << std::endl;

	//TEST4
	std::cout << "----------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31mTEST 4\033[0m - Copy : " << std::endl;
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		std::cout << "array: " << numbers << std::endl;
		std::cout << "copy: " << test << std::endl;
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "\033[1;34mArray copied sucessfully.\033[0m" << std::endl;
	std::cout << std::endl;

	//TEST5
	std::cout << "-----------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31mTEST 5\033[0m - Trying to access negative index" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	//TEST6
	std::cout << "-----------" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;31mTEST 6\033[0m - Trying to access index >= len" << std::endl;
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	delete[] mirror;
	return 0;
}
