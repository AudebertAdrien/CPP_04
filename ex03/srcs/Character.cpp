/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:01:00 by motoko            #+#    #+#             */
/*   Updated: 2024/02/09 13:59:00 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	std::cout << "Character constructor called" << std::endl;
	this->_name = "Unknow";
}

Character::Character(std::string name) {
	std::cout << "Character constructor with parans called" << std::endl;
	this->_name = name;
}

Character::Character(Character &src) {
	std::cout << "Character constructor by copy called" << std::endl;
	*this = src;
}

Character& Character::operator=(Character &src) {
	std::cout << "Character constructor assignment operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
	}
	return (*this);
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const {
	std::cout << "Character getName" << std::endl;
	return (_name);
}

void Character::equip(AMateria* m) {
	std::cout << "Character equip" << std::endl;
	materia_list[0] = m;
}

void use(int idx, Icharacter& target) {
	std::cout << "Character use" << std::endl;
	//materia_list[idx].use(target);	
}
