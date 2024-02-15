/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:00:15 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 13:35:03 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Materia.hpp"

int	main(void)
{
	Character p1("tata");
	Character p2("tonton");

	std::cout << "p1 : " << p1.getName() << std::endl;
	std::cout << "p2 : " << p2.getName() << std::endl;

	std::cout << std::string(50, '#') << std::endl;

	AMateria *m1 = new Materia("ice");
	AMateria *m2 = new Materia("fire");
	AMateria *m3 = new Materia("earth");
	AMateria *m4 = new Materia("cure");


	p1.equip(m1);
	p1.equip(m2);
	p1.equip(m3);
	p1.equip(m4);
	p1.displayInventory();

	p1.use(0, p2);
	p1.unequip(0);
	p1.displayInventory();
	p1.use(0, p2);

	std::cout << std::string(50, '#') << std::endl;

	Character p3(p1);
	std::cout << "p3 : " << p3.getName() << std::endl;
	p3.displayInventory();

	delete p1;
	delete p2;
	delete p3;

	std::cout << std::string(50, '#') << std::endl;
	std::cout << std::string(50, '#') << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}
