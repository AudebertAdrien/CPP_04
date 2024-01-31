/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/01/31 15:19:05 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << "Cat constructor with params called" << std::endl;
}

Cat::Cat(const Cat *src) : Animal("Cat") {
	std::cout << "Cat constructor by copy called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat &src) {
	std::cout << "Cat constructor assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Cat : Miaouuuuuu" << std::endl;
}
