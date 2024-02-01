/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:19 by motoko            #+#    #+#             */
/*   Updated: 2024/02/01 11:39:18 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat constructor with params called" << std::endl;
}

WrongCat::WrongCat(const WrongCat *src) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor by copy called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat &src) {
	std::cout << "WrongCat constructor assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "WrongCat : Miaouuuuuu" << std::endl;
}
