/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:31:55 by namenega          #+#    #+#             */
/*   Updated: 2021/12/01 17:27:37 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct	s_data
{
	std::string		name;
	float			money;
}				Data;


uintptr_t		serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data			*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int		main(void) {
	Data*	data = new Data;
	uintptr_t serialized = serialize(data);
	Data * deserialized = deserialize(serialized);

	data->name = "namenega";
	data->money = 500.5f;

	std::cout << "Data address :		\033[1;34m" << data << "\033[0m" << std::endl;
	std::cout << "Serialized:		\033[1;34m" << serialized << "\033[0m" << std::endl;
	std::cout << "Deserialized:		\033[1;34m" << deserialized << "\033[0m" << std::endl;
	std::cout << "Deserialized name:	\033[1;34m" << deserialized->name << "\033[0m" << std::endl;
	std::cout << "Deserialized money:	\033[1;34m" << deserialized->money << "\033[0m" << std::endl;

	delete data;
	return (0);
}
