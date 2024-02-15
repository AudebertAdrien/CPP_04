/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:01:00 by motoko            #+#    #+#             */
/*   Updated: 2024/02/15 13:53:53 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

Character::Character() {
	std::cout << "Character constructor called" << std::endl;

	this->_name = "NPC";
	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		_materia_list[i] = NULL;
		_ground_materia[i] = NULL;
	}
}

Character::Character(std::string name) {
	std::cout << "Character constructor with parans called" << std::endl;

	this->_name = name;
	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		_materia_list[i] = NULL;
		_ground_materia[i] = NULL;
	}
}

Character::Character(Character &src) {
	std::cout << "Character constructor by copy called" << std::endl;

	*this = src;
}

Character& Character::operator=(Character &src) {
	std::cout << "Character constructor assignment operator called" << std::endl;

	if (this != &src) {
		this->_name = src._name;

		for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
			delete this->_materia_list[i];
			_materia_list[i] = new Materia(src._materia_list[i]->getType());
			delete this->_ground_materia[i];
			_ground_materia[i] = new Materia(src._ground_materia[i]->getType());
		}

	}
	return (*this);
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		delete _materia_list[i];
		delete _ground_materia[i];
	}
}

std::string const& Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	std::cout << "Character equip" << std::endl;
	int	count = 0;

	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		if (_materia_list[i] == NULL)
		{
			this->_materia_list[i] = m;
			return ;
		}
		count++;
	}
	if (count == 4)
		std::cout << "error : Not enough space in the inventory!!!" << std::endl;
}

void Character::unequip(int idx) {
	std::cout << "Character unequip" << std::endl;
	AMateria *tmp;

	if (idx >= 0 && idx <= 3 && this->_materia_list[idx] != NULL) {
		tmp = this->_materia_list[idx];
		this->_materia_list[idx] = NULL;
	} else {
		std::cout << "error : Unequip index invalid!!!" << std::endl;
	}
	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		if (_ground_materia[i] == NULL)
		{
			this->_ground_materia[i] = tmp;
			return ;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	std::cout << this->getName() << " : " << this->_materia_list[idx]->getType() << std::endl;
		
	if (idx >= 0 && idx <= 3 && _materia_list[idx] != NULL) {
		_materia_list[idx]->use(target);	
	} else {
		std::cout << "error : Use index materia inventory invalid!!!" << std::endl;
	}
}

void	Character::displayInventory() {
	for (int i = 0; i < AMATERIA_LIST_SIZE; i++) {
		if (_materia_list[i] == NULL)
			std::cout << std::setw(10) << std::right << "empty" << "|";
		else
			std::cout << std::setw(10) << std::right << _materia_list[i]->getType() << "|";
	}
	std::cout << std::endl;

}
