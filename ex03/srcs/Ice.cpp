/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:32:11 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 16:04:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria("ice") {
	std::cout << "Ice constructor by copy called" << std::endl;
	*this = src;
}

Ice& Ice::operator=(const Ice &src)  {
	std::cout << "Ice constructor assignment operator called" << std::endl;
	if (this != &src) {
	}
	return (*this);
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const {
	std::cout << "Ice 'clone' implementation" << std::endl;
	AMateria *new_Amateria = new Ice();
    return (new_Amateria);
}

void Ice::use(ICharacter & target)
{
	std::cout << "Ice 'use' implementation" << std::endl;
}
