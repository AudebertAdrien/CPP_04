/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/02/05 15:07:24 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << this->_type << " constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << this->_type << " constructor with params called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat *src) : Animal("Cat") {
	std::cout << this->_type << " constructor by copy called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat &src) {
	std::cout << this->_type << " constructor assignment operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;	
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << this->_type << " destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << this->_type << " : Miaouuuuuu" << std::endl;
}
