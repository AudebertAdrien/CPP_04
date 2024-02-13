/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:16:16 by motoko            #+#    #+#             */
/*   Updated: 2024/02/13 15:16:16 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
#include "ICharacter.hpp"

Materia::Materia() : AMateria("Unknow") {
	std::cout << "Materia constructor called" << std::endl;
}

Materia::Materia(const std::string type) : AMateria(type) {
	std::cout << "Materia constructor with params called" << std::endl;
}

Materia::Materia(const Materia &src) : AMateria(src.getType()) {
	std::cout << "Materia constructor by copy called" << std::endl;
	*this = src;
}

Materia& Materia::operator=(const Materia &src)  {
	std::cout << "Materia constructor assignment operator called" << std::endl;
	if (this != &src) {
	}
	return (*this);
}

Materia::~Materia(void) {
	std::cout << "Materia destructor called" << std::endl;
}

AMateria* Materia::clone() const {
	AMateria *new_Amateria = new Materia(this->getType());
    return (new_Amateria);
}

void Materia::use(ICharacter & target)
{
	if (this->_type == "ice")	
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->_type == "cure")	
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
