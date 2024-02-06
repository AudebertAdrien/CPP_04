/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/02/06 14:02:40 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
	std::cout << this->_type << " constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(std::string type) : AAnimal(type) {
	std::cout << this->_type << " constructor with params called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : AAnimal("Dog") {
	std::cout << this->_type << " constructor by copy called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &src) {
	std::cout << this->_type << " constructor assignment operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;	
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << this->_type << " destructor called" << std::endl;
	delete(_brain);
}

void	Dog::makeSound() const {
	std::cout << this->_type << " : Wouffff" << std::endl;
}

void	Dog::display_ideas() {
	this->_brain->get_idea();
}
