/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:10:45 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 16:21:30 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) {
	std::cout << "AMateria constructor with params called" << std::endl;
	this->_type = type;
}

std::string const& AMateria::getType() const {
	static const  std::string empty = "Empty";

	if (!this)
		return (empty);
	return (this->_type);
}

void	AMateria::use(ICharacter & target) {
	std::cout << "AMateria:use" << std::endl;

