/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:08:37 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 11:16:40 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	x = 5;
char test = 'c';
char c = 'z';

namespace	no1
{
	int x = 6;
	char test = 'd';
	char c = 'a';
}

namespace	no2
{
	int x = 7;
	char test = 'e';
	char c = 'b';
}

namespace	no3 = no2;

int main()
{
	printf("global : [%d] - [%c] - [%c]\n", x, test, c);
	printf("no1    : [%d] - [%c] - [%c]\n", no1::x, no1::test, no1::c);
	printf("no2    : [%d] - [%c] - [%c]\n", no2::x, no2::test, no2::c);
	printf("no3    : [%d] - [%c] - [%c]\n", no3::x, no3::test, no3::c);
	printf("global : [%d] - [%c] - [%c]\n", x, test, c);
	return (0);
}
