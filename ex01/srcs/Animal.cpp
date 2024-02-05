/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/02/05 15:08:31 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << this->_type << " constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << this->_type << " constructor with params called" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << this->_type << " constructor by copy called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal &src) {
	std::cout << this->_type << " constructor assignment operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << this->_type << " : Grrrrrrr" << std::endl;
}

std::string	Animal::getType() const {
	return (_type);
}
