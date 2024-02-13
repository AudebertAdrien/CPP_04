/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:10:45 by motoko            #+#    #+#             */
/*   Updated: 2024/02/13 15:12:24 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) {
	std::cout << "AMateria constructor with params called" << std::endl;
	this->_type = type;
}

std::string const& AMateria::getType() const {
	std::cout << "AMateria getType : " << this->_type << std::endl;
	return (this->_type);
}

void	AMateria::use(ICharacter & target) {
	std::cout << "test" << std::endl;

}
