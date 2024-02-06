/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/02/06 11:49:04 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << this->_type << " constructor called" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << this->_type << " constructor with params called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << this->_type << " constructor by copy called" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal &src) {
	std::cout << this->_type << " constructor assignment operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	AAnimal::makeSound() const {
	std::cout << this->_type << " : Grrrrrrr" << std::endl;
}

std::string	AAnimal::getType() const {
	return (_type);
}
