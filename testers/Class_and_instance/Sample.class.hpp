/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:45:43 by namenega          #+#    #+#             */
/*   Updated: 2021/10/20 14:17:12 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	int	test; //attribut membre

	Sample(void); //constructeur
	~Sample(void);	//destructeur

	void	fct(void); //fonction membre
};

#endif
