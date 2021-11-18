/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namenega <namenega@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:49:25 by namenega          #+#    #+#             */
/*   Updated: 2021/11/18 17:56:35 by namenega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "--- CREATE BADBOY ---" << std::endl;
    std::cout << std::endl;
    IMateriaSource* badBoy = new MateriaSource();


    std::cout << std::endl;
    std::cout << "--- BADBOY LEARN ICE ---" << std::endl;
    std::cout << std::endl;
    badBoy->learnMateria(new Ice());

    std::cout << std::endl;
    std::cout << "--- BADBOY LEARN CURE ---" << std::endl;
    std::cout << std::endl;
    badBoy->learnMateria(new Cure());

    std::cout << std::endl;
    std::cout << "--- CREATE ME ---" << std::endl;
    std::cout << std::endl;
    ICharacter* me = new Character("me");

    std::cout << std::endl;
    std::cout << "--- CREATE TMP ---" << std::endl;
    std::cout << std::endl;
    AMateria* tmp;

    std::cout << std::endl;
    std::cout << "--- TMP = BADBOY CREATE MATERIA(ICE) ---" << std::endl;
    std::cout << std::endl;
    tmp = badBoy->createMateria("ice");

    std::cout << std::endl;
    std::cout << "--- ME EQUIP MATERIA ---" << std::endl;
    std::cout << std::endl;
    me->equip(tmp);

    std::cout << std::endl;
    std::cout << "--- TMP = BADBOY CREATE MATERIA(CURE) ---" << std::endl;
    std::cout << std::endl;
    tmp = badBoy->createMateria("cure");

    std::cout << std::endl;
    std::cout << "--- ME EQUIP MATERIA ---" << std::endl;
    std::cout << std::endl;
    me->equip(tmp);
// //    tmp = badBoy->createMateria("ice");
// //    me->equip(tmp);
// //    tmp = badBoy->createMateria("cure");
// //    me->equip(tmp);

    std::cout << std::endl;
    std::cout << "--- CREATE BOB ---" << std::endl;
    std::cout << std::endl;
    ICharacter* bob = new Character("bob");

    std::cout << std::endl;
    std::cout << "--- ME USE BOB ---" << std::endl;
    std::cout << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
// //    me->use(2, *bob);
// //    me->use(3, *bob);

    std::cout << std::endl;
    std::cout << "\n----- DELETE BOB -----" << std::endl;
    std::cout << std::endl;
    delete bob;

    std::cout << std::endl;
    std::cout << "\n----- DELETE ME -----" << std::endl;
    std::cout << std::endl;
    delete me;

    std::cout << std::endl;
    std::cout << "\n----- DELETE BADBOY -----" << std::endl;
    std::cout << std::endl;
    delete badBoy;
    
    return 0;
}
