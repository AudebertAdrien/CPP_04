/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:40:46 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 15:13:42 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()  {
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const std::string type) {
	std::cout << "MateriaSource constructor with params called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource constructor by copy called" << std::endl;
	*this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)  {
	std::cout << "MateriaSource constructor assignment operator called" << std::endl;
	if (this != &src) {
	}
	return (*this);
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* src) {
	std::cout << "learnMateria destructor called" << std::endl;
}
