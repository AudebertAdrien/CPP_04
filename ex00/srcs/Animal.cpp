/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/01/31 15:21:26 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor with params called" << std::endl;
}

Animal::Animal(const Animal *src) {
	std::cout << "Animal constructor by copy called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal &src) {
	std::cout << "Animal constructor assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal : Grrrrrrr" << std::endl;
}

std::string	Animal::getType() const {
	return (_type);
}
