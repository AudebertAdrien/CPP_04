/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:00:15 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 17:26:22 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Materia.hpp"

int	main(void)
{

	//Character p1("papyChulo");
	ICharacter *m1 = new Character("TOTOT");
	/*
	Character p2("tonton");

	std::cout << p1.getName() << std::endl;
	std::cout << p2.getName() << std::endl;

	std::cout << std::string(50, '#') << std::endl;

	//AMateria *m1 = new Materia("ice");
	//p1.equip(m1);
	//p1.use(0, p2);

	std::cout << std::string(50, '#') << std::endl;

	AMateria *m2 = m1->clone();

	std::cout << std::string(50, '#') <<  m2->getType() << std::endl;

	Materia m3("fire");

	std::cout << std::string(50, '#') << std::endl;

	Materia *m4 = m3.clone();

	std::cout << std::string(50, '#') << std::endl;
	Character p2("p2");
	std::cout << std::string(50, '#') << std::endl;
	Character p3(p2);
	std::cout << std::string(50, '#') << std::endl;
	Character p4("p4");
	std::cout << std::string(50, '#') << std::endl;
	*/
	return (0);
}
